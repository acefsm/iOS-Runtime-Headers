/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BYFollowUpTouchIDController : NSObject <BFFPasscodeViewControllerDelegate, BYFollowUpFlowControlling, UIPopoverPresentationControllerDelegate> {
    id /* block */  _completion;
    NSString * _passcode;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *passcode;
@property (readonly) Class superclass;

+ (id)followUpTouchIDController;

- (void).cxx_destruct;
- (void)_userDidTapPasscodeCancelButton:(id)arg1;
- (id /* block */)completion;
- (id)passcode;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (bool)passcodeViewControllerAllowSkip:(id)arg1;
- (id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)preconditionViewControllerWithCompletion:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPasscode:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
