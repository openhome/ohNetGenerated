 

/**
* Service Proxy for CpProxyLinnCoUkExaktInputs1
* @module ohnet
* @class ExaktInputs
*/
    
var CpProxyLinnCoUkExaktInputs1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-ExaktInputs-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "ExaktInputs";
    this.version = "1";
    this.serviceName = "linn.co.uk-ExaktInputs-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Associations"] = new ohnet.serviceproperty("Associations","string");

          
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkExaktInputs1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkExaktInputs1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Associations" property change events
* @method Associations_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkExaktInputs1.prototype.Associations_Changed = function (stateChangedFunction) {
    this.serviceProperties.Associations.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetAssociation
* @method GetAssociation
* @param {Int} InputIndex An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExaktInputs1.prototype.GetAssociation = function(InputIndex, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetAssociation", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("InputIndex", InputIndex);
    request.send(function(result){
        result["DeviceId"] = ohnet.soaprequest.readStringParameter(result["DeviceId"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetAssociation
* @method SetAssociation
* @param {Int} InputIndex An action parameter
* @param {String} DeviceId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExaktInputs1.prototype.SetAssociation = function(InputIndex, DeviceId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetAssociation", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("InputIndex", InputIndex);
    request.writeStringParameter("DeviceId", DeviceId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ClearAssociation
* @method ClearAssociation
* @param {Int} InputIndex An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExaktInputs1.prototype.ClearAssociation = function(InputIndex, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearAssociation", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("InputIndex", InputIndex);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to InputCount
* @method InputCount
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkExaktInputs1.prototype.InputCount = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("InputCount", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["InputCount"] = ohnet.soaprequest.readIntParameter(result["InputCount"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



