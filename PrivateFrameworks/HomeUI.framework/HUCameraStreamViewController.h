/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraStreamViewController : UIViewController <HFItemManagerDelegate, HUItemPresentationContainer, HUPresentationDelegate, HUPresentationDelegateHost, PGPictureInPictureProxyDelegate> {
    bool  _barsHidden;
    HFCameraAudioManager * _cameraAudioManager;
    HUCameraStreamContentViewController * _cameraStreamContentViewController;
    <HUCameraStreamViewControllerDelegate> * _delegate;
    HFItemManager * _itemManager;
    UIViewController * _lastPresentingViewController;
    UIBarButtonItem * _microphoneBarButtonItem;
    HUCameraMicrophoneButton * _microphoneButton;
    NSArray * _microphoneButtonConstraints;
    bool  _navigationControllerSetup;
    PGPictureInPictureProxy * _pipProxy;
    <HUPresentationDelegate> * _presentationDelegate;
    UIBarButtonItem * _volumeBarButtonItem;
    MPVolumeSlider * _volumeSlider;
    NSArray * _volumeSliderConstraints;
}

@property (getter=areBarsHidden, nonatomic) bool barsHidden;
@property (nonatomic, retain) HFCameraAudioManager *cameraAudioManager;
@property (nonatomic, readonly) HFCameraItem *cameraItem;
@property (nonatomic, readonly) HUCameraStreamContentViewController *cameraStreamContentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCameraStreamViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItem *hu_presentedItem;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic) UIViewController *lastPresentingViewController;
@property (nonatomic, retain) UIBarButtonItem *microphoneBarButtonItem;
@property (nonatomic, retain) HUCameraMicrophoneButton *microphoneButton;
@property (nonatomic, retain) NSArray *microphoneButtonConstraints;
@property (getter=isNavigationControllerSetup, nonatomic) bool navigationControllerSetup;
@property (nonatomic, retain) PGPictureInPictureProxy *pipProxy;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewAppearanceState;
@property (nonatomic, retain) UIBarButtonItem *volumeBarButtonItem;
@property (nonatomic, retain) MPVolumeSlider *volumeSlider;
@property (nonatomic, retain) NSArray *volumeSliderConstraints;

- (void).cxx_destruct;
- (void)_attachCameraStreamViewController;
- (id)_barBackgroundView;
- (id)_cameraProfile;
- (void)_detailsButtonPressed;
- (void)_doneButtonPressed;
- (void)_handleApplicationDidBecomeActiveNotification;
- (void)_handleBarHideTapGesture:(id)arg1;
- (void)_microphoneButtonPressed;
- (void)_presentCameraDetailsWithViewController:(id)arg1;
- (void)_setupNavigationController;
- (unsigned long long)_streamState;
- (void)_updateCameraAudioManager;
- (void)_updateMicrophoneButton;
- (void)_updateNavigationItemTitle;
- (bool)areBarsHidden;
- (id)cameraAudioManager;
- (id)cameraItem;
- (id)cameraStreamContentViewController;
- (id)delegate;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)hu_presentedItem;
- (id)initWithCameraItem:(id)arg1;
- (bool)isNavigationControllerSetup;
- (id)itemManager;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)lastPresentingViewController;
- (id)microphoneBarButtonItem;
- (id)microphoneButton;
- (id)microphoneButtonConstraints;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (id)pipProxy;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (id)presentationDelegate;
- (id)previewActionItems;
- (void)setBarsHidden:(bool)arg1;
- (void)setCameraAudioManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastPresentingViewController:(id)arg1;
- (void)setMicrophoneBarButtonItem:(id)arg1;
- (void)setMicrophoneButton:(id)arg1;
- (void)setMicrophoneButtonConstraints:(id)arg1;
- (void)setNavigationControllerSetup:(bool)arg1;
- (void)setPipProxy:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setViewAppearanceState:(unsigned long long)arg1;
- (void)setVolumeBarButtonItem:(id)arg1;
- (void)setVolumeSlider:(id)arg1;
- (void)setVolumeSliderConstraints:(id)arg1;
- (unsigned long long)viewAppearanceState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)volumeBarButtonItem;
- (id)volumeSlider;
- (id)volumeSliderConstraints;

@end
