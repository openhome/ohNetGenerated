 

/**
* Service Proxy for CpProxyLinnCoUkWifi1
* @module ohnet
* @class Wifi
*/
    
var CpProxyLinnCoUkWifi1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Wifi-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Wifi";
    this.version = "1";
    this.serviceName = "linn.co.uk-Wifi-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["AdapterInUse"] = new ohnet.serviceproperty("AdapterInUse","bool");
    this.serviceProperties["Configuration"] = new ohnet.serviceproperty("Configuration","string");
    this.serviceProperties["ScanResults"] = new ohnet.serviceproperty("ScanResults","string");
    this.serviceProperties["Status"] = new ohnet.serviceproperty("Status","string");

                            
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkWifi1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkWifi1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "AdapterInUse" property change events
* @method AdapterInUse_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkWifi1.prototype.AdapterInUse_Changed = function (stateChangedFunction) {
    this.serviceProperties.AdapterInUse.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Configuration" property change events
* @method Configuration_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkWifi1.prototype.Configuration_Changed = function (stateChangedFunction) {
    this.serviceProperties.Configuration.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ScanResults" property change events
* @method ScanResults_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkWifi1.prototype.ScanResults_Changed = function (stateChangedFunction) {
    this.serviceProperties.ScanResults.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Status" property change events
* @method Status_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkWifi1.prototype.Status_Changed = function (stateChangedFunction) {
    this.serviceProperties.Status.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to ClearCredentials
* @method ClearCredentials
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.ClearCredentials = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ClearCredentials", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetAdapterInUse
* @method GetAdapterInUse
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.GetAdapterInUse = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetAdapterInUse", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["AdapterInUse"] = ohnet.soaprequest.readBoolParameter(result["AdapterInUse"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetConfiguration
* @method GetConfiguration
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.GetConfiguration = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetConfiguration", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Configuration"] = ohnet.soaprequest.readStringParameter(result["Configuration"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetNetworkInfo
* @method GetNetworkInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.GetNetworkInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetNetworkInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["NetworkInfo"] = ohnet.soaprequest.readStringParameter(result["NetworkInfo"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetScanResults
* @method GetScanResults
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.GetScanResults = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetScanResults", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ScanResults"] = ohnet.soaprequest.readStringParameter(result["ScanResults"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSignalInfo
* @method GetSignalInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.GetSignalInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSignalInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SignalInfo"] = ohnet.soaprequest.readStringParameter(result["SignalInfo"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetStatus
* @method GetStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.GetStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Status"] = ohnet.soaprequest.readStringParameter(result["Status"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Scan
* @method Scan
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.Scan = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Scan", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetCredentials
* @method SetCredentials
* @param {String} Ssid An action parameter
* @param {String} Password An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkWifi1.prototype.SetCredentials = function(Ssid, Password, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetCredentials", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Ssid", Ssid);
    request.writeStringParameter("Password", Password);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



