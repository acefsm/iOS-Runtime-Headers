/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetGroupHelper : NSObject <PXPhotoLibraryUIChangeObserver> {
    PHManualFetchResult * __assetsFetchResults;
    bool  _areAllAssetsPrimary;
    bool  _canToggleNonPrimaryAssetsVisibility;
    bool  _didCheckAreAllAssetsPrimary;
    bool  _didCheckCanToggleNonPrimaryAssetsVisibility;
    bool  _isShowing;
}

@property (setter=_setAssetsFetchResult:, nonatomic, retain) PHManualFetchResult *_assetsFetchResults;
@property (nonatomic, copy) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isShowing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_areAllAssetsPrimary;
- (id)_assetsFetchResults;
- (void)_prepareNonPrimaryAssetsVisibilityValueIfNeeded;
- (void)_setAssetsFetchResult:(id)arg1;
- (void)applyNonPrimaryAssetsVisibility:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)assets;
- (bool)canToggleNonPrimaryAssetsVisibility;
- (void)dealloc;
- (id)init;
- (bool)isHiding;
- (bool)isShowing;
- (id)menuItemTitleForTogglingNonPrimaryAssetsVisibility;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setAssets:(id)arg1;

@end
