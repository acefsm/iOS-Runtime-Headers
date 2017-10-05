/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCControlsView : UIView {
    RCAVState * _AVState;
    UIColor * _bottomSeparatorLineColor;
    bool  _canEnableCaptureButton;
    bool  _canEnableDoneButton;
    bool  _canEnablePreviewButton;
    bool  _canRecord;
    long long  _controlsConfiguration;
    <RCControlsViewDelegate> * _delegate;
    UIButton * _doneButton;
    RCLayoutMetrics * _layoutMetrics;
    UIButton * _leftPlayStateButton;
    UIAlertController * _noMicAlertViewController;
    RCRecorderStateButton * _recordingStateButton;
    bool  _showsBottomSeparatorLine;
    double  _topPadding;
    NSLayoutConstraint * _topPaddingCn;
}

@property (nonatomic, copy) RCAVState *AVState;
@property (nonatomic, readonly) UIColor *bottomSeparatorLineColor;
@property (nonatomic) bool canEnableCaptureButton;
@property (nonatomic) bool canEnableDoneButton;
@property (nonatomic) bool canEnablePreviewButton;
@property (nonatomic) bool canRecord;
@property (nonatomic) long long controlsConfiguration;
@property (nonatomic) <RCControlsViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic, retain) RCLayoutMetrics *layoutMetrics;
@property (nonatomic, readonly) UIButton *leftPlayStateButton;
@property (nonatomic, readonly) UIAlertController *noMicAlertViewController;
@property (nonatomic, readonly) RCRecorderStateButton *recordingStateButton;
@property (nonatomic) bool showsBottomSeparatorLine;
@property (nonatomic) double topPadding;
@property (nonatomic, readonly) NSLayoutConstraint *topPaddingCn;

- (void).cxx_destruct;
- (id)AVState;
- (long long)_AVCaptureState;
- (long long)_AVPreviewState;
- (void)_contentSizeDidChangeNotification:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_inputAvailabilityDidChangeNotification:(id)arg1;
- (bool)_isCaptureButtonEnabled;
- (bool)_isPreviewButtonEnabled;
- (bool)_isRecordingOrPausedRecording;
- (id)_leftPlayStateImageForAVPreviewState:(long long)arg1;
- (void)_playStateButtonPressed:(id)arg1;
- (id)_recordButton;
- (void)_recordingStateButtonPressed:(id)arg1;
- (void)_updateButtonsAnimated:(bool)arg1;
- (id)bottomSeparatorLineColor;
- (bool)canEnableCaptureButton;
- (bool)canEnableDoneButton;
- (bool)canEnablePreviewButton;
- (bool)canRecord;
- (long long)controlsConfiguration;
- (id)delegate;
- (id)doneButton;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)layoutMetrics;
- (id)leftPlayStateButton;
- (id)noMicAlertViewController;
- (void)performFailedToStartRecordingActions;
- (void)performRecordButtonPress;
- (id)recordingStateButton;
- (void)setAVState:(id)arg1;
- (void)setButtonFontForUISize:(id)arg1;
- (void)setCanEnableCaptureButton:(bool)arg1;
- (void)setCanEnableDoneButton:(bool)arg1;
- (void)setCanEnablePreviewButton:(bool)arg1;
- (void)setCanRecord:(bool)arg1;
- (void)setControlsConfiguration:(long long)arg1;
- (void)setControlsConfiguration:(long long)arg1 animate:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMetrics:(id)arg1;
- (void)setShowsBottomSeparatorLine:(bool)arg1;
- (void)setTopPadding:(double)arg1;
- (bool)showsBottomSeparatorLine;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topPadding;
- (id)topPaddingCn;
- (void)updateConstraints;

@end
