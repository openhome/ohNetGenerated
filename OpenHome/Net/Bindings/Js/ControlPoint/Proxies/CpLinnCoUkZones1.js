 

/**
* Service Proxy for CpProxyLinnCoUkZones1
* @module ohnet
* @class Zones
*/
    
var CpProxyLinnCoUkZones1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Zones-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Zones";
    this.version = "1";
    this.serviceName = "linn.co.uk-Zones-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Inputs"] = new ohnet.serviceproperty("Inputs","string");
    this.serviceProperties["Outputs"] = new ohnet.serviceproperty("Outputs","string");
    this.serviceProperties["Mappings"] = new ohnet.serviceproperty("Mappings","string");

                      
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkZones1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkZones1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Inputs" property change events
* @method Inputs_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkZones1.prototype.Inputs_Changed = function (stateChangedFunction) {
    this.serviceProperties.Inputs.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Outputs" property change events
* @method Outputs_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkZones1.prototype.Outputs_Changed = function (stateChangedFunction) {
    this.serviceProperties.Outputs.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Mappings" property change events
* @method Mappings_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkZones1.prototype.Mappings_Changed = function (stateChangedFunction) {
    this.serviceProperties.Mappings.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetInputs
* @method GetInputs
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkZones1.prototype.GetInputs = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetInputs", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Inputs"] = ohnet.soaprequest.readStringParameter(result["Inputs"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetOutputs
* @method GetOutputs
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkZones1.prototype.GetOutputs = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetOutputs", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Outputs"] = ohnet.soaprequest.readStringParameter(result["Outputs"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetMappings
* @method GetMappings
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkZones1.prototype.GetMappings = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetMappings", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Mappings"] = ohnet.soaprequest.readStringParameter(result["Mappings"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetMappings
* @method SetMappings
* @param {String} Mappings An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkZones1.prototype.SetMappings = function(Mappings, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetMappings", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Mappings", Mappings);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



