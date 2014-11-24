 

/**
* Service Proxy for CpProxyAvOpenhomeOrgCredentials1
* @module ohnet
* @class Credentials
*/
    
var CpProxyAvOpenhomeOrgCredentials1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-Credentials-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "Credentials";
    this.version = "1";
    this.serviceName = "av.openhome.org-Credentials-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Ids"] = new ohnet.serviceproperty("Ids","string");
    this.serviceProperties["PublicKey"] = new ohnet.serviceproperty("PublicKey","string");
    this.serviceProperties["SequenceNumber"] = new ohnet.serviceproperty("SequenceNumber","int");

                      
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Ids" property change events
* @method Ids_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.Ids_Changed = function (stateChangedFunction) {
    this.serviceProperties.Ids.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "PublicKey" property change events
* @method PublicKey_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.PublicKey_Changed = function (stateChangedFunction) {
    this.serviceProperties.PublicKey.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "SequenceNumber" property change events
* @method SequenceNumber_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.SequenceNumber_Changed = function (stateChangedFunction) {
    this.serviceProperties.SequenceNumber.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}


/**
* A service action to Set
* @method Set
* @param {String} Id An action parameter
* @param {String} UserName An action parameter
* @param {String} Password An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.Set = function(Id, UserName, Password, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Set", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Id", Id);
    request.writeStringParameter("UserName", UserName);
    request.writeBinaryParameter("Password", Password);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Clear
* @method Clear
* @param {String} Id An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.Clear = function(Id, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Clear", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Id", Id);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetEnabled
* @method SetEnabled
* @param {String} Id An action parameter
* @param {Boolean} Enabled An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.SetEnabled = function(Id, Enabled, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetEnabled", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Id", Id);
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
* A service action to Get
* @method Get
* @param {String} Id An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.Get = function(Id, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Get", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Id", Id);
    request.send(function(result){
        result["UserName"] = ohnet.soaprequest.readStringParameter(result["UserName"]); 
        result["Password"] = ohnet.soaprequest.readBinaryParameter(result["Password"]); 
        result["Enabled"] = ohnet.soaprequest.readBoolParameter(result["Enabled"]); 
        result["Status"] = ohnet.soaprequest.readStringParameter(result["Status"]); 
        result["Data"] = ohnet.soaprequest.readStringParameter(result["Data"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Login
* @method Login
* @param {String} Id An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.Login = function(Id, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Login", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Id", Id);
    request.send(function(result){
        result["Token"] = ohnet.soaprequest.readStringParameter(result["Token"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ReLogin
* @method ReLogin
* @param {String} Id An action parameter
* @param {String} CurrentToken An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.ReLogin = function(Id, CurrentToken, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ReLogin", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Id", Id);
    request.writeStringParameter("CurrentToken", CurrentToken);
    request.send(function(result){
        result["NewToken"] = ohnet.soaprequest.readStringParameter(result["NewToken"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetIds
* @method GetIds
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.GetIds = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetIds", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Ids"] = ohnet.soaprequest.readStringParameter(result["Ids"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetPublicKey
* @method GetPublicKey
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.GetPublicKey = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetPublicKey", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["PublicKey"] = ohnet.soaprequest.readStringParameter(result["PublicKey"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSequenceNumber
* @method GetSequenceNumber
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgCredentials1.prototype.GetSequenceNumber = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSequenceNumber", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SequenceNumber"] = ohnet.soaprequest.readIntParameter(result["SequenceNumber"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



