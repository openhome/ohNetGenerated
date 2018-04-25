#!/usr/bin/env python
#
import os
import subprocess
import shutil
from optparse import OptionParser
from Helpers.remote import *
import sys
from os import path

try:
    import boto3
    import boto3.s3.transfer
except:
    print('\nAWS fetch requires boto3 module')
    print("Please install this using 'pip install boto3'\n")
else:
    # create AWS credentials file (if not already present)
    home = None
    if 'HOMEPATH' in os.environ and 'HOMEDRIVE' in os.environ:
        home = os.path.join(os.environ['HOMEDRIVE'], os.environ['HOMEPATH'])
    elif 'HOME' in os.environ:
        home = os.environ['HOME']
    if home:
        awsCreds = os.path.join(home, '.aws', 'credentials')
        if not os.path.exists(awsCreds):
            if sys.version_info[0] == 2:
                from urllib2 import urlopen
            else:
                from urllib.request import urlopen
            try:
                os.mkdir(os.path.join(home, '.aws'))
            except:
                pass
            credsFile = urlopen('http://core.linn.co.uk/~artifacts/artifacts/aws-credentials' )
            creds = credsFile.read()
            with open(awsCreds, 'wt') as f:
                f.write(creds)


class JenkinsBuild():
    def get_options(self):
        env_platform = os.environ.get('PLATFORM')
        env_release = os.environ.get('PUBLISH')
        env_version = os.environ.get('PUBLISH_VERSION')

        parser = OptionParser()
        parser.add_option("-p", "--platform", dest="platform",
            help="Linux-x86, Linux-x64, Windows-x86, Windows-x64, Windows10-x86, Linux-ARM, Linux-armhf, Linux-ppc32, Mac-x64, Mac-x86, Core-ppc32, Core-armv5, Core-armv6, iOs-armv7, iOs-arm64, iOs-x86, Qnap-x86")
        parser.add_option("-r", "--publish",
          action="store_true", dest="release", default=False,
          help="publish release")
        parser.add_option("-v", "--version", dest="version",
            help="version number for release")
        parser.add_option("-j", "--parallel",
            action="store_true", dest="parallel", default=False,
            help="Tell AllTests.py to parallelise the build.")
        (self.options, self.args) = parser.parse_args()

        # check if env variables are set
        # if they are, ignore what is on the command line.

        if env_platform is not None:
            self.options.platform = env_platform
        if env_version is not None:
            self.options.version = env_version
        if env_release == 'true' or self.options.release:
            self.options.release = '1'
        else:
            self.options.release = '0'

        print "options for build are release:%s on platform %s" % (self.options.release, self.options.platform)

    def get_platform(self):
        platforms = {
            'Linux-x86': { 'os': 'linux', 'arch': 'x86', 'publish': True, 'system': 'Linux', 'make_target': ''},
            'Linux-x64': { 'os': 'linux', 'arch': 'x64', 'publish': True, 'system': 'Linux', 'make_target': ''},
            'Linux-ppc32': { 'os': 'linux', 'arch': 'ppc32', 'publish': True, 'system': 'Linux', 'make_target': ''},
            'Windows-x86': { 'os': 'windows', 'arch': 'x86', 'publish': True, 'system': 'Windows', 'make_target': ''},
            'Windows-x64': { 'os': 'windows', 'arch': 'x64', 'publish': True, 'system': 'Windows', 'make_target': ''},
            'Windows10-x86': { 'os': 'windows', 'arch': 'x86', 'publish': True, 'system': 'Windows10', 'make_target': ''},
            'Macos-x64': { 'os': 'macos', 'arch': 'x86', 'publish': False, 'system': 'Mac', 'make_target': ''},  # Old Jenkins label
            'Mac-x64': { 'os': 'macos', 'arch': 'x64', 'publish': True, 'system': 'Mac', 'make_target': 'mac-64=1'},  # New Jenkins label, matches downstream builds
            'Mac-x86': { 'os': 'macos', 'arch': 'x86', 'publish': True, 'system': 'Mac', 'make_target': ''},  # New Jenkins label, matches downstream builds
            'Linux-ARM': { 'os': 'linux', 'arch': 'armel', 'publish': True, 'system': 'Linux', 'make_target': ''},
            'Linux-armhf': { 'os': 'linux', 'arch': 'armhf', 'publish': True, 'system': 'Linux'},
            'iOs-ARM': { 'os': 'iOs', 'arch': 'armv7', 'publish': True, 'system': 'iOs', 'make_target': ''},  # Old Jenkins label
            'iOs-x86': { 'os': 'iOs', 'arch': 'x86', 'publish': True, 'system': 'iOs', 'make_target': 'iOs-x86=1'},
            'iOs-armv7': { 'os': 'iOs', 'arch': 'armv7', 'publish': True, 'system': 'iOs', 'make_target': 'iOs-armv7=1'},
            'iOs-arm64': { 'os': 'iOs', 'arch': 'arm64', 'publish': True, 'system': 'iOs', 'make_target': 'iOs-arm64=1'},
            'Core-ppc32': { 'os': 'Core', 'arch': 'ppc32', 'publish': True, 'system': 'Core', 'make_target': ''},
            'Core-armv5': { 'os': 'Core', 'arch': 'armv5', 'publish': True, 'system': 'Core', 'make_target': ''},
            'Core-armv6': { 'os': 'Core', 'arch': 'armv6', 'publish': True, 'system': 'Core', 'make_target': ''},
            'Android-anycpu': { 'os': 'Android', 'arch': 'anycpu', 'publish': True, 'system': 'Android', 'make_target': 'Android-anycpu=1'},
            'Qnap-x86': { 'os': 'Qnap', 'arch': 'x86', 'publish': True, 'system': 'Qnap', 'make_target': ''}
        }
        current_platform = self.options.platform
        self.platform = platforms[current_platform]

    def set_platform_args(self):
        os_platform = self.platform['os']
        arch = self.platform['arch']
        system = self.platform['system']
        args = []

        if system == 'Windows10':
            args.append('C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\vcvarsall.bat')
            args.append('amd64_x86')
            args.append('store')
        elif os_platform == 'windows' and arch == 'x86':
            args.append('C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Auxiliary\\Build\\vcvarsall.bat')
            args.append('x86')
        elif os_platform == 'windows' and arch == 'x64':
            args.append('C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Auxiliary\\Build\\vcvarsall.bat')
            args.append('amd64')
            os.environ['CS_PLATFORM'] = 'x64'
        if os_platform == 'linux' and arch == 'armel':
            os.environ['CROSS_COMPILE'] = '/usr/local/arm-2011.09/bin/arm-none-linux-gnueabi-'
        if os_platform == 'linux' and arch == 'armhf':
            os.environ['CROSS_COMPILE'] = '/opt/gcc-linaro-5.3.1-2016.05-i686_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-'
        if os_platform == 'Core' and arch == 'ppc32':
            os.environ['CROSS_COMPILE'] = '/opt/rtems-4.11/bin/powerpc-rtems4.11-'
        if os_platform == 'Core' and (arch == 'armv5' or arch == 'armv6'):
            os.environ['CROSS_COMPILE'] = '/opt/rtems-4.11/bin/arm-rtemseabi4.11-'

        self.platform_args = args

    def set_make_args(self):
        arch = self.platform['arch']
        os_platform = self.platform['os']
        args = []
        if (os_platform == 'Core'):
            args.append('platform=' + self.platform['system'] + '-' + arch)
        if (os_platform == 'Qnap'):
            args.append('Qnap-anycpu=1')
        if (arch == 'x64' and os_platform not in ['windows', 'linux', 'macos']):
            args.append('native_only=yes')
        if self.platform['system'] == 'Windows10':
            args.append('windows_store_10=1')
        self.make_args = args

    def do_build(self, debug):
        os_platform = self.platform['os']
        arch = self.platform['arch']
        platform_args = self.platform_args
        args = []
        if self.platform['os'] == 'windows':
            args.append('go.bat')
        else:
            args.append('./go')
        args.append('fetch')
        args.append('--all')
        args.append('--platform=' + self.platform['system'] + '-' + arch)
        if debug:
            args.append('--debug')
        print "do_build: fetch dependencies with cmd %s" % (args,)
        ret = subprocess.check_call(args)
        if ret != 0:
            print ret
            sys.exit(10)

        args = []
        if platform_args != []:
            args.extend(platform_args)
            args.append('&&')
        args.append('make')
        if self.platform['system'] == 'Windows10':
            args.append('CSharpAll')
        else:
            args.append('all')
            if (os_platform == 'linux' or os_platform == 'windows') and arch == 'x86':
                args.append('JavaAll')
            elif os_platform in ['iOs', 'macos', 'Android']:
                make_target = self.platform['make_target']
                if len(make_target) > 0:
                    args.append(make_target)
                if os_platform == 'Android':
                    args.append('JavaAll')
        args.extend(self.make_args)
        if debug:
            args.append('debug=1')
        print "do_build: build with cmd %s" % (args,)
        ret = subprocess.check_call(args)
        if ret != 0:
            print ret
            sys.exit(10)

    def do_release(self):
        release = self.options.release
        platform_args = self.platform_args
        version = self.options.version
        openhome_system = self.platform['system']
        openhome_architecture = self.platform['arch']

        release_targets = []
        release_targets.append('release')
        release_targets.append('debug')

        # clean slate so as not to upload random junk inadvertently
        shutil.rmtree(os.path.join('Build', 'Bundles'), ignore_errors=True)

        for release in release_targets:
            openhome_configuration = release.title()
            build = []
            if platform_args != []:
                build.extend(platform_args)
                build.append('&&')
            build.append('make')
            build.append('tt')
            build.append('uset4=yes')
            build.extend(self.make_args)
            ret = subprocess.check_call(build)
            if ret != 0:
                print ret
                sys.exit(10)

            build = []
            if platform_args != []:
                build.extend(platform_args)
                build.append('&&')

            build.append('make')
            build.append('bundle')
            build.append('uset4=yes')
            build.append('openhome_system=' + openhome_system)
            build.append('openhome_architecture=' + openhome_architecture)
            build.append('openhome_configuration=' + openhome_configuration)
            print "doing release with bundle %s" % (build,)

            ret = subprocess.check_call(build)
            if ret != 0:
                print ret
                sys.exit(10)

            native_bundle_name = os.path.join('Build/Bundles', "ohNetGenerated-%s-%s-%s.tar.gz" % (openhome_system, openhome_architecture, openhome_configuration))
            native_dest = os.path.join('Build/Bundles', "ohNetGenerated-%s-%s-%s-%s.tar.gz" % (version, openhome_system, openhome_architecture, openhome_configuration))
            if os.path.exists(native_dest):
                os.remove(native_dest)
            os.rename(native_bundle_name, native_dest)

            # Add a version to AnyPlatform on Windows-x86 only (arbitrarily chosen platform)
            if openhome_system == 'Windows' and openhome_architecture == 'x86':
                native_bundle_name = os.path.join('Build/Bundles', "ohNetGenerated-AnyPlatform-%s.tar.gz" % (openhome_configuration))
                native_dest = os.path.join('Build/Bundles', "ohNetGenerated-%s-AnyPlatform-%s.tar.gz" % (version, openhome_configuration))
                if os.path.exists(native_dest):
                    os.remove(native_dest)
                os.rename(native_bundle_name, native_dest)
        # rem.check_rsync('releases','builds.openhome.org','Build/Bundles/','~/www/artifacts/ohNetGenerated/')

        entries = os.listdir('Build/Bundles/')
        for entry in entries:
            src = 'Build/Bundles/' + entry
            dst = 's3://linn.artifacts.public/artifacts/ohNetGenerated/' + entry.split('/')[-1]
            print ('Publish %s --> %s' % (src, dst))
            resource = boto3.resource('s3')
            bucket = resource.Bucket(dst.split('/')[2])
            key = '/'.join(dst.split('/')[3:])
            with open( src, 'rb' ) as data:
                bucket.upload_fileobj(data, key)

    def do_postAction(self):
        release = self.options.release
        if self.platform['publish'] and release == '1':
            self.do_release()


def switch_to_script_directory():
    ohnet_dir = path.split(path.realpath(__file__))[0]
    os.chdir(ohnet_dir)


def main():
    switch_to_script_directory()
    Build = JenkinsBuild()
    Build.get_options()
    Build.get_platform()
    Build.set_platform_args()
    Build.set_make_args()
    Build.do_build(False)  # release build
    Build.do_build(True)   # debug build
    Build.do_postAction()


if __name__ == "__main__":
    main()
