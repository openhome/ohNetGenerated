 

/**
* Service Proxy for CpProxyLinnCoUkLipSync1
* @module ohnet
* @class LipSync
*/
    
var CpProxyLinnCoUkLipSync1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-LipSync-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "LipSync";
    this.version = "1";
    this.serviceName = "linn.co.uk-LipSync-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Delay"] = new ohnet.serviceproperty("Delay","int");
    this.serviceProperties["DelayMinimum"] = new ohnet.serviceproperty("DelayMinimum","int");
    this.serviceProperties["DelayMaximum"] = new ohnet.serviceproperty("DelayMaximum","int");

                      
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkLipSync1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkLipSync1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Delay" property change events
* @method Delay_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkLipSync1.prototype.Delay_Changed = function (stateChangedFunction) {
    this.serviceProperties.Delay.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "DelayMinimum" property change events
* @method DelayMinimum_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkLipSync1.prototype.DelayMinimum_Changed = function (stateChangedFunction) {
    this.serviceProperties.DelayMinimum.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "DelayMaximum" property change events
* @method DelayMaximum_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkLipSync1.prototype.DelayMaximum_Changed = function (stateChangedFunction) {
    this.serviceProperties.DelayMaximum.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}


/**
* A service action to SetDelay
* @method SetDelay
* @param {Int} Delay An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkLipSync1.prototype.SetDelay = function(Delay, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetDelay", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Delay", Delay);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Delay
* @method Delay
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkLipSync1.prototype.Delay = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Delay", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Delay"] = ohnet.soaprequest.readIntParameter(result["Delay"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to DelayMinimum
* @method DelayMinimum
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkLipSync1.prototype.DelayMinimum = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("DelayMinimum", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Min"] = ohnet.soaprequest.readIntParameter(result["Min"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to DelayMaximum
* @method DelayMaximum
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkLipSync1.prototype.DelayMaximum = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("DelayMaximum", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Max"] = ohnet.soaprequest.readIntParameter(result["Max"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



