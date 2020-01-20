 

/**
* Service Proxy for CpProxyAvOpenhomeOrgDebug2
* @module ohnet
* @class Debug
*/
    
var CpProxyAvOpenhomeOrgDebug2 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-Debug-2/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "Debug";
    this.version = "2";
    this.serviceName = "av.openhome.org-Debug-2";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};

    
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgDebug2.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgDebug2.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}




/**
* A service action to GetLog
* @method GetLog
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDebug2.prototype.GetLog = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetLog", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Log"] = ohnet.soaprequest.readStringParameter(result["Log"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SendLog
* @method SendLog
* @param {String} Data An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDebug2.prototype.SendLog = function(Data, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SendLog", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Data", Data);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SendDeviceAnnouncements
* @method SendDeviceAnnouncements
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDebug2.prototype.SendDeviceAnnouncements = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SendDeviceAnnouncements", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetRecentMSearches
* @method GetRecentMSearches
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDebug2.prototype.GetRecentMSearches = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetRecentMSearches", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["JsonArray"] = ohnet.soaprequest.readStringParameter(result["JsonArray"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



