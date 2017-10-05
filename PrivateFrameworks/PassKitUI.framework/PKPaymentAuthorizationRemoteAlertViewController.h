/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationServiceViewControllerDelegate, PKPaymentSetupDelegate, SBSHardwareButtonEventConsuming> {
    bool  _didDismiss;
    bool  _didSendAuthorizationDidPresent;
    bool  _dismissAfterPaymentSetup;
    PKPaymentAuthorizationRemoteAlertViewControllerExportedObject * _exportedObject;
    long long  _hostAppInterfaceOrientation;
    NSString * _hostApplicationIdentifier;
    NSXPCConnection * _hostConnection;
    NSString * _hostLocalizedAppName;
    PKInAppPaymentService * _inAppPaymentService;
    bool  _isPerformingPaymentSetup;
    <BSInvalidatable> * _lockButtonObserver;
    PKCompactNavigationContainerController * _navigationContainer;
    PKPaymentAuthorizationServiceNavigationController * _navigationController;
    PKAssertion * _notificationSuppressionAssertion;
    bool  _paymentAuthorizationPresented;
    PKPaymentProvisioningController * _paymentProvisioningController;
    PKPaymentRequest * _paymentRequest;
    PKPaymentSetupNavigationController * _paymentSetupNavigationController;
    bool  _paymentSetupWasRequired;
    PKPhysicalButtonView * _physicalButtonView;
    bool  _shouldAcquireLockButtonObserver;
    int  _statusBarVisibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissAfterPaymentSetup;
@property (nonatomic, retain) PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *hostConnection;
@property (nonatomic, retain) PKInAppPaymentService *inAppPaymentService;
@property (nonatomic, readonly) bool isPerformingPaymentSetup;
@property (nonatomic, retain) PKPaymentRequest *paymentRequest;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_canPresentPaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_configuredPaymentSetupNavigationController;
- (void)_dismiss;
- (void)_handlePaymentRequestPresentationResultType:(long long)arg1 relevantUniqueID:(id)arg2 firstAttempt:(bool)arg3;
- (void)_invalidateLockButtonObserver;
- (int)_preferredStatusBarVisibility;
- (void)_presentActivatingPassAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentAddCardAlert;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionHandler:(id /* block */)arg4;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 actionTitle:(id)arg4 actionHandler:(id /* block */)arg5;
- (void)_presentInvalidAlert;
- (void)_presentLostModeAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)arg1;
- (void)_presentPaymentAuthorization;
- (void)_presentPaymentSetup;
- (void)_presentVerifyPassAlertWithRelevantUniqueID:(id)arg1;
- (id)_provisioningController;
- (id)_remoteObjectProxy;
- (void)_setStatusBarHidden:(bool)arg1;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_updatePhysicalButtonViewState;
- (void)_willAppearInRemoteViewController;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationViewControllerDidChangeUserIntentRequirement:(id)arg1;
- (void)authorizationWillStart;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (bool)dismissAfterPaymentSetup;
- (void)dismissWithRemoteOrigination:(bool)arg1;
- (id)exportedObject;
- (void)handleHomeButtonPressed;
- (id)hostConnection;
- (id)inAppPaymentService;
- (id)init;
- (bool)isPerformingPaymentSetup;
- (id)paymentRequest;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)sendAuthorizationDidPresentIfNecessary;
- (void)setDismissAfterPaymentSetup:(bool)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setHostConnection:(id)arg1;
- (void)setInAppPaymentService:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end