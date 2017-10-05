/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPClient : NSObject <NSXPCListenerDelegate, WPXPCClientProtocol, WPXPCDaemonProtocol> {
    long long  _advertiserState;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSLock * _connectionLock;
    NSObject<OS_dispatch_queue> * _daemonDeliveryQueue;
    NSObject<OS_dispatch_semaphore> * _daemonRegisteredSemaphore;
    bool  _isBubbleTestClient;
    bool  _isTestClient;
    NSString * _machName;
    bool  _needsToRegister;
    bool  _peerTrackingSlotsAvailable;
    long long  _pipeState;
    bool  _registering;
    long long  _scannerState;
    bool  _servicesAdded;
    long long  _state;
    unsigned char  _type;
    NSXPCConnection * _xpcConnection;
    NSXPCListener * _xpcListener;
}

@property long long advertiserState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSLock *connectionLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *daemonDeliveryQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *daemonRegisteredSemaphore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBubbleTestClient;
@property (readonly) bool isTestClient;
@property (nonatomic, retain) NSString *machName;
@property bool needsToRegister;
@property bool peerTrackingSlotsAvailable;
@property long long pipeState;
@property bool registering;
@property long long scannerState;
@property bool servicesAdded;
@property long long state;
@property (readonly) Class superclass;
@property unsigned char type;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (retain) NSXPCListener *xpcListener;

+ (bool)holdVoucherForConnections;
+ (id)stateAsString:(long long)arg1;

- (void).cxx_destruct;
- (void)addServices;
- (long long)advertiserState;
- (void)advertiserStateDidChange:(long long)arg1;
- (void)checkAllowDuplicates:(id /* block */)arg1;
- (id)clientAsString;
- (id)clientQueue;
- (void)connectToPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withOptions:(id)arg2;
- (id)connection;
- (id)connectionLock;
- (id)daemonDeliveryQueue;
- (id)daemonRegisteredSemaphore;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)destroyConnection;
- (void)disableScanning;
- (void)disconnectFromLEPipePeer:(id)arg1;
- (void)disconnectFromPeer:(id)arg1;
- (void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)dumpDaemonState;
- (void)enableBubbleTestMode;
- (void)enableTestMode;
- (void)establishConnection;
- (void)getAllTrackedZones;
- (void)getPowerLogStats:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 machName:(id)arg2;
- (void)invalidate;
- (bool)isBubbleTestClient;
- (bool)isTestClient;
- (void)listenToBandwidthNotifications;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)machName;
- (bool)needsToRegister;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (bool)peerTrackingSlotsAvailable;
- (long long)pipeState;
- (void)pipeStateDidChange:(long long)arg1;
- (void)populateClientGATT:(id /* block */)arg1;
- (void)registerEndpoint:(id)arg1;
- (void)registerForAnyScanResults:(bool)arg1;
- (void)registeredWithDaemonAndContinuingSession:(bool)arg1;
- (bool)registering;
- (long long)scannerState;
- (void)scannerStateDidChange:(long long)arg1;
- (void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
- (void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2;
- (bool)servicesAdded;
- (void)setAdvertiserState:(long long)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setConnectionLock:(id)arg1;
- (void)setDaemonDeliveryQueue:(id)arg1;
- (void)setDaemonRegisteredSemaphore:(id)arg1;
- (void)setMachName:(id)arg1;
- (void)setNeedsToRegister:(bool)arg1;
- (void)setPeerTrackingSlotsAvailable:(bool)arg1;
- (void)setPipeState:(long long)arg1;
- (void)setRegistering:(bool)arg1;
- (void)setScannerState:(long long)arg1;
- (void)setServicesAdded:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setType:(unsigned char)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (void)setupMachXPCService;
- (void)shouldSubscribe:(bool)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
- (void)startAdvertising:(id)arg1;
- (void)startScanning:(id)arg1;
- (void)startScanning:(id)arg1 andAdvertising:(id)arg2;
- (void)startTrackingPeerWithRequest:(id)arg1;
- (void)startTrackingZone:(id)arg1;
- (long long)state;
- (void)stateDidChange:(long long)arg1;
- (void)stopAdvertising:(id)arg1;
- (void)stopScanning:(id)arg1;
- (void)stopTrackingAllZones;
- (void)stopTrackingPeerWithRequest:(id)arg1;
- (void)stopTrackingZones:(id)arg1;
- (unsigned char)type;
- (void)unregisterEndpoint:(id)arg1;
- (void)updateScanningRequest:(id)arg1 withUpdate:(id /* block */)arg2;
- (void)whitelistConnectionMethods:(id)arg1;
- (id)xpcConnection;
- (id)xpcListener;

@end
