 

/**
* Service Proxy for CpProxyAvOpenhomeOrgReaction1
* @module ohnet
* @class Reaction
*/
    
var CpProxyAvOpenhomeOrgReaction1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-Reaction-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "Reaction";
    this.version = "1";
    this.serviceName = "av.openhome.org-Reaction-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["CanReact"] = new ohnet.serviceproperty("CanReact","bool");
    this.serviceProperties["CurrentReaction"] = new ohnet.serviceproperty("CurrentReaction","string");
    this.serviceProperties["AvailableReactions"] = new ohnet.serviceproperty("AvailableReactions","string");

                      
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgReaction1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgReaction1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "CanReact" property change events
* @method CanReact_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgReaction1.prototype.CanReact_Changed = function (stateChangedFunction) {
    this.serviceProperties.CanReact.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "CurrentReaction" property change events
* @method CurrentReaction_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgReaction1.prototype.CurrentReaction_Changed = function (stateChangedFunction) {
    this.serviceProperties.CurrentReaction.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "AvailableReactions" property change events
* @method AvailableReactions_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgReaction1.prototype.AvailableReactions_Changed = function (stateChangedFunction) {
    this.serviceProperties.AvailableReactions.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetCanReact
* @method GetCanReact
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgReaction1.prototype.GetCanReact = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetCanReact", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["CanReact"] = ohnet.soaprequest.readBoolParameter(result["CanReact"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetCurrentReaction
* @method GetCurrentReaction
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgReaction1.prototype.GetCurrentReaction = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetCurrentReaction", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Reaction"] = ohnet.soaprequest.readStringParameter(result["Reaction"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetAvailableReactions
* @method GetAvailableReactions
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgReaction1.prototype.GetAvailableReactions = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetAvailableReactions", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["AvailableReactions"] = ohnet.soaprequest.readStringParameter(result["AvailableReactions"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetReaction
* @method SetReaction
* @param {String} Reaction An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgReaction1.prototype.SetReaction = function(Reaction, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetReaction", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Reaction", Reaction);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearReaction
* @method ClearReaction
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgReaction1.prototype.ClearReaction = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearReaction", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



