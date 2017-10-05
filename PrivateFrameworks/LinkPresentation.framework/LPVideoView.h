/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoView : LPComponentView <CALayerDelegate, LPMediaPlayer, UIGestureRecognizerDelegate> {
    LPVideoViewConfiguration * _configuration;
    UIView * _containerView;
    CATextLayer * _debugIndicator;
    bool  _fullScreen;
    LPFullScreenVideoViewController * _fullScreenViewController;
    UIWindow * _fullScreenWindow;
    bool  _hasBuilt;
    bool  _hasEverPlayed;
    unsigned long long  _lastInteractionTimestamp;
    unsigned int  _loggingID;
    UIView * _muteButtonContainerView;
    UIImageView * _muteButtonView;
    UIView * _playButtonContainerView;
    UIView * _playButtonView;
    LPStatisticsTimingToken * _playbackDelayTimingToken;
    UIView * _playbackView;
    unsigned long long  _playbackWatchdogTimerID;
    bool  _playing;
    LPImage * _posterFrame;
    LPImageViewStyle * _posterFrameStyle;
    UIView * _pulsingLoadView;
    bool  _showingPlayButton;
    LPVideoViewStyle * _style;
    bool  _usesSharedAudioSession;
    LPVideo * _video;
    UIView * _videoPlaceholderView;
    UIView * _visualEffectView;
    double  _volume;
    bool  _waitingForPlayback;
    bool  _waitingForPlaybackDueToAutoplay;
    bool  _wasPlayingOrWaitingToPlayWhenUnparented;
    bool  _wasPlayingWhenSuspended;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly, copy) LPVideoViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (nonatomic) bool hasEverPlayed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long lastInteractionTimestamp;
@property (nonatomic, readonly) unsigned int loggingID;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, readonly) UIView *playbackView;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, readonly) bool shouldAutoPlay;
@property (nonatomic, readonly) bool shouldShowMuteButton;
@property (nonatomic, readonly) bool shouldUnmuteWhenUserAdjustsVolume;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double unobscuredAreaFraction;
@property (nonatomic, readonly) bool usesSharedAudioSession;
@property (nonatomic, readonly) LPVideo *video;
@property (nonatomic) double volume;
@property (getter=isWaitingForPlayback, nonatomic) bool waitingForPlayback;

- (void).cxx_destruct;
- (void)_buildVideoPlaceholderView;
- (id)_createPosterFrameView;
- (id)_createPulsingLoadIndicator;
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;
- (void)_muteButtonTapRecognized:(id)arg1;
- (void)_startPlaybackWatchdogTimer;
- (void)_swapVideoPlaceholderForVideoForAutoPlay:(bool)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)componentViewDidMoveToWindow;
- (id)configuration;
- (id)createFullScreenVideoViewController;
- (id)createVideoPlayerView;
- (void)dealloc;
- (void)destroyFullScreenViewController;
- (void)didChangeMutedState:(bool)arg1;
- (void)didChangePlayingState:(bool)arg1;
- (void)didEncounterPlaybackError;
- (void)enterCustomFullScreen;
- (void)enterFullScreen;
- (void)fadeInMuteButton;
- (id)fullScreenBackgroundColor;
- (void)fullScreenVideoDidDismiss;
- (void)fullScreenVideoDidPresent;
- (void)fullScreenVideoWillDismiss;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hasEverPlayed;
- (void)hideMuteButton;
- (void)hidePlayButtonAnimated:(bool)arg1;
- (id)init;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (bool)isActive;
- (bool)isFullScreen;
- (bool)isMuted;
- (bool)isParented;
- (bool)isPlaying;
- (bool)isWaitingForPlayback;
- (unsigned long long)lastInteractionTimestamp;
- (void)layoutComponentView;
- (unsigned int)loggingID;
- (id)playbackView;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)recreateFullScreenViewControllerIfNeeded;
- (void)removePlaceholderViews;
- (void)resetToPlaceholderView;
- (void)setActive:(bool)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setHasEverPlayed:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setVolume:(double)arg1;
- (void)setWaitingForPlayback:(bool)arg1;
- (bool)shouldAutoPlay;
- (bool)shouldShowMuteButton;
- (bool)shouldUnmuteWhenUserAdjustsVolume;
- (void)showMuteButton;
- (void)showPlayButtonAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tapRecognized:(id)arg1;
- (double)unobscuredAreaFraction;
- (void)updateMuteButtonImage;
- (void)updatePlayButtonVisibility;
- (void)userInteractedWithVideoView;
- (bool)usesCustomFullScreenImplementation;
- (bool)usesSharedAudioSession;
- (id)video;
- (double)volume;

@end
