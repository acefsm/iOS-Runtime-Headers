/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSelectPassesViewControllerDelegate, RemoteUIControllerDelegate> {
    PKPeerPaymentCredential * _credential;
    UIImage * _passSnapShot;
    PKPeerPaymentWebService * _peerPaymentWebService;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    RemoteUIController * _termsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continuePressed;
- (void)_displayTermsWithCompletionHandler:(id /* block */)arg1;
- (bool)_isBuddyiPad;
- (void)_presentNextViewController;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_terminateFlow;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)selectPassesViewController:(id)arg1 didSelectPasses:(id)arg2 completion:(id /* block */)arg3;
- (void)viewDidLoad;

@end
