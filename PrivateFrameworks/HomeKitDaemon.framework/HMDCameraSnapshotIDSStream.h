/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSStream : HMFObject <HMFLogging, IDSServiceDelegate> {
    IDSService * _idsProxyService;
    HMDCameraSessionID * _sessionID;
    HMFOSTransaction * _snapshotStreamTransaction;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *idsProxyService;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (nonatomic, retain) HMFOSTransaction *snapshotStreamTransaction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)idsProxyService;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (id)sessionID;
- (void)setSnapshotStreamTransaction:(id)arg1;
- (id)snapshotStreamTransaction;
- (id)workQueue;

@end
