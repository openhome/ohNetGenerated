 

/**
* Service Proxy for CpProxyLinnCoUkUpdate4
* @module ohnet
* @class Update
*/
    
var CpProxyLinnCoUkUpdate4 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Update-4/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Update";
    this.version = "4";
    this.serviceName = "linn.co.uk-Update-4";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["SoftwareStatus"] = new ohnet.serviceproperty("SoftwareStatus","string");
    this.serviceProperties["ExecutorStatus"] = new ohnet.serviceproperty("ExecutorStatus","string");
    this.serviceProperties["JobStatus"] = new ohnet.serviceproperty("JobStatus","string");
    this.serviceProperties["RecoverSupported"] = new ohnet.serviceproperty("RecoverSupported","bool");

                            
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkUpdate4.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkUpdate4.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "SoftwareStatus" property change events
* @method SoftwareStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkUpdate4.prototype.SoftwareStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.SoftwareStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ExecutorStatus" property change events
* @method ExecutorStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkUpdate4.prototype.ExecutorStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.ExecutorStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "JobStatus" property change events
* @method JobStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkUpdate4.prototype.JobStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.JobStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "RecoverSupported" property change events
* @method RecoverSupported_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkUpdate4.prototype.RecoverSupported_Changed = function (stateChangedFunction) {
    this.serviceProperties.RecoverSupported.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}


/**
* A service action to PushManifest
* @method PushManifest
* @param {String} Uri An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.PushManifest = function(Uri, successFunction, errorFunction){ 
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
* A service action to PushManifest2
* @method PushManifest2
* @param {String} Uri An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.PushManifest2 = function(Uri, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("PushManifest2", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Uri", Uri);
    request.send(function(result){
        result["Id"] = ohnet.soaprequest.readIntParameter(result["Id"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSoftwareStatus
* @method GetSoftwareStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.GetSoftwareStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSoftwareStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SoftwareStatus"] = ohnet.soaprequest.readStringParameter(result["SoftwareStatus"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetExecutorStatus
* @method GetExecutorStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.GetExecutorStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetExecutorStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ExecutorStatus"] = ohnet.soaprequest.readStringParameter(result["ExecutorStatus"]); 
    
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
CpProxyLinnCoUkUpdate4.prototype.GetJobStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetJobStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["JobStatus"] = ohnet.soaprequest.readStringParameter(result["JobStatus"]); 
    
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
CpProxyLinnCoUkUpdate4.prototype.Apply = function(successFunction, errorFunction){ 
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
* A service action to Apply2
* @method Apply2
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.Apply2 = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Apply2", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Id"] = ohnet.soaprequest.readIntParameter(result["Id"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Recover
* @method Recover
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.Recover = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Recover", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Recover2
* @method Recover2
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.Recover2 = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Recover2", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Id"] = ohnet.soaprequest.readIntParameter(result["Id"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to RecoverKeepStore
* @method RecoverKeepStore
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.RecoverKeepStore = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("RecoverKeepStore", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to RecoverKeepStore2
* @method RecoverKeepStore2
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.RecoverKeepStore2 = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("RecoverKeepStore2", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Id"] = ohnet.soaprequest.readIntParameter(result["Id"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to CheckNow
* @method CheckNow
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.CheckNow = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("CheckNow", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetRecoverSupported
* @method GetRecoverSupported
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkUpdate4.prototype.GetRecoverSupported = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetRecoverSupported", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["RecoverSupported"] = ohnet.soaprequest.readBoolParameter(result["RecoverSupported"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



