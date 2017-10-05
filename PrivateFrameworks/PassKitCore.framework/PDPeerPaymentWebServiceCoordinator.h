/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDPeerPaymentWebServiceCoordinator : NSObject <PDAssertionObserver, PDCloudStoreNotificationCoordinatorObserver, PDPushNotificationConsumer> {
    PKPeerPaymentAccount * _account;
    NSMutableArray * _accountCompletionHandlers;
    PDPeerPaymentWebServiceArchiver * _archiver;
    PDAssertionManager * _assertionManager;
    PDCloudStoreNotificationCoordinator * _cloudStoreNotificationCoordinator;
    <PDPeerPaymentWebServiceCoordinatorDataSource> * _dataSource;
    bool  _fetchingAccount;
    bool  _isRegistering;
    PKPeerPaymentAccount * _mockAccount;
    <PDWebServiceCoordinatorPassStore> * _passStore;
    PKPaymentWebService * _paymentWebService;
    PDPushNotificationManager * _pushNotificationManager;
    PKPeerPaymentWebService * _sharedPeerPaymentWebService;
    NSObject<OS_dispatch_queue> * _sharedPeerPaymentWebServiceQueue;
}

@property (nonatomic, retain) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;
@property (nonatomic, readonly) PKPeerPaymentWebService *sharedPeerPaymentWebService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_archiveSharedPeerPaymentWebServiceContextWithCloudStoreInitalization:(bool)arg1;
- (void)_completeUpdatingAccount;
- (void)_executeAccountCompletionHandlers;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (id)_mockAccountInitialState;
- (void)_registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceRegistration:(bool)arg3 completion:(id /* block */)arg4;
- (void)_registerWithPeerPaymentWebService:(id)arg1 registerURL:(id)arg2 pushToken:(id)arg3 completion:(id /* block */)arg4;
- (void)_updateAccountWithCompletion:(id /* block */)arg1;
- (void)_updateSharedCacheWithAccount:(id)arg1;
- (void)_updateSharedCacheWithWebService:(id)arg1;
- (void)accountWithCompletion:(id /* block */)arg1;
- (bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;
- (void)applyPushNotificationToken:(id)arg1;
- (id)cloudStoreNotificationCoordinator;
- (void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2;
- (void)dealloc;
- (void)deleteAccountWithCompletion:(id /* block */)arg1;
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)handleCompanionSerialNumberChanged;
- (void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4;
- (id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4 passStore:(id)arg5;
- (bool)interestedInAssertionOfType:(unsigned long long)arg1;
- (id)paymentWebService;
- (id)pushNotificationTopics;
- (void)registerDeviceWithCompletion:(id /* block */)arg1;
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registrationStatusWithCompletion:(id /* block */)arg1;
- (void)setCloudStoreNotificationCoordinator:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (id)sharedPeerPaymentWebService;
- (id)sharedWebService;
- (void)unregisterDeviceWithCompletion:(id /* block */)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSharedWebServiceContext:(id)arg1;

@end