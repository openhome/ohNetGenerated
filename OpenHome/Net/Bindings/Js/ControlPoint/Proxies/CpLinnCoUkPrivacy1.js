 

/**
* Service Proxy for CpProxyLinnCoUkPrivacy1
* @module ohnet
* @class Privacy
*/
    
var CpProxyLinnCoUkPrivacy1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Privacy-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Privacy";
    this.version = "1";
    this.serviceName = "linn.co.uk-Privacy-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["PolicyVersion"] = new ohnet.serviceproperty("PolicyVersion","int");
    this.serviceProperties["PolicyAgreed"] = new ohnet.serviceproperty("PolicyAgreed","int");
    this.serviceProperties["PolicyDetails"] = new ohnet.serviceproperty("PolicyDetails","string");

                      
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkPrivacy1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkPrivacy1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "PolicyVersion" property change events
* @method PolicyVersion_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkPrivacy1.prototype.PolicyVersion_Changed = function (stateChangedFunction) {
    this.serviceProperties.PolicyVersion.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "PolicyAgreed" property change events
* @method PolicyAgreed_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkPrivacy1.prototype.PolicyAgreed_Changed = function (stateChangedFunction) {
    this.serviceProperties.PolicyAgreed.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "PolicyDetails" property change events
* @method PolicyDetails_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkPrivacy1.prototype.PolicyDetails_Changed = function (stateChangedFunction) {
    this.serviceProperties.PolicyDetails.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetPolicyVersion
* @method GetPolicyVersion
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkPrivacy1.prototype.GetPolicyVersion = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetPolicyVersion", this.url, this.domain, this.type, this.version);     
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
* A service action to GetPolicyAgreed
* @method GetPolicyAgreed
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkPrivacy1.prototype.GetPolicyAgreed = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetPolicyAgreed", this.url, this.domain, this.type, this.version);     
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
* A service action to SetPolicyAgreed
* @method SetPolicyAgreed
* @param {Int} Agreed An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkPrivacy1.prototype.SetPolicyAgreed = function(Agreed, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetPolicyAgreed", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Agreed", Agreed);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetPolicyDetails
* @method GetPolicyDetails
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkPrivacy1.prototype.GetPolicyDetails = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetPolicyDetails", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Details"] = ohnet.soaprequest.readStringParameter(result["Details"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetPolicyDetails
* @method SetPolicyDetails
* @param {String} Details An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkPrivacy1.prototype.SetPolicyDetails = function(Details, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetPolicyDetails", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Details", Details);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



