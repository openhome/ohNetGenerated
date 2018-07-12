 

/**
* Service Proxy for CpProxyLinnCoUkUpdate1
* @module ohnet
* @class Update
*/
    
var CpProxyLinnCoUkUpdate1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Update-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Update";
    this.version = "1";
    this.serviceName = "linn.co.uk-Update-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["UpdateStatus"] = new ohnet.serviceproperty("UpdateStatus","string");
    this.serviceProperties["UpdateTopic"] = new ohnet.serviceproperty("UpdateTopic","string");
    this.serviceProperties["UpdateChannel"] = new ohnet.serviceproperty("UpdateChannel","string");

                        
    this.UpdateChannelAllowedValues = [];
    this.UpdateChannelAllowedValues.push("release");
    this.UpdateChannelAllowedValues.push("beta");
    this.UpdateChannelAllowedValues.push("development");
    this.UpdateChannelAllowedValues.push("nightly");

}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkUpdate1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkUpdate1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "UpdateStatus" property change events
* @method UpdateStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkUpdate1.prototype.UpdateStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateTopic" property change events
* @method UpdateTopic_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkUpdate1.prototype.UpdateTopic_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateTopic.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateChannel" property change events
* @method UpdateChannel_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkUpdate1.prototype.UpdateChannel_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateChannel.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to PushManifest
* @method PushManifest
* @param {String} Uri An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate1.prototype.PushManifest = function(Uri, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("PushManifest", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Uri", Uri);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetUpdateFeedParams
* @method SetUpdateFeedParams
* @param {String} Topic An action parameter
* @param {String} Channel An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate1.prototype.SetUpdateFeedParams = function(Topic, Channel, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetUpdateFeedParams", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Topic", Topic);
    request.writeStringParameter("Channel", Channel);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetUpdateFeedParams
* @method GetUpdateFeedParams
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate1.prototype.GetUpdateFeedParams = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetUpdateFeedParams", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Topic"] = ohnet.soaprequest.readStringParameter(result["Topic"]); 
        result["Channel"] = ohnet.soaprequest.readStringParameter(result["Channel"]); 
    
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
CpProxyLinnCoUkUpdate1.prototype.GetUpdateStatus = function(successFunction, errorFunction){ 
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
* A service action to Apply
* @method Apply
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate1.prototype.Apply = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Apply", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Restore
* @method Restore
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate1.prototype.Restore = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Restore", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



