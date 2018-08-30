 

/**
* Service Proxy for CpProxyAvOpenhomeOrgConfigApp1
* @module ohnet
* @class ConfigApp
*/
    
var CpProxyAvOpenhomeOrgConfigApp1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-ConfigApp-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "ConfigApp";
    this.version = "1";
    this.serviceName = "av.openhome.org-ConfigApp-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Keys"] = new ohnet.serviceproperty("Keys","string");

          
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgConfigApp1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgConfigApp1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Keys" property change events
* @method Keys_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgConfigApp1.prototype.Keys_Changed = function (stateChangedFunction) {
    this.serviceProperties.Keys.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetKeys
* @method GetKeys
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgConfigApp1.prototype.GetKeys = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetKeys", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Keys"] = ohnet.soaprequest.readStringParameter(result["Keys"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetValue
* @method SetValue
* @param {String} Key An action parameter
* @param {String} Value An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgConfigApp1.prototype.SetValue = function(Key, Value, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetValue", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Key", Key);
    request.writeStringParameter("Value", Value);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetValue
* @method GetValue
* @param {String} Key An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgConfigApp1.prototype.GetValue = function(Key, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetValue", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Key", Key);
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readStringParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ResetAll
* @method ResetAll
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgConfigApp1.prototype.ResetAll = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ResetAll", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



