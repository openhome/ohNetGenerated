 

/**
* Service Proxy for CpProxyAvOpenhomeOrgSender2
* @module ohnet
* @class Sender
*/
    
var CpProxyAvOpenhomeOrgSender2 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-Sender-2/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "Sender";
    this.version = "2";
    this.serviceName = "av.openhome.org-Sender-2";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["PresentationUrl"] = new ohnet.serviceproperty("PresentationUrl","string");
    this.serviceProperties["Metadata"] = new ohnet.serviceproperty("Metadata","string");
    this.serviceProperties["Audio"] = new ohnet.serviceproperty("Audio","bool");
    this.serviceProperties["Status"] = new ohnet.serviceproperty("Status","string");
    this.serviceProperties["Status2"] = new ohnet.serviceproperty("Status2","string");
    this.serviceProperties["Enabled"] = new ohnet.serviceproperty("Enabled","bool");
    this.serviceProperties["Attributes"] = new ohnet.serviceproperty("Attributes","string");

                              
    this.StatusAllowedValues = [];
    this.StatusAllowedValues.push("Enabled");
    this.StatusAllowedValues.push("Disabled");
    this.StatusAllowedValues.push("Blocked");
        
    this.Status2AllowedValues = [];
    this.Status2AllowedValues.push("Sending");
    this.Status2AllowedValues.push("Ready");
    this.Status2AllowedValues.push("Blocked");
    this.Status2AllowedValues.push("Inactive");
    this.Status2AllowedValues.push("Disabled");
            
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgSender2.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgSender2.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "PresentationUrl" property change events
* @method PresentationUrl_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgSender2.prototype.PresentationUrl_Changed = function (stateChangedFunction) {
    this.serviceProperties.PresentationUrl.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Metadata" property change events
* @method Metadata_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgSender2.prototype.Metadata_Changed = function (stateChangedFunction) {
    this.serviceProperties.Metadata.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Audio" property change events
* @method Audio_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgSender2.prototype.Audio_Changed = function (stateChangedFunction) {
    this.serviceProperties.Audio.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Status" property change events
* @method Status_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgSender2.prototype.Status_Changed = function (stateChangedFunction) {
    this.serviceProperties.Status.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Status2" property change events
* @method Status2_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgSender2.prototype.Status2_Changed = function (stateChangedFunction) {
    this.serviceProperties.Status2.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Enabled" property change events
* @method Enabled_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgSender2.prototype.Enabled_Changed = function (stateChangedFunction) {
    this.serviceProperties.Enabled.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Attributes" property change events
* @method Attributes_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgSender2.prototype.Attributes_Changed = function (stateChangedFunction) {
    this.serviceProperties.Attributes.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to PresentationUrl
* @method PresentationUrl
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSender2.prototype.PresentationUrl = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("PresentationUrl", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readStringParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Metadata
* @method Metadata
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSender2.prototype.Metadata = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Metadata", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readStringParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Audio
* @method Audio
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSender2.prototype.Audio = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Audio", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readBoolParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Status
* @method Status
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSender2.prototype.Status = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Status", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readStringParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Status2
* @method Status2
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSender2.prototype.Status2 = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Status2", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readStringParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Enabled
* @method Enabled
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSender2.prototype.Enabled = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Enabled", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readBoolParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Attributes
* @method Attributes
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSender2.prototype.Attributes = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Attributes", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Value"] = ohnet.soaprequest.readStringParameter(result["Value"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



