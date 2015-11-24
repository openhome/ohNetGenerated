 

/**
* Service Proxy for CpProxyLinnCoUkFlash1
* @module ohnet
* @class Flash
*/
    
var CpProxyLinnCoUkFlash1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/linn.co.uk-Flash-1/control";  // upnp control url
    this.domain = "linn-co-uk";
    this.type = "Flash";
    this.version = "1";
    this.serviceName = "linn.co.uk-Flash-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};

    
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyLinnCoUkFlash1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyLinnCoUkFlash1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}




/**
* A service action to Read
* @method Read
* @param {Int} aId An action parameter
* @param {Int} aAddress An action parameter
* @param {Int} aLength An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.Read = function(aId, aAddress, aLength, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Read", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.writeIntParameter("aAddress", aAddress);
    request.writeIntParameter("aLength", aLength);
    request.send(function(result){
        result["aBuffer"] = ohnet.soaprequest.readBinaryParameter(result["aBuffer"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Write
* @method Write
* @param {Int} aId An action parameter
* @param {Int} aAddress An action parameter
* @param {String} aSource An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.Write = function(aId, aAddress, aSource, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Write", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.writeIntParameter("aAddress", aAddress);
    request.writeBinaryParameter("aSource", aSource);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Erase
* @method Erase
* @param {Int} aId An action parameter
* @param {Int} aAddress An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.Erase = function(aId, aAddress, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Erase", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.writeIntParameter("aAddress", aAddress);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to EraseSector
* @method EraseSector
* @param {Int} aId An action parameter
* @param {Int} aSector An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.EraseSector = function(aId, aSector, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("EraseSector", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.writeIntParameter("aSector", aSector);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to EraseSectors
* @method EraseSectors
* @param {Int} aId An action parameter
* @param {Int} aFirstSector An action parameter
* @param {Int} aLastSector An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.EraseSectors = function(aId, aFirstSector, aLastSector, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("EraseSectors", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.writeIntParameter("aFirstSector", aFirstSector);
    request.writeIntParameter("aLastSector", aLastSector);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to EraseChip
* @method EraseChip
* @param {Int} aId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.EraseChip = function(aId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("EraseChip", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Sectors
* @method Sectors
* @param {Int} aId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.Sectors = function(aId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Sectors", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.send(function(result){
        result["aSectors"] = ohnet.soaprequest.readIntParameter(result["aSectors"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SectorBytes
* @method SectorBytes
* @param {Int} aId An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.SectorBytes = function(aId, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SectorBytes", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("aId", aId);
    request.send(function(result){
        result["aBytes"] = ohnet.soaprequest.readIntParameter(result["aBytes"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to RomDirInfo
* @method RomDirInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyLinnCoUkFlash1.prototype.RomDirInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("RomDirInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["aFlashIdMain"] = ohnet.soaprequest.readIntParameter(result["aFlashIdMain"]); 
        result["aOffsetMain"] = ohnet.soaprequest.readIntParameter(result["aOffsetMain"]); 
        result["aBytesMain"] = ohnet.soaprequest.readIntParameter(result["aBytesMain"]); 
        result["aFlashIdFallback"] = ohnet.soaprequest.readIntParameter(result["aFlashIdFallback"]); 
        result["aOffsetFallback"] = ohnet.soaprequest.readIntParameter(result["aOffsetFallback"]); 
        result["aBytesFallback"] = ohnet.soaprequest.readIntParameter(result["aBytesFallback"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



