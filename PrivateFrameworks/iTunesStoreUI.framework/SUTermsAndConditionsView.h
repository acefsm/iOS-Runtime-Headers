/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTermsAndConditionsView : UIView {
    SUSubtitledButton * _button;
    SUClientInterface * _clientInterface;
    <SUTermsAndConditionsViewDelegate> * _delegate;
    bool  _hideAccountButton;
    double  _rightMargin;
    long long  _style;
    SULinkControl * _termsAndConditionsControl;
}

@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (nonatomic) <SUTermsAndConditionsViewDelegate> *delegate;
@property (nonatomic) bool hideAccountButton;
@property (nonatomic) double rightMargin;
@property (nonatomic) long long style;

- (void)_accountsChangedNotification:(id)arg1;
- (id)_button;
- (void)_buttonAction:(id)arg1;
- (double)_buttonHeightForStyle:(long long)arg1;
- (void)_clearButtonSelection:(id)arg1;
- (void)_destroyButton;
- (long long)_linkStyleForStyle:(long long)arg1;
- (void)_termsAndConditionsAction:(id)arg1;
- (id)_termsAndConditionsControl;
- (void)_updateButton;
- (id)clientInterface;
- (void)dealloc;
- (id)delegate;
- (bool)hideAccountButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)rightMargin;
- (void)setClientInterface:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideAccountButton:(bool)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)sizeToFit;
- (long long)style;

@end
