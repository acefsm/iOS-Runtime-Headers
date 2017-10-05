/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface> {
    PDCloudStoreNotificationCoordinator * _cloudStoreNotificationCoordinator;
    PKEntitlementWhitelist * _whitelist;
}

@property (nonatomic, retain) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (id)cloudStoreNotificationCoordinator;
- (void)fetchAndStoreRecordsForPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)resetContainerWithCompletion:(id /* block */)arg1;
- (void)setCloudStoreNotificationCoordinator:(id)arg1;
- (void)simulateCloudStorePushWithCompletion:(id /* block */)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(id /* block */)arg3;

@end