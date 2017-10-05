/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQDaemonOfferConditions : NSObject <NSCopying> {
    bool  _deviceStorageAlmostFull;
    bool  _photosCloudEnabled;
    NSNumber * _photosLibrarySize;
    bool  _photosOptimizeEnabled;
}

@property (getter=isDeviceStorageAlmostFull, nonatomic) bool deviceStorageAlmostFull;
@property (getter=isPhotosCloudEnabled, nonatomic) bool photosCloudEnabled;
@property (nonatomic, copy) NSNumber *photosLibrarySize;
@property (getter=isPhotosOptimizeEnabled, nonatomic) bool photosOptimizeEnabled;

+ (id)currentConditions;
+ (void)getPhotosLibrarySizeWithCompletion:(id /* block */)arg1;
+ (void)getPhotosLibraryUploadSizeWithCompletion:(id /* block */)arg1;
+ (bool)hasPhotosCloudEverBeenEnabled;
+ (bool)isCachedCloudQuotaAlmostFullOrFull;
+ (bool)isDeviceStorageAlmostFull;
+ (bool)isDeviceStorageNearLowButNotLow;
+ (bool)isPhotosCloudEnabled;
+ (bool)isPhotosOptimizeEnabled;
+ (bool)isSimulatedDeviceStorageAlmostFull;
+ (id)photosLibrarySize;
+ (id)photosLibraryUploadSize;
+ (id)photosVideosCount;
+ (void)setSimulatedDeviceStorageAlmostFull:(bool)arg1;
+ (void)setUseHysteresisForDeviceStorageAlmostFull:(bool)arg1;
+ (bool)useHysteresisForDeviceStorageAlmostFull;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCurrentConditions;
- (bool)isDeviceStorageAlmostFull;
- (bool)isPhotosCloudEnabled;
- (bool)isPhotosOptimizeEnabled;
- (id)photosLibrarySize;
- (void)setDeviceStorageAlmostFull:(bool)arg1;
- (void)setPhotosCloudEnabled:(bool)arg1;
- (void)setPhotosLibrarySize:(id)arg1;
- (void)setPhotosOptimizeEnabled:(bool)arg1;

@end
