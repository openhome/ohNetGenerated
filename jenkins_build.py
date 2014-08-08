#!/usr/bin/env python
#
import os, subprocess
import shutil
from optparse import OptionParser
from Helpers.remote import *
import sys
from os import path

class PostActions():
    def do_release(self,platform):
        rem = remote()
        release_targets = []
        release_targets.append('release')
        #release_targets.append('debug')

    def gen_docs(self):
        rem = remote()
        ret = subprocess.check_call('make docs', shell=True)
        if ret != 0:
            print ret
            sys.exit(10)
        ret = rem.rsync_gc('hudson-rsync','openhome.org','Build/Docs/','~/build/nightly/docs')
        if ret != 0:
            print ret
            sys.exit(10)
    
class JenkinsBuild():
    def get_options(self):
        env_platform = os.environ.get('PLATFORM')
        env_nightly = os.environ.get('NIGHTLY')
        env_release = os.environ.get('PUBLISH')
        env_version = os.environ.get('PUBLISH_VERSION')

        parser = OptionParser()
        parser.add_option("-p", "--platform", dest="platform",
            help="Linux-x86, Linux-x64, Windows-x86, Windows-x64, Linux-ARM, Linux-ppc32, Mac-x64, Core-ppc32, Core-armv5, Core-armv6, iOs-armv7, iOs-x86, Qnap-x86")
        parser.add_option("-n", "--nightly",
                  action="store_true", dest="nightly", default=False,
                  help="Perform a nightly build")
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

        if env_platform != None:
            self.options.platform = env_platform
        if env_version != None:
            self.options.version = env_version
        if env_nightly == 'true' or self.options.nightly == True:
             self.options.nightly = '1'
        else:
            self.options.nightly = '0'
        if env_release == 'true' or self.options.release == True:
            self.options.release = '1'
        else:
            self.options.release = '0'

        print "options for build are nightly:%s and release:%s on platform %s" %(self.options.nightly,self.options.release,self.options.platform)

    def get_platform(self):
        platforms = { 
                'Linux-x86': { 'os':'linux', 'arch':'x86', 'publish':True, 'system':'Linux'},
                'Linux-x64': { 'os':'linux', 'arch':'x64', 'publish':True, 'system':'Linux'},
                'Linux-ppc32': { 'os':'linux', 'arch':'ppc32', 'publish':True, 'system':'Linux'},
                'Windows-x86': { 'os': 'windows', 'arch':'x86', 'publish':True, 'system':'Windows'},
                'Windows-x64': { 'os': 'windows', 'arch':'x64', 'publish':True, 'system':'Windows'},
                'Macos-x64': { 'os': 'macos', 'arch':'x86', 'publish':False, 'system':'Mac'}, # Old Jenkins label
                'Mac-x64': { 'os': 'macos', 'arch':'x64', 'publish':True, 'system':'Mac'}, # New Jenkins label, matches downstream builds
                'Mac-x86': { 'os': 'macos', 'arch':'x86', 'publish':True, 'system':'Mac'}, # New Jenkins label, matches downstream builds
                'Linux-ARM': { 'os': 'linux', 'arch': 'armel', 'publish':True, 'system':'Linux'},
                'iOs-ARM': { 'os': 'iOs', 'arch':'armv7', 'publish':True, 'system':'iOs'}, # Old Jenkins label
                'iOs-x86': { 'os': 'iOs', 'arch':'x86', 'publish':True, 'system':'iOs'},
                'iOs-armv7': { 'os': 'iOs', 'arch':'armv7', 'publish':True, 'system':'iOs'},
                'Core-ppc32': { 'os': 'Core', 'arch':'ppc32', 'publish':True, 'system':'Core'},
                'Core-armv5': { 'os': 'Core', 'arch':'armv5', 'publish':True, 'system':'Core'},
                'Core-armv6': { 'os': 'Core', 'arch':'armv6', 'publish':True, 'system':'Core'},
                'Android-anycpu': { 'os': 'Android', 'arch':'anycpu', 'publish':True, 'system':'Android'},
                'Qnap-x86': { 'os':'Qnap', 'arch':'x86', 'publish':True, 'system':'Qnap'}
        }
        current_platform = self.options.platform
        self.platform = platforms[current_platform]

    def set_platform_args(self):
        os_platform = self.platform['os']
        arch = self.platform['arch']
        args=[]

        if os_platform == 'windows' and arch == 'x86':
            args.append('vcvarsall.bat')
        if os_platform == 'windows' and arch == 'x64':
            args.append('vcvarsall.bat')
            args.append('amd64')
            os.environ['CS_PLATFORM'] = 'x64'
        if os_platform == 'linux' and arch == 'armel':
            os.environ['CROSS_COMPILE'] = '/usr/local/arm-2011.09/bin/arm-none-linux-gnueabi-'
        if os_platform == 'Core' and arch == 'ppc32':
            os.environ['CROSS_COMPILE'] = '/opt/rtems-4.11/bin/powerpc-rtems4.11-'
        if os_platform == 'Core' and (arch == 'armv5' or arch == 'armv6'):
            os.environ['CROSS_COMPILE'] = '/opt/rtems-4.11/bin/arm-rtemseabi4.11-'

        self.platform_args = args

    def do_build(self):
        os_platform = self.platform['os']
        arch = self.platform['arch']
        platform_args = self.platform_args
        args=[]
        if self.platform['os'] == 'windows':
            args.append('go.bat')
        else:
            args.append('./go')
        args.append('fetch')
        args.append('--all')
        args.append('--platform=' + self.platform['system'] + '-' + arch)
        print "do_build: fetch dependencies with cmd %s" %(args,)
        ret = subprocess.check_call(args)
        if ret != 0:
            print ret
            sys.exit(10)

        args=[]
        if platform_args != []:
            args.extend(platform_args)
            args.append('&&')
        args.append('make')
        args.append('all')
        if (os_platform == 'linux' or os_platform == 'windows') and arch == 'x86':
            args.append('JavaAll')
        print "do_build: build with cmd %s" %(args,)
        ret = subprocess.check_call(args)
        if ret != 0:
            print ret
            sys.exit(10)

    def do_release(self):
        rem = remote()

        nightly = self.options.nightly
        release = self.options.release
        platform_args = self.platform_args
        platform = self.options.platform
        version = self.options.version
        openhome_system = self.platform['system']
        openhome_architecture = self.platform['arch']
        
        release_targets = []
        release_targets.append('release')

        # clean slate so as not to upload random junk inadvertently
        shutil.rmtree(os.path.join('Build', 'Bundles'), ignore_errors=True)
        
        openhome_configuration = 'Release'
        build = []
        if platform_args != []:
            build.extend(platform_args)
            build.append('&&')
        build.append('make')
        build.append('tt')
        build.append('uset4=yes')
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
        #build.extend(self.platform_make_args)

        print "doing release with bundle %s" %(build,)

        ret = subprocess.check_call(build)
        if ret != 0:
            print ret
            sys.exit(10)

        native_bundle_name = os.path.join('Build/Bundles',"ohNetGenerated-%s-%s-%s.tar.gz" %(openhome_system, openhome_architecture, openhome_configuration))
        native_dest = os.path.join('Build/Bundles',"ohNetGenerated-%s-%s-%s-%s.tar.gz" %(version, openhome_system, openhome_architecture, openhome_configuration))
        if os.path.exists(native_dest):
            os.remove(native_dest)
        os.rename(native_bundle_name, native_dest)

        # Add a version to AnyPlatform on Windows-x86 only (arbitrarily chosen platform)
        if openhome_system == 'Windows' and openhome_architecture == 'x86':
            native_bundle_name = os.path.join('Build/Bundles',"ohNetGenerated.net-AnyPlatform-Release.tar.gz")
            native_dest = os.path.join('Build/Bundles',"ohNetGenerated.net-%s-AnyPlatform-Release.tar.gz" %(version))
            if os.path.exists(native_dest):
                os.remove(native_dest)
            os.rename(native_bundle_name, native_dest)

        rem.check_rsync('releases','www.openhome.org','Build/Bundles/','~/www/artifacts/ohNetGenerated/')
                        
    
    def do_postAction(self):
        nightly = self.options.nightly
        release = self.options.release
        os_platform = self.platform['os']
        arch = self.platform['arch']
        postAction = PostActions()

        if nightly == '1':
            if os_platform == 'linux' and arch == 'x86':
                postAction.gen_docs()

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
    Build.do_build()
    Build.do_postAction()

if __name__ == "__main__":
    main()

