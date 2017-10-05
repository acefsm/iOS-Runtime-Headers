/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTUserConfiguration : NSObject {
    NSMutableDictionary * _cellularDataAvailableCache;
    struct __CTServerConnection { } * _ctServerConnection;
    NSMutableDictionary * _nonBTAllowedCache;
    struct network_usage_policy_client_s { } * _usageClient;
    NSMutableDictionary * _wifiAllowedCache;
}

@property (nonatomic, readonly) bool _nonWifiFaceTimeEntitled;
@property (nonatomic) bool allowAnyNetwork;
@property (nonatomic) bool cellularFaceTimeEnabled;
@property (nonatomic) struct __CTServerConnection { }*ctServerConnection;
@property (nonatomic, retain) NSMutableDictionary *nonBTAllowedCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_adequateInternalOrCarrierInstall;
- (void)_clearCaches;
- (bool)_getCellularDataEnabledForBundleID:(id)arg1;
- (bool)_getNonBluetoothDataAllowedForBundleID:(id)arg1;
- (bool)_getWifiDataAllowedForBundleID:(id)arg1;
- (bool)_nonWifiFaceTimeEntitled;
- (void)_setAppCellularDataEnabled:(bool)arg1;
- (void)_setupUsageHandlerIfNeeded;
- (bool)allowAnyNetwork;
- (bool)cellularDataEnabledForBundleId:(id)arg1;
- (bool)cellularFaceTimeEnabled;
- (struct __CTServerConnection { }*)ctServerConnection;
- (void)dealloc;
- (id)init;
- (id)nonBTAllowedCache;
- (bool)nonBluetoothAllowedForBundleId:(id)arg1;
- (void)setAllowAnyNetwork:(bool)arg1;
- (void)setCellularFaceTimeEnabled:(bool)arg1;
- (void)setCtServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)setNonBTAllowedCache:(id)arg1;
- (bool)wifiAllowedForBundleId:(id)arg1;

@end
