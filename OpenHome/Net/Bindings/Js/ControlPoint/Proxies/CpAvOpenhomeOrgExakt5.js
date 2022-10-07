 

/**
* Service Proxy for CpProxyAvOpenhomeOrgExakt5
* @module ohnet
* @class Exakt
*/
    
var CpProxyAvOpenhomeOrgExakt5 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-Exakt-5/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "Exakt";
    this.version = "5";
    this.serviceName = "av.openhome.org-Exakt-5";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["DeviceList"] = new ohnet.serviceproperty("DeviceList","string");
    this.serviceProperties["ConnectionStatus"] = new ohnet.serviceproperty("ConnectionStatus","string");
    this.serviceProperties["ChannelMap"] = new ohnet.serviceproperty("ChannelMap","string");
    this.serviceProperties["AudioChannels"] = new ohnet.serviceproperty("AudioChannels","string");
    this.serviceProperties["Version"] = new ohnet.serviceproperty("Version","string");
    this.serviceProperties["IntegratedDevicesPresent"] = new ohnet.serviceproperty("IntegratedDevicesPresent","bool");

                                        
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgExakt5.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgExakt5.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "DeviceList" property change events
* @method DeviceList_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgExakt5.prototype.DeviceList_Changed = function (stateChangedFunction) {
    this.serviceProperties.DeviceList.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ConnectionStatus" property change events
* @method ConnectionStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgExakt5.prototype.ConnectionStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.ConnectionStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ChannelMap" property change events
* @method ChannelMap_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgExakt5.prototype.ChannelMap_Changed = function (stateChangedFunction) {
    this.serviceProperties.ChannelMap.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "AudioChannels" property change events
* @method AudioChannels_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgExakt5.prototype.AudioChannels_Changed = function (stateChangedFunction) {
    this.serviceProperties.AudioChannels.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Version" property change events
* @method Version_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgExakt5.prototype.Version_Changed = function (stateChangedFunction) {
    this.serviceProperties.Version.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "IntegratedDevicesPresent" property change events
* @method IntegratedDevicesPresent_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgExakt5.prototype.IntegratedDevicesPresent_Changed = function (stateChangedFunction) {
    this.serviceProperties.IntegratedDevicesPresent.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}


/**
* A service action to DeviceList
* @method DeviceList
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.DeviceList = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("DeviceList", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["List"] = ohnet.soaprequest.readStringParameter(result["List"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to DeviceSettings
* @method DeviceSettings
* @param {String} DeviceId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.DeviceSettings = function(DeviceId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("DeviceSettings", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("DeviceId", DeviceId);
    request.send(function(result){
        result["Settings"] = ohnet.soaprequest.readStringParameter(result["Settings"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ConnectionStatus
* @method ConnectionStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.ConnectionStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ConnectionStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ConnectionStatus"] = ohnet.soaprequest.readStringParameter(result["ConnectionStatus"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Set
* @method Set
* @param {String} DeviceId An action parameter
* @param {Int} BankId An action parameter
* @param {String} FileUri An action parameter
* @param {Boolean} Mute An action parameter
* @param {Boolean} Persist An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.Set = function(DeviceId, BankId, FileUri, Mute, Persist, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Set", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("DeviceId", DeviceId);
    request.writeIntParameter("BankId", BankId);
    request.writeStringParameter("FileUri", FileUri);
    request.writeBoolParameter("Mute", Mute);
    request.writeBoolParameter("Persist", Persist);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Reprogram
* @method Reprogram
* @param {String} DeviceId An action parameter
* @param {String} FileUri An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.Reprogram = function(DeviceId, FileUri, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Reprogram", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("DeviceId", DeviceId);
    request.writeStringParameter("FileUri", FileUri);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ReprogramFallback
* @method ReprogramFallback
* @param {String} DeviceId An action parameter
* @param {String} FileUri An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.ReprogramFallback = function(DeviceId, FileUri, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ReprogramFallback", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("DeviceId", DeviceId);
    request.writeStringParameter("FileUri", FileUri);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ChannelMap
* @method ChannelMap
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.ChannelMap = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ChannelMap", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ChannelMap"] = ohnet.soaprequest.readStringParameter(result["ChannelMap"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetChannelMap
* @method SetChannelMap
* @param {String} ChannelMap An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.SetChannelMap = function(ChannelMap, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetChannelMap", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ChannelMap", ChannelMap);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to AudioChannels
* @method AudioChannels
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.AudioChannels = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("AudioChannels", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["AudioChannels"] = ohnet.soaprequest.readStringParameter(result["AudioChannels"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetAudioChannels
* @method SetAudioChannels
* @param {String} AudioChannels An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.SetAudioChannels = function(AudioChannels, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetAudioChannels", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("AudioChannels", AudioChannels);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Version
* @method Version
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.Version = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Version", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Version"] = ohnet.soaprequest.readStringParameter(result["Version"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetIntegratedDevicesPresent
* @method GetIntegratedDevicesPresent
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.GetIntegratedDevicesPresent = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetIntegratedDevicesPresent", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["IntegratedDevicesPresent"] = ohnet.soaprequest.readBoolParameter(result["IntegratedDevicesPresent"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to BootIntegratedDevicesToFallback
* @method BootIntegratedDevicesToFallback
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.BootIntegratedDevicesToFallback = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("BootIntegratedDevicesToFallback", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Reboot
* @method Reboot
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgExakt5.prototype.Reboot = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Reboot", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



