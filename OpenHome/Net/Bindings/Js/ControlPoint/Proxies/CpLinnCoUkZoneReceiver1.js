 

/**
* Service Proxy for CpProxyLinnCoUkZoneReceiver1
* @module ohnet
* @class ZoneReceiver
*/
    
var CpProxyLinnCoUkZoneReceiver1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-ZoneReceiver-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "ZoneReceiver";
    this.version = "1";
    this.serviceName = "linn.co.uk-ZoneReceiver-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Sender"] = new ohnet.serviceproperty("Sender","string");

          
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkZoneReceiver1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkZoneReceiver1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Sender" property change events
* @method Sender_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkZoneReceiver1.prototype.Sender_Changed = function (stateChangedFunction) {
    this.serviceProperties.Sender.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetSender
* @method GetSender
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkZoneReceiver1.prototype.GetSender = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSender", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Sender"] = ohnet.soaprequest.readStringParameter(result["Sender"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



