 

/**
* Service Proxy for CpProxyLinnCoUkVolkano2
* @module ohnet
* @class Volkano
*/
    
var CpProxyLinnCoUkVolkano2 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Volkano-2/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Volkano";
    this.version = "2";
    this.serviceName = "linn.co.uk-Volkano-2";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["DeviceInfo"] = new ohnet.serviceproperty("DeviceInfo","string");
    this.serviceProperties["IpAddressList"] = new ohnet.serviceproperty("IpAddressList","string");
    this.serviceProperties["MacAddressList"] = new ohnet.serviceproperty("MacAddressList","string");
    this.serviceProperties["CoreBoardId"] = new ohnet.serviceproperty("CoreBoardId","string");

                            
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkVolkano2.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkVolkano2.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "DeviceInfo" property change events
* @method DeviceInfo_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkVolkano2.prototype.DeviceInfo_Changed = function (stateChangedFunction) {
    this.serviceProperties.DeviceInfo.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "IpAddressList" property change events
* @method IpAddressList_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkVolkano2.prototype.IpAddressList_Changed = function (stateChangedFunction) {
    this.serviceProperties.IpAddressList.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "MacAddressList" property change events
* @method MacAddressList_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkVolkano2.prototype.MacAddressList_Changed = function (stateChangedFunction) {
    this.serviceProperties.MacAddressList.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "CoreBoardId" property change events
* @method CoreBoardId_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyLinnCoUkVolkano2.prototype.CoreBoardId_Changed = function (stateChangedFunction) {
    this.serviceProperties.CoreBoardId.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to Reboot
* @method Reboot
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.Reboot = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Reboot", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to BootMode
* @method BootMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.BootMode = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("BootMode", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aMode"] = ohnet.soaprequest.readStringParameter(result["aMode"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetBootMode
* @method SetBootMode
* @param {String} aMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.SetBootMode = function(aMode, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetBootMode", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("aMode", aMode);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to BspType
* @method BspType
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.BspType = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("BspType", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aBspType"] = ohnet.soaprequest.readStringParameter(result["aBspType"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to UglyName
* @method UglyName
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.UglyName = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("UglyName", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aUglyName"] = ohnet.soaprequest.readStringParameter(result["aUglyName"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to IpAddress
* @method IpAddress
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.IpAddress = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("IpAddress", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aIpAddress"] = ohnet.soaprequest.readStringParameter(result["aIpAddress"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to IpAddressList
* @method IpAddressList
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.IpAddressList = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("IpAddressList", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aIpAddressList"] = ohnet.soaprequest.readStringParameter(result["aIpAddressList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to MacAddress
* @method MacAddress
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.MacAddress = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("MacAddress", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aMacAddress"] = ohnet.soaprequest.readStringParameter(result["aMacAddress"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to MacAddressList
* @method MacAddressList
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.MacAddressList = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("MacAddressList", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aMacAddressList"] = ohnet.soaprequest.readStringParameter(result["aMacAddressList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ProductId
* @method ProductId
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.ProductId = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ProductId", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aProductNumber"] = ohnet.soaprequest.readStringParameter(result["aProductNumber"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to BoardId
* @method BoardId
* @param {Int} aIndex An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.BoardId = function(aIndex, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("BoardId", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aIndex", aIndex);
    request.send(function(result){
        result["aBoardNumber"] = ohnet.soaprequest.readStringParameter(result["aBoardNumber"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to BoardType
* @method BoardType
* @param {Int} aIndex An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.BoardType = function(aIndex, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("BoardType", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aIndex", aIndex);
    request.send(function(result){
        result["aBoardNumber"] = ohnet.soaprequest.readStringParameter(result["aBoardNumber"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to MaxBoards
* @method MaxBoards
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.MaxBoards = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("MaxBoards", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aMaxBoards"] = ohnet.soaprequest.readIntParameter(result["aMaxBoards"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SoftwareVersion
* @method SoftwareVersion
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.SoftwareVersion = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SoftwareVersion", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aSoftwareVersion"] = ohnet.soaprequest.readStringParameter(result["aSoftwareVersion"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SoftwareUpdate
* @method SoftwareUpdate
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.SoftwareUpdate = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SoftwareUpdate", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aAvailable"] = ohnet.soaprequest.readBoolParameter(result["aAvailable"]); 
        result["aSoftwareVersion"] = ohnet.soaprequest.readStringParameter(result["aSoftwareVersion"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to DeviceInfo
* @method DeviceInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.DeviceInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("DeviceInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aDeviceInfoXml"] = ohnet.soaprequest.readStringParameter(result["aDeviceInfoXml"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to CoreBoardId
* @method CoreBoardId
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkVolkano2.prototype.CoreBoardId = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("CoreBoardId", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aCoreBoardId"] = ohnet.soaprequest.readStringParameter(result["aCoreBoardId"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



