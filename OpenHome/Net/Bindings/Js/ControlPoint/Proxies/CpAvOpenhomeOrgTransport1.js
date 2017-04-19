 

/**
* Service Proxy for CpProxyAvOpenhomeOrgTransport1
* @module ohnet
* @class Transport
*/
    
var CpProxyAvOpenhomeOrgTransport1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-Transport-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "Transport";
    this.version = "1";
    this.serviceName = "av.openhome.org-Transport-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Modes"] = new ohnet.serviceproperty("Modes","string");
    this.serviceProperties["NextAvailable"] = new ohnet.serviceproperty("NextAvailable","bool");
    this.serviceProperties["PrevAvailable"] = new ohnet.serviceproperty("PrevAvailable","bool");
    this.serviceProperties["StreamId"] = new ohnet.serviceproperty("StreamId","int");
    this.serviceProperties["Seekable"] = new ohnet.serviceproperty("Seekable","bool");
    this.serviceProperties["Pausable"] = new ohnet.serviceproperty("Pausable","bool");
    this.serviceProperties["TransportState"] = new ohnet.serviceproperty("TransportState","string");

                                                
    this.TransportStateAllowedValues = [];
    this.TransportStateAllowedValues.push("Playing");
    this.TransportStateAllowedValues.push("Paused");
    this.TransportStateAllowedValues.push("Stopped");
    this.TransportStateAllowedValues.push("Buffering");
    this.TransportStateAllowedValues.push("Waiting");

}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgTransport1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgTransport1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Modes" property change events
* @method Modes_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Modes_Changed = function (stateChangedFunction) {
    this.serviceProperties.Modes.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "NextAvailable" property change events
* @method NextAvailable_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTransport1.prototype.NextAvailable_Changed = function (stateChangedFunction) {
    this.serviceProperties.NextAvailable.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "PrevAvailable" property change events
* @method PrevAvailable_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTransport1.prototype.PrevAvailable_Changed = function (stateChangedFunction) {
    this.serviceProperties.PrevAvailable.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "StreamId" property change events
* @method StreamId_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTransport1.prototype.StreamId_Changed = function (stateChangedFunction) {
    this.serviceProperties.StreamId.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Seekable" property change events
* @method Seekable_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Seekable_Changed = function (stateChangedFunction) {
    this.serviceProperties.Seekable.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Pausable" property change events
* @method Pausable_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Pausable_Changed = function (stateChangedFunction) {
    this.serviceProperties.Pausable.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "TransportState" property change events
* @method TransportState_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTransport1.prototype.TransportState_Changed = function (stateChangedFunction) {
    this.serviceProperties.TransportState.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to PlayAs
* @method PlayAs
* @param {String} Mode An action parameter
* @param {String} Command An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.PlayAs = function(Mode, Command, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("PlayAs", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Mode", Mode);
    request.writeStringParameter("Command", Command);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Play
* @method Play
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Play = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Play", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Pause
* @method Pause
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Pause = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Pause", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Stop
* @method Stop
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Stop = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Stop", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Next
* @method Next
* @param {Int} StreamId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Next = function(StreamId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Next", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("StreamId", StreamId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Prev
* @method Prev
* @param {Int} StreamId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Prev = function(StreamId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Prev", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("StreamId", StreamId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SeekSecondsAbsolute
* @method SeekSecondsAbsolute
* @param {Int} StreamId An action parameter
* @param {Int} SecondsAbsolute An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.SeekSecondsAbsolute = function(StreamId, SecondsAbsolute, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SeekSecondsAbsolute", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("StreamId", StreamId);
    request.writeIntParameter("SecondsAbsolute", SecondsAbsolute);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SeekSecondsRelative
* @method SeekSecondsRelative
* @param {Int} StreamId An action parameter
* @param {Int} SecondsRelative An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.SeekSecondsRelative = function(StreamId, SecondsRelative, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SeekSecondsRelative", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("StreamId", StreamId);
    request.writeIntParameter("SecondsRelative", SecondsRelative);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to TransportState
* @method TransportState
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.TransportState = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("TransportState", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["State"] = ohnet.soaprequest.readStringParameter(result["State"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Modes
* @method Modes
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.Modes = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Modes", this.url, this.domain, this.type, this.version);     
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
* A service action to ModeInfo
* @method ModeInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.ModeInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ModeInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["NextAvailable"] = ohnet.soaprequest.readBoolParameter(result["NextAvailable"]); 
        result["PrevAvailable"] = ohnet.soaprequest.readBoolParameter(result["PrevAvailable"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to StreamInfo
* @method StreamInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.StreamInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("StreamInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["StreamId"] = ohnet.soaprequest.readIntParameter(result["StreamId"]); 
        result["Seekable"] = ohnet.soaprequest.readBoolParameter(result["Seekable"]); 
        result["Pausable"] = ohnet.soaprequest.readBoolParameter(result["Pausable"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to StreamId
* @method StreamId
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTransport1.prototype.StreamId = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("StreamId", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["StreamId"] = ohnet.soaprequest.readIntParameter(result["StreamId"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



