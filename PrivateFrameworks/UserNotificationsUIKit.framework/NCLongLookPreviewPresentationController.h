/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLongLookPreviewPresentationController : UIPreviewPresentationController <NCLongLookPresentationController> {
    <NCLongLookPresentationControllerDelegate> * _longLookPresentationControllerDelegate;
    NCLongLookPresentationControllerHelper * _presentationControllerHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NCLongLookPresentationControllerDelegate> *longLookPresentationControllerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldMakePresentedViewControllerFirstResponder;
- (void)completeDismissal;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (void)longLookAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (id)longLookPresentationControllerDelegate;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)setLongLookPresentationControllerDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
