/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncManager : NSObject <MTAgentDiagnosticDelegate, MTSyncService, MTSyncServiceDelegate> {
    <MTSyncDataModel><MTAgentDiagnosticDelegate> * _alarmSyncDataModel;
    <MTSyncService><MTAgentDiagnosticDelegate> * _internalSyncService;
    <NAScheduler> * _serializer;
    bool  _started;
    MTPairedSyncCoordinator * _syncCoordinator;
    MTMetrics * _syncMetrics;
}

@property (nonatomic, retain) <MTSyncDataModel><MTAgentDiagnosticDelegate> *alarmSyncDataModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTSyncService><MTAgentDiagnosticDelegate> *internalSyncService;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic) bool started;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTPairedSyncCoordinator *syncCoordinator;
@property (nonatomic, retain) MTMetrics *syncMetrics;

+ (id)_stringForMode:(long long)arg1;

- (void).cxx_destruct;
- (void)_performSyncOperation:(id)arg1;
- (id)alarmSyncDataModel;
- (id)initWithMode:(long long)arg1 alarmSyncDataModel:(id)arg2;
- (id)initWithMode:(long long)arg1 alarmSyncDataModel:(id)arg2 syncMetrics:(id)arg3;
- (id)internalSyncService;
- (void)performSyncOperation:(id)arg1;
- (void)printDiagnostics;
- (id)serializer;
- (void)service:(id)arg1 didBeginSyncOperation:(id)arg2;
- (void)service:(id)arg1 didCompleteSyncOperation:(id)arg2;
- (void)service:(id)arg1 didFailSyncOperation:(id)arg2 withError:(id)arg3;
- (void)service:(id)arg1 didRequestSyncOperation:(id)arg2;
- (void)service:(id)arg1 didScheduleRetryOfSyncOperation:(id)arg2 forError:(id)arg3;
- (void)setAlarmSyncDataModel:(id)arg1;
- (void)setInternalSyncService:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setSyncCoordinator:(id)arg1;
- (void)setSyncMetrics:(id)arg1;
- (void)setup;
- (void)start;
- (bool)started;
- (void)stop;
- (id)syncCoordinator;
- (id)syncMetrics;
- (void)teardown;

@end
