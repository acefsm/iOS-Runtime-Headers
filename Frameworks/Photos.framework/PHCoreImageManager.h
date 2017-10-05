/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCoreImageManager : NSObject {
    NSObject<OS_dispatch_queue> * _CPLDownloadFireAndForgetRequestQueue;
    NSObject<OS_dispatch_queue> * _CPLDownloadUpdateIsolationQueue;
    PHConcurrentMapTable * _perDomainCloudPreheatItemMapTables;
    PHConcurrentMapTable * _perDomainHighPriorityRequestWaitGroups;
    PHConcurrentMapTable * _perDomainPreheatItemMapTables;
    NSMutableSet * _preheatBlobsToConsiderForCleanup;
    NSMapTable * _requestLookupTable;
    NSObject<OS_dispatch_queue> * _requestLookupTableIsolationQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *CPLDownloadFireAndForgetRequestQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *CPLDownloadUpdateIsolationQueue;
@property (nonatomic, retain) PHConcurrentMapTable *perDomainCloudPreheatItemMapTables;
@property (nonatomic, retain) PHConcurrentMapTable *perDomainHighPriorityRequestWaitGroups;
@property (nonatomic, retain) PHConcurrentMapTable *perDomainPreheatItemMapTables;
@property (nonatomic, retain) NSMutableSet *preheatBlobsToConsiderForCleanup;
@property (nonatomic, retain) NSMapTable *requestLookupTable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestLookupTableIsolationQueue;

+ (struct CGSize { double x1; double x2; })_aspectedSizeWithSize:(struct CGSize { double x1; double x2; })arg1 maxDimension:(double)arg2;
+ (void)_chooseFormatsForSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 srcAspectRatio:(double)arg3 options:(id)arg4 hasAdjustmentsHandler:(id /* block */)arg5 desiredImagePixelSize:(struct CGSize { double x1; double x2; }*)arg6 bestFormat:(id*)arg7 degradedFormat:(id*)arg8;
+ (id)_debugFilenameForAsset:(id)arg1;
+ (id)_degradedFormatWithPolicy:(long long)arg1 request:(id)arg2 hasAdjustmentsHandler:(id /* block */)arg3;
+ (id)_descriptionForDomain:(id)arg1;
+ (id)_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
+ (id)_fastestDegradedFormatForRequest:(id)arg1 hasAdjustmentsHandler:(id /* block */)arg2;
+ (struct CGImage { }*)_newResizedImageForImage:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 normalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentMode:(long long)arg4;
+ (long long)_plImageVersionFromPHImageRequestOptionsVersion:(long long)arg1;
+ (long long)_wantedCloudPlaceholderKindForImageFormat:(id)arg1;
+ (void)runBlockAsPrivilegedAsPhotosApp:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CPLDownloadFireAndForgetRequestQueue;
- (id)CPLDownloadUpdateIsolationQueue;
- (void)_asyncGenerateLiveRenderedImageWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 desiredImagePixelSize:(struct CGSize { double x1; double x2; })arg4 completionHandler:(id /* block */)arg5;
- (void)_cancelAsynchronousRequestWithID:(int)arg1;
- (void)_clearCPLDownloadWaitGroupForRequest:(id)arg1;
- (void)_considerPreheatItemForCleanup:(id)arg1 asset:(id)arg2 domain:(id)arg3;
- (id)_fastFetchAdjustmentDataWithRequest:(id)arg1;
- (void)_fetchAdjustmentDataThruAssetsdAndCPLHandlerWithRequest:(id)arg1 networkAccessAllowed:(bool)arg2 trackCPLDownload:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchAnySizeImageAsNon5551BytesPossiblyThruAssetsdAndCPLWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 wantsProperties:(bool)arg5 networkAccessAllowed:(bool)arg6 networkAccessForced:(bool)arg7 trackCPLDownload:(bool)arg8 sync:(bool)arg9 completionHandler:(id /* block */)arg10;
- (void)_fetchAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg5 sync:(bool)arg6 fireAndForgetCPLDownload:(bool)arg7 completionHandler:(id /* block */)arg8;
- (void)_fetchPreheatableAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 preheatItem:(id)arg5 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg6 sync:(bool)arg7 fireAndForgetCPLDownload:(bool)arg8 completionHandler:(id /* block */)arg9;
- (void)_fireAndForgetCPLDownloadWithRequest:(id)arg1 format:(int)arg2;
- (void)_handleNormalImageRequest:(id)arg1 library:(id)arg2 deliveryMode:(long long)arg3 degradedFormat:(id)arg4 bestFormat:(id)arg5 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg6 wantsImageDataOrURL:(bool)arg7 sync:(bool)arg8 isFinalStageOfStagedRequest:(bool)arg9 isResponseToSharedStreamsDownload:(bool)arg10;
- (void)_handleSyncImageRequestForBRGA5551:(id)arg1;
- (id)_highPriorityRequestWaitGroupWithDomain:(id)arg1;
- (void)_inq_main_cleanupPreheatBlobs;
- (id)_originalPreheatItemCreateTransientWithAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3 domain:(id)arg4;
- (void)_performPreheatReferenceCountingOperationForAssets:(id)arg1 CPLPrefetching:(bool)arg2 domain:(id)arg3 operation:(long long)arg4 passingTestHandler:(id /* block */)arg5;
- (id)_preheatItemCreateIfNeededWithAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4 CPLPrefetching:(bool)arg5 outDidExist:(bool*)arg6 domain:(id)arg7;
- (id)_preheatItemMapTableWithFormat:(int)arg1 CPLPrefetching:(bool)arg2 domain:(id)arg3 createIfNeeded:(bool)arg4;
- (id)_preheatItemSourceWithFormat:(int)arg1;
- (id)_preheatItemWithAsset:(id)arg1 format:(int)arg2 CPLPrefetching:(bool)arg3 domain:(id)arg4;
- (void)_processImageRequest:(id)arg1 sync:(bool)arg2;
- (void)_registerRequest:(id)arg1;
- (id)_resizeUIImage:(id)arg1 withRequest:(id)arg2;
- (id)_setupCPLDownloadWaitGroupForRequest:(id)arg1 withTimeout:(unsigned long long)arg2;
- (void)_unregisterRequest:(id)arg1;
- (void)_updateCPLDownloadStatesOnConnectionLostNotification:(id)arg1;
- (void)_updateCPLDownloadStatesOnStatusDidChangeNotification:(id)arg1;
- (void)asyncEnumeratePendingCPLDownloadRequestsWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)asyncEnumeratePendingRequestsWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)perDomainCloudPreheatItemMapTables;
- (id)perDomainHighPriorityRequestWaitGroups;
- (id)perDomainPreheatItemMapTables;
- (id)preheatBlobsToConsiderForCleanup;
- (id)requestLookupTable;
- (id)requestLookupTableIsolationQueue;
- (void)setCPLDownloadFireAndForgetRequestQueue:(id)arg1;
- (void)setCPLDownloadUpdateIsolationQueue:(id)arg1;
- (void)setPerDomainCloudPreheatItemMapTables:(id)arg1;
- (void)setPerDomainHighPriorityRequestWaitGroups:(id)arg1;
- (void)setPerDomainPreheatItemMapTables:(id)arg1;
- (void)setPreheatBlobsToConsiderForCleanup:(id)arg1;
- (void)setRequestLookupTable:(id)arg1;
- (void)setRequestLookupTableIsolationQueue:(id)arg1;
- (void)updateRequest:(id)arg1 withDownloadContext:(id)arg2;

@end
