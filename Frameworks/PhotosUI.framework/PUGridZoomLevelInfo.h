/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridZoomLevelInfo : NSObject <PUGridRenderedStripDataSource, PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate> {
    PUGridZoomLevelInfo * _baseZoomLevelInfo;
    PHCachingImageManager * _cachingImageManager;
    PUSectionedGridLayout * _collectionViewLayout;
    PUGridRenderedStrip * _currentRenderedStrip;
    NSString * _displayTitle;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastItemPixelSize;
    long long  _maxRowsPerSection;
    double  _pendingContentWidth;
    PHAssetResourceQualityClass * _qualityClass;
    bool  _summarizeSections;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailImageSize;
    bool  _useFloatingHeaderGroupName;
    unsigned long long  _zoomLevel;
    PUMomentsZoomLevelManager * _zoomLevelManager;
    PUZoomableGridViewController * _zoomableGridViewController;
}

@property (nonatomic, readonly) struct __CFString { }*aggregateLevelKey;
@property (nonatomic, readonly) PUGridZoomLevelInfo *baseZoomLevelInfo;
@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (nonatomic, readonly) long long cellFillMode;
@property (nonatomic, readonly) PUSectionedGridLayout *collectionViewLayout;
@property (nonatomic, readonly) unsigned long long dateRangeFormatterPreset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageRequestItemSize;
@property (nonatomic, readonly) double itemContentScale;
@property (nonatomic) struct CGSize { double x1; double x2; } lastItemPixelSize;
@property (nonatomic, readonly) long long maxRowsPerSection;
@property (nonatomic) double pendingContentWidth;
@property (nonatomic, retain) PHAssetResourceQualityClass *qualityClass;
@property (nonatomic, readonly) NSString *renderedStripsElementKind;
@property (nonatomic, readonly) NSString *sectionHeaderElementKind;
@property (nonatomic) bool summarizeSections;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCollectionViewDragSource;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailImageSize;
@property (nonatomic) bool useFloatingHeaderGroupName;
@property (nonatomic, readonly) double zoomInDuration;
@property (nonatomic, readonly) unsigned long long zoomLevel;
@property (nonatomic, readonly) PUMomentsZoomLevelManager *zoomLevelManager;
@property (nonatomic, readonly) double zoomOutDuration;
@property (nonatomic) PUZoomableGridViewController *zoomableGridViewController;
@property (nonatomic, readonly) PUZoomableGridViewController *zoomableGridViewController;

- (void).cxx_destruct;
- (unsigned long long)_detailViewSourceOriginWithZoomLevel:(unsigned long long)arg1;
- (void)_updateBackdropGroupNameForHeaderView:(id)arg1;
- (struct __CFString { }*)aggregateLevelKey;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (id)baseZoomLevelInfo;
- (id)cachingImageManager;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (id)collectionViewLayout;
- (bool)configureGridCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (bool)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (unsigned long long)dateRangeFormatterPreset;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (void)didFinishZoomLevelTransition;
- (void)didTapHeaderView:(id)arg1;
- (id)displayTitle;
- (void)getPhotosDataSource:(id*)arg1 displayTitleInfo:(id*)arg2 forDetailsForVisualSection:(long long)arg3;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (id)imageDataForAsset:(id)arg1 itemContentScale:(double)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (long long)imageDeliveryMode;
- (struct CGSize { double x1; double x2; })imageRequestItemSize;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (double)itemContentScale;
- (struct CGSize { double x1; double x2; })lastItemPixelSize;
- (long long)maxRowsPerSection;
- (void)modelDidChange:(id)arg1;
- (id)newCollectionViewLayout;
- (double)pendingContentWidth;
- (void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (void)pushPhotosDetailsViewForVisualSection:(long long)arg1 animated:(bool)arg2;
- (id)qualityClass;
- (void)registerReusableViewClassesForCollectionView:(id)arg1;
- (void)renderedStrip:(id)arg1 enumerateAssetsForVisualSection:(long long)arg2 inVisualItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 usingBlock:(id /* block */)arg4;
- (id)renderedStrip:(id)arg1 imageDataForAsset:(id)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)renderedStripsElementKind;
- (id)sectionHeaderElementKind;
- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(bool)arg2;
- (void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(bool)arg2;
- (long long)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(long long)arg2;
- (struct CGPoint { double x1; double x2; })sectionedGridLayout:(id)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (id)sectionedGridLayoutName:(id)arg1;
- (bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (void)setLastItemPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPendingContentWidth:(double)arg1;
- (void)setQualityClass:(id)arg1;
- (void)setSummarizeSections:(bool)arg1;
- (void)setUseFloatingHeaderGroupName:(bool)arg1;
- (void)setZoomableGridViewController:(id)arg1;
- (bool)shouldUseDynamicLayout;
- (bool)summarizeSections;
- (bool)supportsCollectionViewDragSource;
- (bool)supportsEditMode;
- (bool)supportsIncrementalChangeNotifications;
- (struct CGSize { double x1; double x2; })thumbnailImageSize;
- (void)updateForSizeChangeIfNecessary;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)useFloatingHeaderGroupName;
- (bool)wantsAssetCountsVisible;
- (bool)wantsAutomaticContentOffsetAdjustment;
- (bool)wantsCloudStatusVisible;
- (bool)wantsMagnifierNavigation;
- (void)willAnimateSizeTransition;
- (void)willShowMagnifiedViewController:(id)arg1;
- (double)zoomInDuration;
- (unsigned long long)zoomLevel;
- (id)zoomLevelManager;
- (double)zoomOutDuration;
- (id)zoomableGridViewController;

@end
