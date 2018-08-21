 

/**
* Service Proxy for CpProxyLinnCoUkExakt21
* @module ohnet
* @class Exakt2
*/
    
var CpProxyLinnCoUkExakt21 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Exakt2-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Exakt2";
    this.version = "1";
    this.serviceName = "linn.co.uk-Exakt2-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["DeviceList"] = new ohnet.serviceproperty("DeviceList","string");
    this.serviceProperties["SettingsAvailable"] = new ohnet.serviceproperty("SettingsAvailable","bool");
    this.serviceProperties["SettingsChangedSeq"] = new ohnet.serviceproperty("SettingsChangedSeq","string");
    this.serviceProperties["UpdateStatus"] = new ohnet.serviceproperty("UpdateStatus","string");
    this.serviceProperties["ChannelMap"] = new ohnet.serviceproperty("ChannelMap","string");
    this.serviceProperties["AudioChannels"] = new ohnet.serviceproperty("AudioChannels","string");
    this.serviceProperties["Version"] = new ohnet.serviceproperty("Version","int");
    this.serviceProperties["IntegratedDevicesPresent"] = new ohnet.serviceproperty("IntegratedDevicesPresent","bool");

                                                    
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkExakt21.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkExakt21.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "DeviceList" property change events
* @method DeviceList_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt21.prototype.DeviceList_Changed = function (stateChangedFunction) {
    this.serviceProperties.DeviceList.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "SettingsAvailable" property change events
* @method SettingsAvailable_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt21.prototype.SettingsAvailable_Changed = function (stateChangedFunction) {
    this.serviceProperties.SettingsAvailable.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "SettingsChangedSeq" property change events
* @method SettingsChangedSeq_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt21.prototype.SettingsChangedSeq_Changed = function (stateChangedFunction) {
    this.serviceProperties.SettingsChangedSeq.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateStatus" property change events
* @method UpdateStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt21.prototype.UpdateStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ChannelMap" property change events
* @method ChannelMap_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt21.prototype.ChannelMap_Changed = function (stateChangedFunction) {
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
CpProxyLinnCoUkExakt21.prototype.AudioChannels_Changed = function (stateChangedFunction) {
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
CpProxyLinnCoUkExakt21.prototype.Version_Changed = function (stateChangedFunction) {
    this.serviceProperties.Version.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "IntegratedDevicesPresent" property change events
* @method IntegratedDevicesPresent_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt21.prototype.IntegratedDevicesPresent_Changed = function (stateChangedFunction) {
    this.serviceProperties.IntegratedDevicesPresent.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}


/**
* A service action to GetDeviceList
* @method GetDeviceList
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetDeviceList = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDeviceList", this.url, this.domain, this.type, this.version);     
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
* A service action to GetDeviceSettings
* @method GetDeviceSettings
* @param {String} DeviceId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetDeviceSettings = function(DeviceId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDeviceSettings", this.url, this.domain, this.type, this.version);     
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
* A service action to GetSettingsAvailable
* @method GetSettingsAvailable
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetSettingsAvailable = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSettingsAvailable", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SettingsAvailable"] = ohnet.soaprequest.readBoolParameter(result["SettingsAvailable"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSettingsChangedSeq
* @method GetSettingsChangedSeq
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetSettingsChangedSeq = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSettingsChangedSeq", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SettingsChangedSeq"] = ohnet.soaprequest.readStringParameter(result["SettingsChangedSeq"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Update
* @method Update
* @param {String} Manifest An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.Update = function(Manifest, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Update", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Manifest", Manifest);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to UpdateBlocking
* @method UpdateBlocking
* @param {String} Manifest An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.UpdateBlocking = function(Manifest, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("UpdateBlocking", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Manifest", Manifest);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetUpdateStatus
* @method GetUpdateStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetUpdateStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetUpdateStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["UpdateStatus"] = ohnet.soaprequest.readStringParameter(result["UpdateStatus"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetChannelMap
* @method GetChannelMap
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetChannelMap = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetChannelMap", this.url, this.domain, this.type, this.version);     
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
* A service action to GetAudioChannels
* @method GetAudioChannels
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetAudioChannels = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetAudioChannels", this.url, this.domain, this.type, this.version);     
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
* A service action to GetVersion
* @method GetVersion
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.GetVersion = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetVersion", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Version"] = ohnet.soaprequest.readIntParameter(result["Version"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ApplyUpdate
* @method ApplyUpdate
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.ApplyUpdate = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ApplyUpdate", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to PlayTestTrack
* @method PlayTestTrack
* @param {String} ChannelMap An action parameter
* @param {String} Uri An action parameter
* @param {String} Metadata An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.PlayTestTrack = function(ChannelMap, Uri, Metadata, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("PlayTestTrack", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ChannelMap", ChannelMap);
    request.writeStringParameter("Uri", Uri);
    request.writeStringParameter("Metadata", Metadata);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearTestTrack
* @method ClearTestTrack
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt21.prototype.ClearTestTrack = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearTestTrack", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
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
CpProxyLinnCoUkExakt21.prototype.GetIntegratedDevicesPresent = function(successFunction, errorFunction){ 
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
CpProxyLinnCoUkExakt21.prototype.BootIntegratedDevicesToFallback = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("BootIntegratedDevicesToFallback", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



