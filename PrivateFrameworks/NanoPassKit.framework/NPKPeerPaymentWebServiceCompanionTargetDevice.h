/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    NPSDomainAccessor * _globalDomainAccessor;
    NPSManager * _preferencesSyncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NPSDomainAccessor *globalDomainAccessor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPSManager *preferencesSyncManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (id)bridgedClientInfo;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)globalDomainAccessor;
- (id)init;
- (id)preferencesSyncManager;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setGlobalDomainAccessor:(id)arg1;
- (void)setPreferencesSyncManager:(id)arg1;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (bool)userHasDisabledPeerPayment;

@end
