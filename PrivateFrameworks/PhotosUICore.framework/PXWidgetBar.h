/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXWidgetBar : NSObject <PXTileSource, PXTilingControllerTransitionDelegate> {
    PXWidgetBarLayout * __layout;
    PXBasicTileAnimator * __tileAnimator;
    NSMutableSet * __tilesInUse;
    double  __viewHeight;
    bool  _allowUserInteractionWithSubtitle;
    NSString * _caption;
    <PXWidgetBarDelegate> * _delegate;
    struct { 
        bool didSelectSubtitle; 
        bool didSelectDisclosureAffordance; 
    }  _delegateRespondsTo;
    NSString * _disclosureTitle;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct { 
        bool view; 
        bool viewHeight; 
        bool layout; 
    }  _needsUpdateFlags;
    PXScrollViewController * _scrollViewController;
    PXWidgetBarSpec * _spec;
    NSString * _subtitle;
    PXTilingController * _tilingController;
    NSString * _title;
    struct NSObject { Class x1; } * _view;
}

@property (nonatomic, readonly) PXWidgetBarLayout *_layout;
@property (nonatomic, readonly) PXBasicTileAnimator *_tileAnimator;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (setter=_setViewHeight:, nonatomic) double _viewHeight;
@property (nonatomic) bool allowUserInteractionWithSubtitle;
@property (nonatomic, copy) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXWidgetBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *disclosureTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, retain) PXWidgetBarSpec *spec;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *view;
@property (nonatomic, readonly) double viewHeight;

- (void).cxx_destruct;
- (void)_invalidateLayout;
- (id)_layout;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_setViewHeight:(double)arg1;
- (id)_tileAnimator;
- (id)_tilesInUse;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateViewHeightIfNeeded;
- (void)_updateViewIfNeeded;
- (double)_viewHeight;
- (bool)allowUserInteractionWithSubtitle;
- (id)caption;
- (void)checkInTile:(id)arg1;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)checkOutTileWithKind:(long long)arg1;
- (id)createTileAnimator;
- (struct NSObject { Class x1; }*)createView;
- (id)delegate;
- (void)didSelectDisclosureAffordance;
- (void)didSelectSubtitle;
- (id)disclosureTitle;
- (id)init;
- (id)initWithScrollViewController:(id)arg1;
- (void)invalidateView;
- (void)invalidateViewHeight;
- (void)performChanges:(id /* block */)arg1;
- (id)scrollViewController;
- (void)setAllowUserInteractionWithSubtitle:(bool)arg1;
- (void)setCaption:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)spec;
- (id)subtitle;
- (id)tilingController;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)title;
- (void)updateView;
- (struct NSObject { Class x1; }*)view;
- (double)viewHeight;

@end
