 

/**
* Service Proxy for CpProxyLinnCoUkCloud1
* @module ohnet
* @class Cloud
*/
    
var CpProxyLinnCoUkCloud1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Cloud-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Cloud";
    this.version = "1";
    this.serviceName = "linn.co.uk-Cloud-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["ControlEnabled"] = new ohnet.serviceproperty("ControlEnabled","bool");

          
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkCloud1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkCloud1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "ControlEnabled" property change events
* @method ControlEnabled_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkCloud1.prototype.ControlEnabled_Changed = function (stateChangedFunction) {
    this.serviceProperties.ControlEnabled.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}


/**
* A service action to GetChallengeResponse
* @method GetChallengeResponse
* @param {String} Challenge An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkCloud1.prototype.GetChallengeResponse = function(Challenge, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetChallengeResponse", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Challenge", Challenge);
    request.send(function(result){
        result["Response"] = ohnet.soaprequest.readStringParameter(result["Response"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetControlEnabled
* @method SetControlEnabled
* @param {Boolean} Enabled An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkCloud1.prototype.SetControlEnabled = function(Enabled, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetControlEnabled", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("Enabled", Enabled);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetControlEnabled
* @method GetControlEnabled
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkCloud1.prototype.GetControlEnabled = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetControlEnabled", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Enabled"] = ohnet.soaprequest.readBoolParameter(result["Enabled"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



