/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationRenderProvider : PXObservable <PXPhotoLibraryUIChangeObserver> {
    NSOperation * __analysisOperation;
    NSDictionary * __analysisResult;
    NSString * __analysisResultCacheKey;
    long long  __baseVersion;
    NSDate * __beginRenderingDate;
    PLPhotoEditModel * __editModel;
    NSNumber * __editModelDuration;
    UIImage * __existingImage;
    AVAsset * __existingVideoAsset;
    NSURL * __imageURL;
    NSNumber * __imageURLDuration;
    int  __imageURLRequestID;
    int  __placeholderImageRequestID;
    NSNumber * __recipeGenerationDuration;
    NSMutableDictionary * __renderingDurationByVariationType;
    NSMutableDictionary * __renderingOperationsByVariationType;
    NSNumber * __totalRenderingDuration;
    NSURL * __videoURL;
    NSNumber * __videoURLDuration;
    int  __videoURLRequestID;
    PHAsset * _asset;
    NSString * _assetLocalIdentifier;
    NSIndexSet * _desiredVariationTypes;
    NSError * _error;
    bool  _hasBegunRendering;
    NSProgress * _imageURLProgress;
    NSProgress * _initialLoadingProgress;
    struct { 
        bool status; 
        bool placeholderImage; 
        bool existingVideoAsset; 
        bool existingVariationResult; 
        bool imageURL; 
        bool videoURL; 
        bool editModel; 
        bool analysisResult; 
        bool cachedAnalysisResult; 
        bool renders; 
    }  _needsUpdate;
    UIImage * _placeholderImage;
    NSMutableDictionary * _progressesByVariationType;
    NSProgress * _recipeGenerationProgress;
    bool  _renderAllResources;
    NSMutableDictionary * _resultsByVariationType;
    long long  _status;
    NSString * _statusDescription;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    NSProgress * _videoURLProgress;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (setter=_setAnalysisOperation:, nonatomic, retain) NSOperation *_analysisOperation;
@property (setter=_setAnalysisResult:, nonatomic, copy) NSDictionary *_analysisResult;
@property (setter=_setAnalysisResultCacheKey:, nonatomic, retain) NSString *_analysisResultCacheKey;
@property (setter=_setBaseVersion:, nonatomic) long long _baseVersion;
@property (setter=_setBeginRenderingDate:, nonatomic, retain) NSDate *_beginRenderingDate;
@property (setter=_setEditModel:, nonatomic, copy) PLPhotoEditModel *_editModel;
@property (setter=_setEditModelDuration:, nonatomic, retain) NSNumber *_editModelDuration;
@property (setter=_setExistingImage:, nonatomic, retain) UIImage *_existingImage;
@property (setter=_setExistingVideoAsset:, nonatomic, copy) AVAsset *_existingVideoAsset;
@property (nonatomic, readonly) bool _hasAllResults;
@property (setter=_setImageURL:, nonatomic, retain) NSURL *_imageURL;
@property (setter=_setImageURLDuration:, nonatomic, retain) NSNumber *_imageURLDuration;
@property (setter=_setImageURLRequestID:, nonatomic) int _imageURLRequestID;
@property (setter=_setPlaceholderImageRequestID:, nonatomic) int _placeholderImageRequestID;
@property (setter=_setRecipeGenerationDuration:, nonatomic, retain) NSNumber *_recipeGenerationDuration;
@property (nonatomic, readonly) NSMutableDictionary *_renderingDurationByVariationType;
@property (nonatomic, readonly) NSMutableDictionary *_renderingOperationsByVariationType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _resolvedTargetSize;
@property (setter=_setTotalRenderingDuration:, nonatomic, retain) NSNumber *_totalRenderingDuration;
@property (setter=_setVideoURL:, nonatomic, retain) NSURL *_videoURL;
@property (setter=_setVideoURLDuration:, nonatomic, retain) NSNumber *_videoURLDuration;
@property (setter=_setVideoURLRequestID:, nonatomic) int _videoURLRequestID;
@property (setter=_setAsset:, nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) NSString *assetLocalIdentifier;
@property (nonatomic, readonly) PLPhotoEditModel *baseEditModel;
@property (nonatomic, readonly) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSIndexSet *desiredVariationTypes;
@property (setter=_setError:, nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *initialLoadingProgress;
@property (setter=_setPlaceholderImage:, nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) bool renderAllResources;
@property (setter=_setStatus:, nonatomic) long long status;
@property (setter=_setStatusDescription:, nonatomic, copy) NSString *statusDescription;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

+ (void)_performSimulatedWorkWithProgress:(id)arg1;
+ (id)placeholderFilters;
+ (id)sharedOperationQueue;
+ (id)supportedVariationTypes;

- (void).cxx_destruct;
- (id)_analysisOperation;
- (id)_analysisResult;
- (id)_analysisResultCacheKey;
- (long long)_baseVersion;
- (id)_beginRenderingDate;
- (id)_editModel;
- (id)_editModelDuration;
- (id)_existingImage;
- (id)_existingVideoAsset;
- (void)_handleAdjustmentDataInfo:(id)arg1 startTime:(id)arg2;
- (void)_handleAnalysisOperationCompleted:(id)arg1;
- (void)_handleCachedAnalysisResult:(id)arg1;
- (void)_handleExistingVariationVideoResult:(id)arg1 info:(id)arg2;
- (void)_handleImageURLResult:(id)arg1 info:(id)arg2 startTime:(id)arg3;
- (void)_handlePlaceholderImageResult:(id)arg1 info:(id)arg2;
- (void)_handleRenderingOperationCompleted:(id)arg1;
- (void)_handleRenderingOperationStarted:(id)arg1;
- (void)_handleVideoURLResult:(id)arg1 info:(id)arg2 startTime:(id)arg3;
- (bool)_hasAllResults;
- (id)_imageURL;
- (id)_imageURLDuration;
- (int)_imageURLRequestID;
- (void)_invalidateAnalysisResult;
- (void)_invalidateCachedAnalysisResult;
- (void)_invalidateEditModel;
- (void)_invalidateExistingVariationResult;
- (void)_invalidateExistingVideoAsset;
- (void)_invalidateImageURL;
- (void)_invalidatePlaceholderImage;
- (void)_invalidateRenders;
- (void)_invalidateStatus;
- (void)_invalidateVideoURL;
- (bool)_needsUpdate;
- (int)_placeholderImageRequestID;
- (id)_recipeGenerationDuration;
- (void)_removeAllResults;
- (id)_renderingDurationByVariationType;
- (id)_renderingOperationsByVariationType;
- (struct CGSize { double x1; double x2; })_resolvedTargetSize;
- (void)_setAnalysisOperation:(id)arg1;
- (void)_setAnalysisResult:(id)arg1;
- (void)_setAnalysisResultCacheKey:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_setBaseVersion:(long long)arg1;
- (void)_setBeginRenderingDate:(id)arg1;
- (void)_setEditModel:(id)arg1;
- (void)_setEditModelDuration:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setExistingImage:(id)arg1;
- (void)_setExistingVideoAsset:(id)arg1;
- (void)_setImageURL:(id)arg1;
- (void)_setImageURLDuration:(id)arg1;
- (void)_setImageURLRequestID:(int)arg1;
- (void)_setPlaceholderImage:(id)arg1;
- (void)_setPlaceholderImageRequestID:(int)arg1;
- (void)_setProgress:(id)arg1 forVariationType:(long long)arg2;
- (void)_setRecipeGenerationDuration:(id)arg1;
- (void)_setResult:(id)arg1 forVariationType:(long long)arg2;
- (void)_setStatus:(long long)arg1;
- (void)_setStatusDescription:(id)arg1;
- (void)_setTotalRenderingDuration:(id)arg1;
- (void)_setVideoURL:(id)arg1;
- (void)_setVideoURLDuration:(id)arg1;
- (void)_setVideoURLRequestID:(int)arg1;
- (id)_totalRenderingDuration;
- (void)_updateAnalysisResultIfNeeded;
- (void)_updateCachedAnalysisResultIfNeeded;
- (void)_updateEditModelIfNeeded;
- (void)_updateExistingVariationResultIfNeeded;
- (void)_updateExistingVideoAssetIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateImageURLIfNeeded;
- (void)_updatePlaceholderImageIfNeeded;
- (void)_updateRendersIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateVideoURLIfNeeded;
- (id)_videoURL;
- (id)_videoURLDuration;
- (int)_videoURLRequestID;
- (id)asset;
- (id)assetLocalIdentifier;
- (id)baseEditModel;
- (void)beginRendering;
- (void)cancelRendering;
- (void)dealloc;
- (id)debugDescription;
- (id)desiredVariationTypes;
- (void)didPerformChanges;
- (id)error;
- (id)init;
- (id)initWithAssetLocalIdentifier:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 desiredVariationTypes:(id)arg3;
- (id)initialLoadingProgress;
- (id)mutableChangeObject;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)placeholderImage;
- (id)progressForVariationType:(long long)arg1;
- (bool)renderAllResources;
- (id)renderResultForVariationType:(long long)arg1;
- (void)setRenderAllResources:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)status;
- (id)statusDescription;
- (struct CGSize { double x1; double x2; })targetSize;

@end
