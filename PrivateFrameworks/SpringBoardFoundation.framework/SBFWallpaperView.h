/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperView : UIView <SBFLegibilitySettingsProvider, _UISettingsKeyObserver> {
    NSTimer * _colorSampleTimer;
    double  _contentScaleFactor;
    UIView * _contentView;
    bool  _continuousColorSamplingEnabled;
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    long long  _disallowRasterizationBlockCount;
    bool  _generatingBlurredImages;
    <SBFWallpaperViewInternalObserver> * _internalObserver;
    UIColor * _lastAverageColor;
    _UILegibilitySettings * _legibilitySettings;
    _UILegibilitySettingsProvider * _legibilitySettingsProvider;
    long long  _logicalContentOrientation;
    bool  _parallaxEnabled;
    double  _parallaxFactor;
    SBFWallpaperParallaxSettings * _parallaxSettings;
    UIView * _parallaxView;
    bool  _rotating;
    bool  _sharesContentsAcrossVariants;
    bool  _shouldGenerateBlurredImagesWhenVisible;
    unsigned long long  _transformOptions;
    long long  _variant;
    bool  _wallpaperAnimationEnabled;
    NSString * _wallpaperName;
    SBFWallpaperSettings * _wallpaperSettings;
    <SBFWallpaperViewSettingsProvider> * _wallpaperSettingsProvider;
    bool  _wantsRasterization;
    double  _zoomFactor;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) bool continuousColorSamplingEnabled;
@property (nonatomic, readonly) bool contrastRequiresGradient;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly) double cropZoomScale;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContentOutsideVisibleBounds;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBFWallpaperViewInternalObserver> *internalObserver;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long logicalContentOrientation;
@property (nonatomic, readonly) bool needsImmediateLayoutBeforeRotation;
@property (nonatomic) bool parallaxEnabled;
@property (nonatomic) double parallaxFactor;
@property (getter=isRotating, nonatomic) bool rotating;
@property (nonatomic) bool sharesContentsAcrossVariants;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCropping;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) long long variant;
@property (nonatomic) bool wallpaperAnimationEnabled;
@property (nonatomic, readonly) UIImage *wallpaperImage;
@property (nonatomic, copy) NSString *wallpaperName;
@property (nonatomic) <SBFWallpaperViewSettingsProvider> *wallpaperSettingsProvider;
@property (nonatomic, readonly) long long wallpaperType;
@property (nonatomic) double zoomFactor;

+ (bool)_allowsParallax;
+ (bool)_allowsRasterization;
+ (bool)_shouldScaleForParallax;

- (void).cxx_destruct;
- (void)_addParallax;
- (void)_applyParallaxSettings;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 smudgeRadius:(double)arg2;
- (void)_beginDisallowRasterizationBlock;
- (id)_blurReplacementImage;
- (id)_blurredImage;
- (id)_computeAverageColor;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (id)_displayedImage;
- (void)_endDisallowRasterizationBlock;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (id)_imageForBackdropParameters:(struct { long long x1; long long x2; long long x3; double x4; double x5; double x6; double x7; bool x8; })arg1 includeTint:(bool)arg2;
- (bool)_isVisible;
- (void)_notifyBlursInvalidated;
- (void)_notifyGeometryInvalidated;
- (id)_primaryColorOverride;
- (void)_removeParallax;
- (void)_setLegibilitySettings:(id)arg1 notify:(bool)arg2;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)_updateContentViewScale;
- (void)_updateGeneratingBlurs;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 force:(bool)arg2 notify:(bool)arg3;
- (void)_updateParallaxSettings;
- (void)_updateRasterizationState;
- (void)_updateScaleFactor;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withSmudgeRadius:(double)arg2;
- (id)blurredImage;
- (double)contentScaleFactor;
- (id)contentView;
- (bool)continuousColorSamplingEnabled;
- (double)contrast;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (bool)contrastRequiresGradient;
- (bool)contrastRequiresTreatments;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (double)cropZoomScale;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (bool)hasContentOutsideVisibleBounds;
- (id)imageForBackdropParameters:(struct { long long x1; long long x2; long long x3; double x4; double x5; double x6; double x7; bool x8; })arg1 includeTint:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 variant:(long long)arg2 wallpaperSettingsProvider:(id)arg3;
- (id)internalObserver;
- (void)invalidate;
- (bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (bool)isRotating;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)legibilitySettingsDidChange;
- (long long)logicalContentOrientation;
- (bool)luminanceInRectRequiresTreatments:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsImmediateLayoutBeforeRotation;
- (bool)parallaxEnabled;
- (double)parallaxFactor;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContinuousColorSamplingEnabled:(bool)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGeneratesBlurredImages:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInternalObserver:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLogicalContentOrientation:(long long)arg1;
- (void)setParallaxEnabled:(bool)arg1;
- (void)setParallaxFactor:(double)arg1;
- (void)setRotating:(bool)arg1;
- (void)setSharesContentsAcrossVariants:(bool)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setVariant:(long long)arg1;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 forced:(bool)arg3;
- (void)setWallpaperAnimationEnabled:(bool)arg1;
- (void)setWallpaperName:(id)arg1;
- (void)setWallpaperSettingsProvider:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomFactor:(double)arg1 withAnimationFactory:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)sharesContentsAcrossVariants;
- (id)snapshotImage;
- (bool)supportsCropping;
- (unsigned long long)transformOptions;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (long long)variant;
- (bool)wallpaperAnimationEnabled;
- (id)wallpaperImage;
- (id)wallpaperName;
- (id)wallpaperSettingsProvider;
- (long long)wallpaperType;
- (bool)wantsRasterization;
- (double)zoomFactor;

@end
