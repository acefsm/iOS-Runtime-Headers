/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsVisibilityController : NSObject {
    double  _animationDuration;
    bool  _canHideViews;
    <AVPlaybackControlsVisibilityControllerDelegate> * _delegate;
    bool  _hidesViewQuicklyWhenPlaybackBegins;
    bool  _inAutoplayPhase;
    AVKeyValueObservationController * _keyValueObservationController;
    bool  _loadingIndicatorWasShownAndVisibilityNotToggledAfterLoadingIndicatorShown;
    bool  _pictureInPictureActive;
    bool  _playbackWasPausedAndVisibilityNotToggledAfterPausing;
    AVPlayerController * _playerController;
    bool  _popoverPresented;
    bool  _prefersRegularViewsVisible;
    NSTimer * _prefersRegularViewsVisibleTimer;
    bool  _prefersViewsShownForVolumeChangeVisible;
    NSTimer * _prefersViewsShownForVolumeChangeVisibleTimer;
    double  _prefersViewsShownForVolumeChangeVisibleTimerInterval;
    double  _prefersViewsVisibleTimerInterval;
    double  _prefersViewsVisibleTimerIntervalForQuicklyHiding;
    bool  _scrubbing;
    bool  _showsViewsWhileWaitingToPlay;
    bool  _statusBarAppearanceNeedsUpdate;
    bool  _temporarilyAvoidAnimationsWhenStartingToControlViewVisibility;
    bool  _transitionInProgress;
    AVUserInteractionObserverGestureRecognizer * _userInteractionObserverGestureRecognizer;
    UIView * _viewForUserInteractionObservation;
    NSMapTable * _viewsAndViewInfos;
    UIViewPropertyAnimator * _visibilityAnimator;
    bool  _visibilityNeedsUpdate;
}

@property double animationDuration;
@property (nonatomic) bool canHideViews;
@property <AVPlaybackControlsVisibilityControllerDelegate> *delegate;
@property double hideViewsQuicklyTimerInterval;
@property double hideViewsTimerInterval;
@property (getter=isPictureInPictureActive, nonatomic) bool pictureInPictureActive;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (getter=isPopoverPresented, nonatomic) bool popoverPresented;
@property (nonatomic, readonly) bool showsViewPreferingStatusBarVisible;
@property (nonatomic) bool showsViewsWhileWaitingToPlay;
@property (nonatomic) UIView *viewForUserInteractionObservation;
@property double volumeChangeHidePlaybackControlTimerInterval;

- (void).cxx_destruct;
- (void)_exitAutoplayPhaseIfNeeded;
- (void)_handleUserInteractionObservationRecognizer:(id)arg1;
- (bool)_hasViewsThatCanBeHidden;
- (bool)_hasViewsThatCanBeShown;
- (void)_hideRegularViews;
- (void)_hideViewsShownForVolumeChange;
- (void)_performForEachView:(id /* block */)arg1;
- (void)_setVisibilityNeedsUpdate;
- (void)_showRegularViews;
- (void)_showRegularViewsAndHideAfterDelay;
- (void)_showRegularViewsAndHideAfterDelayIfPlaying;
- (void)_showViewsShownForVolumeChange;
- (void)_showViewsShownForVolumeChangeAndHideAfterDelay;
- (void)_startControllingVisibilityIfNeeded;
- (void)_startTimerToHideRegularViews;
- (void)_startTimerToHideRegularViewsAfterDelay:(double)arg1 ifPlaying:(bool)arg2;
- (void)_startTimerToHideRegularViewsIfPlaying;
- (void)_startTimerToHideViewsShownForVolumeChange;
- (void)_stopInitiallyHidingViews;
- (void)_stopInitiallyHidingViewsThatAreShownForVolumeChanges;
- (void)_stopTimerToHideRegularControlsIfPlaying;
- (void)_stopTimerToHideViewsShownForVolumeChangeIfPlaying;
- (void)_updateControlViewVisibilityIfNeeded;
- (void)_updateVisibilityWithCompletionHandler:(id /* block */)arg1;
- (bool)_userIsInteractingWithViews;
- (id)_viewsPassingTest:(id /* block */)arg1;
- (void)activeAudioRouteOrSystemVolumeDidChange;
- (double)animationDuration;
- (void)beginTransitionAndHideViewsAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)canHideViews;
- (void)dealloc;
- (id)delegate;
- (void)endTransition;
- (void)enterAutoplayPhase;
- (void)flashAutoplayControls;
- (double)hideViewsQuicklyTimerInterval;
- (double)hideViewsTimerInterval;
- (id)init;
- (bool)isPictureInPictureActive;
- (bool)isPopoverPresented;
- (id)playerController;
- (void)setAnimationDuration:(double)arg1;
- (void)setCanHideViews:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideViewsQuicklyTimerInterval:(double)arg1;
- (void)setHideViewsTimerInterval:(double)arg1;
- (void)setPictureInPictureActive:(bool)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPopoverPresented:(bool)arg1;
- (void)setShowsViewsWhileWaitingToPlay:(bool)arg1;
- (void)setViewForUserInteractionObservation:(id)arg1;
- (void)setVolumeChangeHidePlaybackControlTimerInterval:(double)arg1;
- (bool)showsViewPreferingStatusBarVisible;
- (bool)showsViewsWhileWaitingToPlay;
- (void)startControllingVisibilityOfView:(id)arg1 visibilityBehaviorOptions:(long long)arg2;
- (void)startHidingViewQuicklyWhenPlaybackBegins;
- (void)stopControllingVisibilityOfView:(id)arg1;
- (void)stopHidingViewQuicklyWhenPlaybackBegins;
- (void)temporarilyAvoidAnimationsWhenStartingToControlViewVisibility;
- (void)toggleVisibility;
- (id)viewForUserInteractionObservation;
- (double)volumeChangeHidePlaybackControlTimerInterval;

@end
