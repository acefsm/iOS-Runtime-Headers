/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAAnimation : NSObject <CAAction, CAMediaTiming, CAPropertyInfo, NSCopying, NSMutableCopying, NSSecureCoding> {
    void * _attr;
    unsigned int  _flags;
}

@property CAStateControllerTransition *CAStateControllerTransition;
@property long long _mapkit_ID;
@property (nonatomic, copy) NSArray *animationEvents;
@property bool autoreverses;
@property double beginTime;
@property (copy) NSString *beginTimeMode;
@property (retain) <CAAnimationDelegate> *delegate;
@property bool discretizesTime;
@property double duration;
@property (getter=isEnabled) bool enabled;
@property double fadeInDuration;
@property double fadeOutDuration;
@property (copy) NSString *fillMode;
@property double frameInterval;
@property long long preferredFramesPerSecond;
@property (getter=isRemovedOnCompletion) bool removedOnCompletion;
@property float repeatCount;
@property double repeatDuration;
@property float speed;
@property double timeOffset;
@property (retain) CAMediaTimingFunction *timingFunction;
@property bool usesSceneTimeBase;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (id)animation;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (bool)autoreverses;
- (double)beginTime;
- (id)beginTimeMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (bool)discretizesTime;
- (double)duration;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillMode;
- (double)frameInterval;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isRemovedOnCompletion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)preferredFramesPerSecond;
- (bool)removedOnCompletion;
- (float)repeatCount;
- (double)repeatDuration;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setAutoreverses:(bool)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBeginTimeMode:(id)arg1;
- (void)setDefaultDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscretizesTime:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (float)speed;
- (double)timeOffset;
- (id)timingFunction;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (long long)_mapkit_ID;
- (void)set_mapkit_ID:(long long)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)animationWithSCNAnimation:(id)arg1;

- (id)animationEvents;
- (bool)commitsOnCompletion;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void)setAnimationEvents:(id)arg1;
- (void)setCommitsOnCompletion:(bool)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setUsesSceneTimeBase:(bool)arg1;
- (bool)usesSceneTimeBase;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_jiggleAnimation;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_copyWithBeginTime:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pkui_shakeAnimation;

- (id /* block */)pkui_completionHandler;
- (id /* block */)pkui_didStartHandler;
- (void)pkui_setCompletionHandler:(id /* block */)arg1;
- (void)pkui_setDidStartHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)TSD_supportedKeyPaths;

- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (bool)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)p_getValue:(id*)arg1 animationPercent:(double*)arg2 atTime:(double)arg3 initialValue:(id)arg4;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (void)TSD_enableAdjustmentForLagacyCacheBoundaries;

- (id)TSDCAAnimationContextCache;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2;

@end
