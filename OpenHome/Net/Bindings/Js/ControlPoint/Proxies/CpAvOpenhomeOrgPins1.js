 

/**
* Service Proxy for CpProxyAvOpenhomeOrgPins1
* @module ohnet
* @class Pins
*/
    
var CpProxyAvOpenhomeOrgPins1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-Pins-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "Pins";
    this.version = "1";
    this.serviceName = "av.openhome.org-Pins-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["DeviceMax"] = new ohnet.serviceproperty("DeviceMax","int");
    this.serviceProperties["AccountMax"] = new ohnet.serviceproperty("AccountMax","int");
    this.serviceProperties["Modes"] = new ohnet.serviceproperty("Modes","string");
    this.serviceProperties["IdArray"] = new ohnet.serviceproperty("IdArray","string");

                            
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgPins1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgPins1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "DeviceMax" property change events
* @method DeviceMax_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgPins1.prototype.DeviceMax_Changed = function (stateChangedFunction) {
    this.serviceProperties.DeviceMax.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "AccountMax" property change events
* @method AccountMax_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgPins1.prototype.AccountMax_Changed = function (stateChangedFunction) {
    this.serviceProperties.AccountMax.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Modes" property change events
* @method Modes_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgPins1.prototype.Modes_Changed = function (stateChangedFunction) {
    this.serviceProperties.Modes.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "IdArray" property change events
* @method IdArray_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgPins1.prototype.IdArray_Changed = function (stateChangedFunction) {
    this.serviceProperties.IdArray.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetDeviceAccountMax
* @method GetDeviceAccountMax
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.GetDeviceAccountMax = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDeviceAccountMax", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["DeviceMax"] = ohnet.soaprequest.readIntParameter(result["DeviceMax"]); 
        result["AccountMax"] = ohnet.soaprequest.readIntParameter(result["AccountMax"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetModes
* @method GetModes
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.GetModes = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetModes", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Modes"] = ohnet.soaprequest.readStringParameter(result["Modes"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetIdArray
* @method GetIdArray
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.GetIdArray = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetIdArray", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["IdArray"] = ohnet.soaprequest.readStringParameter(result["IdArray"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ReadList
* @method ReadList
* @param {String} Ids An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.ReadList = function(Ids, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ReadList", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Ids", Ids);
    request.send(function(result){
        result["List"] = ohnet.soaprequest.readStringParameter(result["List"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to InvokeId
* @method InvokeId
* @param {Int} Id An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.InvokeId = function(Id, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("InvokeId", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Id", Id);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to InvokeIndex
* @method InvokeIndex
* @param {Int} Index An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.InvokeIndex = function(Index, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("InvokeIndex", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Index", Index);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetDevice
* @method SetDevice
* @param {Int} Index An action parameter
* @param {String} Mode An action parameter
* @param {String} Type An action parameter
* @param {String} Uri An action parameter
* @param {String} Title An action parameter
* @param {String} Description An action parameter
* @param {String} ArtworkUri An action parameter
* @param {Boolean} Shuffle An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.SetDevice = function(Index, Mode, Type, Uri, Title, Description, ArtworkUri, Shuffle, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetDevice", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Index", Index);
    request.writeStringParameter("Mode", Mode);
    request.writeStringParameter("Type", Type);
    request.writeStringParameter("Uri", Uri);
    request.writeStringParameter("Title", Title);
    request.writeStringParameter("Description", Description);
    request.writeStringParameter("ArtworkUri", ArtworkUri);
    request.writeBoolParameter("Shuffle", Shuffle);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetAccount
* @method SetAccount
* @param {Int} Index An action parameter
* @param {String} Mode An action parameter
* @param {String} Type An action parameter
* @param {String} Uri An action parameter
* @param {String} Title An action parameter
* @param {String} Description An action parameter
* @param {String} ArtworkUri An action parameter
* @param {Boolean} Shuffle An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.SetAccount = function(Index, Mode, Type, Uri, Title, Description, ArtworkUri, Shuffle, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetAccount", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Index", Index);
    request.writeStringParameter("Mode", Mode);
    request.writeStringParameter("Type", Type);
    request.writeStringParameter("Uri", Uri);
    request.writeStringParameter("Title", Title);
    request.writeStringParameter("Description", Description);
    request.writeStringParameter("ArtworkUri", ArtworkUri);
    request.writeBoolParameter("Shuffle", Shuffle);
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
* @param {Int} Id An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.Clear = function(Id, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Clear", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Id", Id);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Swap
* @method Swap
* @param {Int} Index1 An action parameter
* @param {Int} Index2 An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgPins1.prototype.Swap = function(Index1, Index2, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Swap", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Index1", Index1);
    request.writeIntParameter("Index2", Index2);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



