/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewInProcessAnimationManager : NSObject <_UIViewInProcessAnimationManagerDriver> {
    bool  _advancingOnCommitDisabled;
    NSObject<OS_dispatch_queue> * _animationAdvancerWaitingFlagQueue;
    NSMutableArray * _animationBlocksToStart;
    bool  _animationsShouldCompleteImmediately;
    bool  _animationsSuspended;
    <_UIViewInProcessAnimationManagerDriver> * _animatorAdvancer;
    NSObject<OS_dispatch_queue> * _backlightQueue;
    _UIAppCACommitFuture * _caCommitFuture;
    bool  _commitsSynchronously;
    NSThread * _currentTickThread;
    double  _deltaTime;
    CADisplayLink * _displayLink;
    NSObject<OS_dispatch_queue> * _displayLinkAccessQueue;
    bool  _displayLinkInvalidated;
    NSMutableArray * _entries;
    NSObject<OS_dispatch_queue> * _entryLockingQueue;
    unsigned long long  _executionMode;
    NSMutableArray * _newlyAddedEntries;
    bool  _performScheduledBlocksManually;
    NSMutableArray * _postTickBlocks;
    NSObject<OS_dispatch_semaphore> * _postTicksDelaySemaphore;
    NSMutableArray * _preExitBlocks;
    NSMutableArray * _preTickBlocks;
    NSObject<OS_dispatch_queue> * _preTickLockingQueue;
    NSHashTable * _presentationGroups;
    NSMutableArray * _presentationModifierGroupRequestBlocks;
    unsigned long long  _presentationModifierRequestCount;
    double  _refreshInterval;
    int  _screenDimmingNotificationToken;
    bool  _screenIsOff;
    bool  _skipNextFrame;
    NSObject<OS_dispatch_queue> * _tickPrepQueue;
    NSObject<OS_dispatch_queue> * _tickQueue;
    double  _time;
    NSObject<OS_dispatch_queue> * _timerQueue;
    NSObject<OS_dispatch_source> * _timerSource;
    bool  _usesMainThreadExecution;
    bool  _waitingForAnimatorAdvancerToStart;
}

@property (nonatomic) bool advancingOnCommitDisabled;
@property (nonatomic) bool commitsSynchronously;
@property NSThread *currentTickThread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long executionMode;
@property (readonly) unsigned long long hash;
@property (setter=_setPerformScheduledBlocksManually:, nonatomic) bool performScheduledBlocksManually;
@property (readonly) Class superclass;
@property (nonatomic) bool usesMainThreadExecution;

+ (void)_cancelPresentationModifierGroupRequest:(id)arg1;
+ (void)_dispatchAsyncOntoMainBeforeExit:(id /* block */)arg1;
+ (id)_requestPresentationModifierGroup:(id /* block */)arg1;
+ (void)_setExternalAnimationDriver:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_advanceWithTime:(double)arg1;
- (void)_applicationBecameActive;
- (void)_applicationResignedActive;
- (void)_cancelAllAnimationsImmediately;
- (void)_cancelPresentationModifierGroupRequest:(id)arg1;
- (void)_commitSynchronously;
- (void)_displayLinkFire:(id)arg1;
- (bool)_isInvalidated;
- (void)_performTick:(double)arg1 cancel:(bool)arg2 force:(bool)arg3 eventName:(id)arg4 entry:(id /* block */)arg5 exit:(id /* block */)arg6;
- (void)_performWhenInProcessAnimationsTransactionCommits:(id /* block */)arg1;
- (void)_prepareForTick;
- (void)_processEntriesCollectingEntriesToRemove:(id)arg1 cancel:(bool)arg2;
- (void)_processPostTicks;
- (void)_processPostTicksDelayIfNecessary:(double)arg1;
- (void)_processPreTicks;
- (void)_processPresentationModifierRequestsAndFlush;
- (void)_processTickExitRemovingEntries:(id)arg1;
- (void)_registerBacklightChangedNotification;
- (id)_requestPresentationModifierGroup:(id /* block */)arg1;
- (void)_runAnimationBlocks;
- (void)_setAnimationExecutionParameters;
- (void)_setCurrentMediaTime:(double)arg1;
- (void)_setPerformScheduledBlocksManually:(bool)arg1;
- (void)addEntry:(id /* block */)arg1;
- (bool)advancingOnCommitDisabled;
- (bool)commitsSynchronously;
- (id)currentTickThread;
- (void)dealloc;
- (unsigned long long)executionMode;
- (void)finishAdvancingAnimationManager;
- (id)init;
- (bool)isWaitingForAnimatorAdvancerToStart;
- (void)performAfterTick:(id /* block */)arg1;
- (void)performBeforeExiting:(id /* block */)arg1;
- (void)performBeforeTick:(id /* block */)arg1;
- (bool)performScheduledBlocksManually;
- (double)refreshInterval;
- (void)scheduleAnimatorAdvancerToStart;
- (void)setAdvancingOnCommitDisabled:(bool)arg1;
- (void)setCommitsSynchronously:(bool)arg1;
- (void)setCurrentTickThread:(id)arg1;
- (void)setExecutionMode:(unsigned long long)arg1;
- (void)setUsesMainThreadExecution:(bool)arg1;
- (void)setWaitingForAnimatorAdvancerToStart:(bool)arg1;
- (void)startAdvancingAnimationManager:(id)arg1;
- (void)startAnimationAdvancerIfNeeded;
- (bool)usesMainThreadExecution;

@end
