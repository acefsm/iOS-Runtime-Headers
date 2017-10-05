/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNView : UIView <DebugHierarchyObject, SCNSceneRenderer, SCNTechniqueSupport> {
    unsigned long long  __ibPreferredRenderingAPI;
    NSString * __ibSceneName;
    unsigned int  _appIsDeactivated;
    unsigned int  _autoPausedScene;
    UIColor * _backgroundColor;
    CALayer * _backingLayer;
    NSArray * _controllerGestureRecognizers;
    double  _currentSystemTime;
    id  _delegate;
    <MTLDevice> * _device;
    bool  _didTriggerRedrawWhileRendering;
    unsigned int  _disableLinearRendering;
    SCNDisplayLink * _displayLink;
    unsigned int  _drawOnMainThreadPending;
    unsigned int  _firstDrawDone;
    unsigned int  _ibNoMultisampling;
    unsigned int  _inRenderQueueForLayerBackedGLRendering;
    unsigned int  _isInLiveResize;
    unsigned int  _isOpaque;
    SCNJitterer * _jitterer;
    double  _lastUpdate;
    NSRecursiveLock * _lock;
    <SCNEventHandler> * _navigationCameraController;
    long long  _preferredFramePerSeconds;
    SCNRenderer * _renderer;
    unsigned long long  _renderingAPI;
    unsigned int  _rendersContinuously;
    SCNScene * _scene;
    char * _snapshotImageData;
    unsigned long long  _snapshotImageDataLength;
    SCNSpriteKitEventHandler * _spriteKitEventHandler;
    unsigned int  _viewIsOffscreen;
}

@property (nonatomic) bool allowsCameraControl;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (nonatomic, retain) SCNNode *audioListener;
@property (nonatomic) bool autoenablesDefaultLighting;
@property (nonatomic, readonly) <SCNCameraControlConfiguration> *cameraControlConfiguration;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly) <MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long debugOptions;
@property (nonatomic, readonly) SCNCameraController *defaultCameraController;
@property (nonatomic) <SCNSceneRendererDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long depthPixelFormat;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, retain) EAGLContext *eaglContext;
@property (readonly) unsigned long long hash;
@property (getter=isJitteringEnabled, nonatomic) bool jitteringEnabled;
@property (nonatomic) bool loops;
@property (nonatomic, retain) SKScene *overlaySKScene;
@property (getter=isPlaying) bool playing;
@property (nonatomic, retain) SCNNode *pointOfView;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) unsigned long long renderingAPI;
@property (nonatomic) bool rendersContinuously;
@property (nonatomic, retain) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (nonatomic) bool showsStatistics;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (readonly) Class superclass;
@property (nonatomic, copy) SCNTechnique *technique;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (bool)_isMetalSupported;
+ (id)_kvoKeysForwardedToRenderer;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentUIFocusEnvironment;
+ (id)deviceForOptions:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (Class)layerClass;
+ (bool)lowLatency;
+ (unsigned long long)renderingAPIForOptions:(id)arg1;

- (void)SCN_displayLinkCallback:(double)arg1;
- (const void*)__CFObject;
- (void)_adjustBackingLayerPixelFormat;
- (id)_authoringEnvironment;
- (void)_backgroundDidChange;
- (bool)_canJitter;
- (bool)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_commonInit:(id)arg1;
- (bool)_controlsOwnScaleFactor;
- (id)_defaultBackgroundColor;
- (bool)_disableLinearRendering;
- (void)_drawAtTime:(double)arg1;
- (bool)_enablesDeferredShading;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (double)_flipY:(double)arg1;
- (void)_flushDisplayLink;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusFrameForSCNNode:(id)arg1;
- (id)_focusedItemRegionContainer;
- (id)_getFocusableNodes;
- (int)_ibPreferredRenderingAPI;
- (id)_ibSceneName;
- (bool)_ibWantsMultisampling;
- (bool)_isEditor;
- (void)_jitterRedisplay;
- (long long)_preferredFocusMovementStyle;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_renderingQueue;
- (void)_resetContentsScaleFactor;
- (double)_runFPSTestWithDuration:(double)arg1;
- (void)_sceneDidUpdate:(id)arg1;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_screenTransform;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_selectRenderingAPIWithOptions:(id)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setNeedsDisplay;
- (bool)_showsAuthoringEnvironment;
- (double)_superSamplingFactor;
- (bool)_supportsJitteringSyncRedraw;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (struct CGSize { double x1; double x2; })_updateBackingSize;
- (void)_updateContentsScaleFactor;
- (void)_updateGestureRecognizers;
- (void)_updateOpacity;
- (void)_updateProbes:(id)arg1 withProgress:(id)arg2;
- (bool)_wantsSceneRendererDelegationMessages;
- (bool)allowsCameraControl;
- (unsigned long long)antialiasingMode;
- (id)audioEngine;
- (id)audioEnvironmentNode;
- (id)audioListener;
- (bool)autoenablesDefaultLighting;
- (id)backgroundColor;
- (id)cameraControlConfiguration;
- (unsigned long long)colorPixelFormat;
- (id)commandQueue;
- (void*)context;
- (id)currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (void)dealloc;
- (unsigned long long)debugOptions;
- (id)defaultCameraController;
- (id)delegate;
- (unsigned long long)depthPixelFormat;
- (id)description;
- (id)device;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (id)displayLink;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)eaglContext;
- (void)encodeWithCoder:(id)arg1;
- (id)eventHandler;
- (void)eventHandlerWantsRedraw;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 options:(id)arg3;
- (int)ibPreferredRenderingAPI;
- (id)ibSceneName;
- (bool)ibWantsMultisampling;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (bool)isJitteringEnabled;
- (bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (bool)isOpaque;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)lock;
- (bool)loops;
- (id)navigationCameraController;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overlaySKScene;
- (void)pause:(id)arg1;
- (void)pauseDisplayLink;
- (void)play:(id)arg1;
- (id)pointOfCulling;
- (id)pointOfView;
- (long long)preferredFramesPerSecond;
- (bool)prepareObject:(id)arg1 shouldAbortBlock:(id /* block */)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(id /* block */)arg4;
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (id)renderer;
- (unsigned long long)renderingAPI;
- (bool)rendersContinuously;
- (void)resumeDisplayLink;
- (id)scene;
- (double)sceneTime;
- (id)scn_backingLayer;
- (bool)scn_inLiveResize;
- (void)scn_setBackingLayer:(id)arg1;
- (void)setAllowsCameraControl:(bool)arg1;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setAudioListener:(id)arg1;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEaglContext:(id)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setIbPreferredRenderingAPI:(int)arg1;
- (void)setIbSceneName:(id)arg1;
- (void)setIbWantsMultisampling:(bool)arg1;
- (void)setJitteringEnabled:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setNavigationCameraController:(id)arg1;
- (void)setOverlaySKScene:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfCulling:(id)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPointOfView:(id)arg1 animate:(bool)arg2;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRendersContinuously:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(bool)arg1;
- (void)setTechnique:(id)arg1;
- (void)set_disableLinearRendering:(bool)arg1;
- (void)set_enablesDeferredShading:(bool)arg1;
- (void)set_ibPreferredRenderingAPI:(int)arg1;
- (void)set_ibSceneName:(id)arg1;
- (void)set_ibWantsMultisampling:(bool)arg1;
- (void)set_screenTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)set_showsAuthoringEnvironment:(bool)arg1;
- (void)set_superSamplingFactor:(double)arg1;
- (void)set_wantsSceneRendererDelegationMessages:(bool)arg1;
- (bool)showsStatistics;
- (id)snapshot;
- (unsigned long long)stencilPixelFormat;
- (void)stop:(id)arg1;
- (void)switchToCameraNamed:(id)arg1;
- (void)switchToNextCamera;
- (id)technique;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)unlock;
- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)willMoveToWindow:(id)arg1;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (id)__dbg_pointOfViewIndexPath;
- (id)debugHierarchyAdditionalGroupingIDs;
- (id)debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id*)arg2;
- (id)debugHierarchyPropertyDescriptions;

@end
