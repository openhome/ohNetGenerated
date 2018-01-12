 

/**
* Service Proxy for CpProxyLinnCoUkExakt1
* @module ohnet
* @class Exakt
*/
    
var CpProxyLinnCoUkExakt1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Exakt-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Exakt";
    this.version = "1";
    this.serviceName = "linn.co.uk-Exakt-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["DeviceList"] = new ohnet.serviceproperty("DeviceList","string");
    this.serviceProperties["SettingsAvailable"] = new ohnet.serviceproperty("SettingsAvailable","bool");
    this.serviceProperties["SettingsChangedCount"] = new ohnet.serviceproperty("SettingsChangedCount","int");
    this.serviceProperties["UpdateStatus"] = new ohnet.serviceproperty("UpdateStatus","string");
    this.serviceProperties["UpdateTotalPercentage"] = new ohnet.serviceproperty("UpdateTotalPercentage","int");
    this.serviceProperties["UpdateTotalJobs"] = new ohnet.serviceproperty("UpdateTotalJobs","int");
    this.serviceProperties["UpdateJob"] = new ohnet.serviceproperty("UpdateJob","int");
    this.serviceProperties["UpdateJobPercentage"] = new ohnet.serviceproperty("UpdateJobPercentage","int");
    this.serviceProperties["UpdateJobDescription"] = new ohnet.serviceproperty("UpdateJobDescription","string");
    this.serviceProperties["ChannelMap"] = new ohnet.serviceproperty("ChannelMap","string");
    this.serviceProperties["AudioChannels"] = new ohnet.serviceproperty("AudioChannels","string");
    this.serviceProperties["Version"] = new ohnet.serviceproperty("Version","int");

                                                                            
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkExakt1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkExakt1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "DeviceList" property change events
* @method DeviceList_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.DeviceList_Changed = function (stateChangedFunction) {
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
CpProxyLinnCoUkExakt1.prototype.SettingsAvailable_Changed = function (stateChangedFunction) {
    this.serviceProperties.SettingsAvailable.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "SettingsChangedCount" property change events
* @method SettingsChangedCount_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.SettingsChangedCount_Changed = function (stateChangedFunction) {
    this.serviceProperties.SettingsChangedCount.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateStatus" property change events
* @method UpdateStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.UpdateStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateTotalPercentage" property change events
* @method UpdateTotalPercentage_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.UpdateTotalPercentage_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateTotalPercentage.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateTotalJobs" property change events
* @method UpdateTotalJobs_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.UpdateTotalJobs_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateTotalJobs.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateJob" property change events
* @method UpdateJob_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.UpdateJob_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateJob.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateJobPercentage" property change events
* @method UpdateJobPercentage_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.UpdateJobPercentage_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateJobPercentage.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateJobDescription" property change events
* @method UpdateJobDescription_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.UpdateJobDescription_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateJobDescription.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ChannelMap" property change events
* @method ChannelMap_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExakt1.prototype.ChannelMap_Changed = function (stateChangedFunction) {
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
CpProxyLinnCoUkExakt1.prototype.AudioChannels_Changed = function (stateChangedFunction) {
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
CpProxyLinnCoUkExakt1.prototype.Version_Changed = function (stateChangedFunction) {
    this.serviceProperties.Version.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}


/**
* A service action to DeviceList
* @method DeviceList
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt1.prototype.DeviceList = function(successFunction, errorFunction){ 
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
CpProxyLinnCoUkExakt1.prototype.DeviceSettings = function(DeviceId, successFunction, errorFunction){ 
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
* A service action to SettingsAvailable
* @method SettingsAvailable
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt1.prototype.SettingsAvailable = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SettingsAvailable", this.url, this.domain, this.type, this.version);     
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
* A service action to SettingsChangedCount
* @method SettingsChangedCount
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt1.prototype.SettingsChangedCount = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SettingsChangedCount", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SettingsChangedCount"] = ohnet.soaprequest.readIntParameter(result["SettingsChangedCount"]); 
    
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
* @param {String} ManifestUri An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt1.prototype.Update = function(ManifestUri, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Update", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ManifestUri", ManifestUri);
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
* @param {String} ManifestUri An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExakt1.prototype.UpdateBlocking = function(ManifestUri, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("UpdateBlocking", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ManifestUri", ManifestUri);
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
CpProxyLinnCoUkExakt1.prototype.GetUpdateStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetUpdateStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["UpdateStatus"] = ohnet.soaprequest.readStringParameter(result["UpdateStatus"]); 
        result["UpdateTotalPercentage"] = ohnet.soaprequest.readIntParameter(result["UpdateTotalPercentage"]); 
        result["UpdateTotalJobs"] = ohnet.soaprequest.readIntParameter(result["UpdateTotalJobs"]); 
        result["UpdateJob"] = ohnet.soaprequest.readIntParameter(result["UpdateJob"]); 
        result["UpdateJobPercentage"] = ohnet.soaprequest.readIntParameter(result["UpdateJobPercentage"]); 
        result["UpdateJobDescription"] = ohnet.soaprequest.readStringParameter(result["UpdateJobDescription"]); 
    
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
CpProxyLinnCoUkExakt1.prototype.ChannelMap = function(successFunction, errorFunction){ 
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
CpProxyLinnCoUkExakt1.prototype.SetChannelMap = function(ChannelMap, successFunction, errorFunction){ 
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
CpProxyLinnCoUkExakt1.prototype.AudioChannels = function(successFunction, errorFunction){ 
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
CpProxyLinnCoUkExakt1.prototype.SetAudioChannels = function(AudioChannels, successFunction, errorFunction){ 
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
CpProxyLinnCoUkExakt1.prototype.Version = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Version", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Version"] = ohnet.soaprequest.readIntParameter(result["Version"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



