/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate> {
    bool  _characteristicsDiscovered;
    NSObject<OS_dispatch_queue> * _dataQueue;
    bool  _deliverData;
    HDDeviceEntity * _deviceEntity;
    int  _deviceInformationLoaded;
    HDHealthPeripheral * _healthPeripheral;
    NSMutableArray * _pendingCharacteristicBuffer;
    NSMutableArray * _pendingObjectBuffer;
    NSMutableArray * _pendingWrites;
    NSUUID * _peripheralUUID;
    HDProfile * _profile;
    NSString * _serviceId;
    HDHealthServiceManager * _serviceManager;
    NSMutableDictionary * _writableCharacteristics;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) bool characteristicsDiscovered;
@property bool deliverData;
@property (nonatomic) int deviceInformationLoaded;
@property (nonatomic, readonly) HDHealthPeripheral *healthPeripheral;
@property (nonatomic, retain) NSMutableArray *pendingWrites;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSString *serviceId;
@property (nonatomic, retain) HDHealthServiceManager *serviceManager;
@property (nonatomic, retain) NSMutableDictionary *writableCharacteristics;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (void)_bufferCharacteristicToBeNotified:(id)arg1;
- (void)_bufferObjectToBePersisted:(id)arg1;
- (void)_dataQueue_deliverDataIfPossible;
- (id)_dataQueue_deviceEntity;
- (void)_dataQueue_notifyCharacteristic:(id)arg1;
- (void)_dataQueue_persistData:(id)arg1;
- (bool)_shouldNotifyReceivedData;
- (void)characteristicDataReceived:(id)arg1;
- (bool)characteristicsDiscovered;
- (bool)deliverData;
- (id)description;
- (void)deviceDisconnecting;
- (int)deviceInformationLoaded;
- (void)deviceInformationSetOnPeripheral;
- (void)executeFirstWrite;
- (id)healthPeripheral;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (void)markCharacteristicsDiscovered;
- (void)mfaSucceededOnPeripheral;
- (id)pendingWrites;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristics:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)peripheralUUID;
- (bool)processAdvertisementData:(id)arg1;
- (id)profile;
- (void)readProperty:(id)arg1;
- (void)respondFirstWriteWithData:(id)arg1 error:(id)arg2;
- (void)serviceDataReceived:(id)arg1;
- (id)serviceId;
- (id)serviceManager;
- (id)servicesInProfile;
- (void)setDeliverData:(bool)arg1;
- (void)setDeviceInformationLoaded:(int)arg1;
- (void)setPendingWrites:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setServiceId:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)setWritableCharacteristic:(id)arg1;
- (void)setWritableCharacteristics:(id)arg1;
- (void)setWriteQueue:(id)arg1;
- (bool)supportsOperation:(id)arg1;
- (bool)supportsWritingCharacteristic:(id)arg1;
- (void)transitoryDataReceived:(id)arg1 withError:(id)arg2;
- (id)writableCharacteristics;
- (void)writeCharacteristic:(id)arg1 expectResponse:(bool)arg2 completion:(id /* block */)arg3;
- (id)writeQueue;

@end
