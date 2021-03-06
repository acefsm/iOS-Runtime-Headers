/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSyncDefaults : NSObject <NMSNotificationDispatcherDelegate> {
    NSNumber * _assetSyncLimit;
    unsigned long long  _assetSyncLimitType;
    NSNumber * _assetSyncPlaylistPersistentID;
    unsigned long long  _assetSyncType;
    NPSDomainAccessor * _domainAccessor;
    NSObject<OS_dispatch_queue> * _domainAccessorQueue;
    NSNumber * _lastFullySentAssetSyncPlaylistPersistentID;
    NSNumber * _lastFullySentAssetSyncPlaylistVersion;
    NMSNotificationDispatcher * _libraryRecoNotifier;
    NSDate * _modificationDate;
    bool  _needsSync;
    NSDictionary * _notifiersDict;
    NSString * _pairingID;
    NMSNotificationDispatcher * _pinningSelectionsNotifier;
    NMSNotificationDispatcher * _pinningSettingsNotifier;
    NMSNotificationDispatcher * _recoSelectionsNotifier;
    NMSNotificationDispatcher * _settingsNotifier;
    NMSNotificationDispatcher * _storeRecoNotifier;
}

@property (nonatomic) bool allowOffChargerAssetSync;
@property (nonatomic, copy) NSNumber *assetSyncLimit;
@property (nonatomic) unsigned long long assetSyncLimitType;
@property (nonatomic, retain) MPMediaPlaylist *assetSyncPlaylist;
@property (setter=setAssetSyncPlaylistPersistentID:, nonatomic, retain) NSNumber *assetSyncPlaylistPersistentID;
@property (nonatomic) unsigned long long assetSyncType;
@property (nonatomic, readonly, copy) NSNumber *availableMediaStorageOnWatch;
@property (nonatomic, copy) NSData *cachedRecommendationsData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *lastFullySentAssetSyncPlaylistPersistentID;
@property (nonatomic, copy) NSNumber *lastFullySentAssetSyncPlaylistVersion;
@property (nonatomic, copy) NSArray *libraryRecommendationAlbums;
@property (nonatomic, copy) NSArray *libraryRecommendationPlaylists;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, copy) NSDictionary *musicRecommendationDict;
@property (nonatomic, copy) NSArray *pinnedAlbums;
@property (nonatomic, copy) NSArray *pinnedPlaylists;
@property (nonatomic, copy) NSDate *recommendationExpirationDate;
@property (nonatomic) bool shouldUseLibraryRecommendations;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *workoutPlaylistID;

+ (id)sharedDefaults;

- (void).cxx_destruct;
- (void)_addCapability:(id)arg1 forCapabilitiesKey:(id)arg2;
- (void)_addPhoneCapability:(id)arg1;
- (void)_addWatchCapability:(id)arg1;
- (id)_associatedObject;
- (bool)_boolForKey:(id)arg1 domain:(id)arg2 defaultValue:(bool)arg3;
- (void)_clearAssetSyncPlaylistDependentDefaults;
- (id)_companionSidePerDeviceDefaults;
- (bool)_continueUsingMusicRecommendationKey;
- (id)_defaultPlaylistPersistentID;
- (bool)_deviceHasCapability:(id)arg1 forCapabilitiesKey:(id)arg2;
- (void)_migrateDataIfNecessary;
- (void)_notifyChangesForKey:(id)arg1;
- (id)_objectForKey:(id)arg1 domain:(id)arg2;
- (void)_perDeviceSettingsDidResetNotification:(id)arg1;
- (bool)_phoneHasCapability:(id)arg1;
- (id)_playlistPersistentIDForPlaylistName:(id)arg1;
- (void)_preSeed2_setMusicRecommendationDict:(id)arg1;
- (void)_reloadPropertiesFromDefaults;
- (void)_reloadPropertiesFromDefaultsOnMainThread;
- (void)_removeObjectForKey:(id)arg1 domain:(id)arg2;
- (void)_removeOldMusicRecommendationsInfoIfPossible;
- (void)_resetDomainAccessor;
- (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)_setLegacyObject:(id)arg1 forKey:(id)arg2 ifRemoteDeviceMissingCapability:(id)arg3;
- (void)_setNeedsSynchronize;
- (void)_setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)_setupNotifiers;
- (unsigned long long)_spaceQuotaForNumberOfSongs:(unsigned long long)arg1;
- (void)_updateMediaCapacityIfNecessary;
- (bool)_watchHasCapability:(id)arg1;
- (void)_writePropertiesToDefaults;
- (bool)allowOffChargerAssetSync;
- (id)assetSyncLimit;
- (unsigned long long)assetSyncLimitType;
- (id)assetSyncPlaylist;
- (id)assetSyncPlaylistPersistentID;
- (unsigned long long)assetSyncType;
- (id)availableMediaStorageOnWatch;
- (void)beginBatchUpdates;
- (id)cachedRecommendationsData;
- (id)description;
- (void)dispatcherDidReceiveNotificationFromOtherProcess:(id)arg1;
- (void)dispatcherDidReceiveNotificationFromRemoteDevice:(id)arg1;
- (void)endBatchUpdates;
- (id)init;
- (id)lastFullySentAssetSyncPlaylistPersistentID;
- (id)lastFullySentAssetSyncPlaylistVersion;
- (id)libraryRecommendationAlbums;
- (id)libraryRecommendationPlaylists;
- (id)modificationDate;
- (id)musicRecommendationDict;
- (id)pinnedAlbums;
- (id)pinnedPlaylists;
- (id)recommendationExpirationDate;
- (void)setAllowOffChargerAssetSync:(bool)arg1;
- (void)setAssetSyncLimit:(id)arg1;
- (void)setAssetSyncLimitType:(unsigned long long)arg1;
- (void)setAssetSyncPlaylist:(id)arg1;
- (void)setAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setAssetSyncType:(unsigned long long)arg1;
- (void)setCachedRecommendationsData:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistPersistentID:(id)arg1;
- (void)setLastFullySentAssetSyncPlaylistVersion:(id)arg1;
- (void)setLibraryRecommendationAlbums:(id)arg1;
- (void)setLibraryRecommendationPlaylists:(id)arg1;
- (void)setMusicRecommendationDict:(id)arg1;
- (void)setPinnedAlbums:(id)arg1;
- (void)setPinnedPlaylists:(id)arg1;
- (void)setRecommendationExpirationDate:(id)arg1;
- (void)setShouldUseLibraryRecommendations:(bool)arg1;
- (void)setWorkoutPlaylistID:(id)arg1;
- (bool)shouldUseLibraryRecommendations;
- (id)workoutPlaylistID;

@end
