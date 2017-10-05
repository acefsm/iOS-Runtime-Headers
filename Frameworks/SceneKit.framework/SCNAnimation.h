/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAnimation : NSObject <NSCopying, NSSecureCoding, SCNAnimation> {
    bool  _additive;
    id /* block */  _animationDidStart;
    id /* block */  _animationDidStop;
    NSArray * _animationEvents;
    struct __C3DAnimation { } * _animationRef;
    bool  _applyOnCompletion;
    bool  _autoreverses;
    double  _beginTime;
    id  _caAnimation;
    bool  _cumulative;
    bool  _didMutate;
    double  _duration;
    double  _fadeInDuration;
    double  _fadeOutDuration;
    bool  _fillBackward;
    bool  _fillForward;
    NSString * _keyPath;
    bool  _removedOnCompletion;
    double  _repeatCount;
    double  _timeOffset;
    SCNTimingFunction * _timingFunction;
    id  _userAnimation;
    NSMutableDictionary * _userInfo;
    bool  _usesSceneTimeBase;
}

@property (getter=isAdditive, nonatomic) bool additive;
@property (nonatomic, copy) id /* block */ animationDidStart;
@property (nonatomic, copy) id /* block */ animationDidStop;
@property (nonatomic, copy) NSArray *animationEvents;
@property (getter=isAppliedOnCompletion, nonatomic) bool appliedOnCompletion;
@property (nonatomic) bool autoreverses;
@property (nonatomic) double blendInDuration;
@property (nonatomic) double blendOutDuration;
@property (getter=isCumulative, nonatomic) bool cumulative;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) bool fillsBackward;
@property (nonatomic) bool fillsForward;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyPath;
@property (getter=isRemovedOnCompletion, nonatomic) bool removedOnCompletion;
@property (nonatomic) double repeatCount;
@property (nonatomic) double startDelay;
@property (readonly) Class superclass;
@property (nonatomic) double timeOffset;
@property (nonatomic, retain) SCNTimingFunction *timingFunction;
@property (nonatomic) bool usesSceneTimeBase;

+ (id)animationFromScene:(id)arg1;
+ (id)animationNamed:(id)arg1;
+ (id)animationWithC3DAnimation:(struct __C3DAnimation { }*)arg1;
+ (id)animationWithCAAnimation:(id)arg1;
+ (id)animationWithContentsOfURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (const void*)__CFObject;
- (void)_didMutate;
- (void)_setAnimationRef:(struct __C3DAnimation { }*)arg1;
- (void)_syncObjCModel;
- (id /* block */)animationDidStart;
- (id /* block */)animationDidStop;
- (id)animationEvents;
- (struct __C3DAnimation { }*)animationRef;
- (bool)autoreverses;
- (double)blendInDuration;
- (double)blendOutDuration;
- (id)caAnimation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (bool)fillsBackward;
- (bool)fillsForward;
- (id)initWithC3DAnimation:(struct __C3DAnimation { }*)arg1;
- (id)initWithCAAnimation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAdditive;
- (bool)isAppliedOnCompletion;
- (bool)isCumulative;
- (bool)isRemovedOnCompletion;
- (id)keyPath;
- (void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2;
- (double)repeatCount;
- (double)repeatDuration;
- (void)setAdditive:(bool)arg1;
- (void)setAnimationDidStart:(id /* block */)arg1;
- (void)setAnimationDidStop:(id /* block */)arg1;
- (void)setAnimationEvents:(id)arg1;
- (void)setAppliedOnCompletion:(bool)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setBlendInDuration:(double)arg1;
- (void)setBlendOutDuration:(double)arg1;
- (void)setCumulative:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setFillsBackward:(bool)arg1;
- (void)setFillsForward:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setRepeatCount:(double)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setStartDelay:(double)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setUsesSceneTimeBase:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (double)startDelay;
- (double)timeOffset;
- (id)timingFunction;
- (id)userAnimation;
- (bool)usesSceneTimeBase;
- (id)valueForUndefinedKey:(id)arg1;

@end
