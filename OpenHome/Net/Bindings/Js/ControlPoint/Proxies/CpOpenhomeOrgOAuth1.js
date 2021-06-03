 

/**
* Service Proxy for CpProxyOpenhomeOrgOAuth1
* @module ohnet
* @class OAuth
*/
    
var CpProxyOpenhomeOrgOAuth1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/openhome.org-OAuth-1/control";  // upnp control url
    this.domain = "openhome-org";
    this.type = "OAuth";
    this.version = "1";
    this.serviceName = "openhome.org-OAuth-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["PublicKey"] = new ohnet.serviceproperty("PublicKey","string");
    this.serviceProperties["UpdateId"] = new ohnet.serviceproperty("UpdateId","int");
    this.serviceProperties["JobUpdateId"] = new ohnet.serviceproperty("JobUpdateId","int");
    this.serviceProperties["SupportedServices"] = new ohnet.serviceproperty("SupportedServices","string");

                            
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyOpenhomeOrgOAuth1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyOpenhomeOrgOAuth1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "PublicKey" property change events
* @method PublicKey_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyOpenhomeOrgOAuth1.prototype.PublicKey_Changed = function (stateChangedFunction) {
    this.serviceProperties.PublicKey.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpdateId" property change events
* @method UpdateId_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyOpenhomeOrgOAuth1.prototype.UpdateId_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpdateId.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "JobUpdateId" property change events
* @method JobUpdateId_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyOpenhomeOrgOAuth1.prototype.JobUpdateId_Changed = function (stateChangedFunction) {
    this.serviceProperties.JobUpdateId.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "SupportedServices" property change events
* @method SupportedServices_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyOpenhomeOrgOAuth1.prototype.SupportedServices_Changed = function (stateChangedFunction) {
    this.serviceProperties.SupportedServices.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to SetToken
* @method SetToken
* @param {String} ServiceId An action parameter
* @param {String} TokenId An action parameter
* @param {String} AesKeyRsaEncrypted An action parameter
* @param {String} InitVectorRsaEncrypted An action parameter
* @param {String} TokenAesEncrypted An action parameter
* @param {Boolean} IsLongLived An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.SetToken = function(ServiceId, TokenId, AesKeyRsaEncrypted, InitVectorRsaEncrypted, TokenAesEncrypted, IsLongLived, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetToken", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.writeStringParameter("TokenId", TokenId);
    request.writeBinaryParameter("AesKeyRsaEncrypted", AesKeyRsaEncrypted);
    request.writeBinaryParameter("InitVectorRsaEncrypted", InitVectorRsaEncrypted);
    request.writeBinaryParameter("TokenAesEncrypted", TokenAesEncrypted);
    request.writeBoolParameter("IsLongLived", IsLongLived);
    request.send(function(result){
    
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
CpProxyOpenhomeOrgOAuth1.prototype.GetPublicKey = function(successFunction, errorFunction){ 
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
* A service action to ClearToken
* @method ClearToken
* @param {String} ServiceId An action parameter
* @param {String} TokenId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.ClearToken = function(ServiceId, TokenId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearToken", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.writeStringParameter("TokenId", TokenId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearShortLivedToken
* @method ClearShortLivedToken
* @param {String} ServiceId An action parameter
* @param {String} TokenId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.ClearShortLivedToken = function(ServiceId, TokenId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearShortLivedToken", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.writeStringParameter("TokenId", TokenId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearLongLivedToken
* @method ClearLongLivedToken
* @param {String} ServiceId An action parameter
* @param {String} TokenId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.ClearLongLivedToken = function(ServiceId, TokenId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearLongLivedToken", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.writeStringParameter("TokenId", TokenId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearShortLivedTokens
* @method ClearShortLivedTokens
* @param {String} ServiceId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.ClearShortLivedTokens = function(ServiceId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearShortLivedTokens", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearLongLivedTokens
* @method ClearLongLivedTokens
* @param {String} ServiceId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.ClearLongLivedTokens = function(ServiceId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearLongLivedTokens", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearAllTokens
* @method ClearAllTokens
* @param {String} ServiceId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.ClearAllTokens = function(ServiceId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearAllTokens", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetUpdateId
* @method GetUpdateId
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.GetUpdateId = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetUpdateId", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["UpdateId"] = ohnet.soaprequest.readIntParameter(result["UpdateId"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetServiceStatus
* @method GetServiceStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.GetServiceStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetServiceStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ServiceStatusJson"] = ohnet.soaprequest.readStringParameter(result["ServiceStatusJson"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetJobUpdateId
* @method GetJobUpdateId
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.GetJobUpdateId = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetJobUpdateId", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["JobUpdateId"] = ohnet.soaprequest.readIntParameter(result["JobUpdateId"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetJobStatus
* @method GetJobStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.GetJobStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetJobStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["JobStatusJson"] = ohnet.soaprequest.readStringParameter(result["JobStatusJson"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSupportedServices
* @method GetSupportedServices
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.GetSupportedServices = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSupportedServices", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SupportedServiceListJson"] = ohnet.soaprequest.readStringParameter(result["SupportedServiceListJson"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to BeginLimitedInputFlow
* @method BeginLimitedInputFlow
* @param {String} ServiceId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyOpenhomeOrgOAuth1.prototype.BeginLimitedInputFlow = function(ServiceId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("BeginLimitedInputFlow", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServiceId", ServiceId);
    request.send(function(result){
        result["JobId"] = ohnet.soaprequest.readStringParameter(result["JobId"]); 
        result["LoginUrl"] = ohnet.soaprequest.readStringParameter(result["LoginUrl"]); 
        result["UserCode"] = ohnet.soaprequest.readStringParameter(result["UserCode"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



