/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudSyncManagerCachedFetchResult : NSObject {
    <MSPCloudAccess> * _access;
    NSArray * _clientRegistrationRecords;
    NSDictionary * _cloudRecordsByIdentifier;
    NSArray * _deletedRecordNames;
    <MSPCloudRecord> * _registrationRecordForCurrentClient;
    NSDictionary * _replicaRecords;
    MSPCloudRepeatableTask * _task;
}

@property (retain) <MSPCloudAccess> *access;
@property (copy) NSArray *clientRegistrationRecords;
@property (copy) NSDictionary *cloudRecordsByIdentifier;
@property (copy) NSArray *deletedRecordNames;
@property (retain) <MSPCloudRecord> *registrationRecordForCurrentClient;
@property (copy) NSDictionary *replicaRecords;
@property (retain) MSPCloudRepeatableTask *task;

- (void).cxx_destruct;
- (id)access;
- (id)clientRegistrationRecords;
- (id)cloudRecordsByIdentifier;
- (id)deletedRecordNames;
- (id)registrationRecordForCurrentClient;
- (id)replicaRecords;
- (void)setAccess:(id)arg1;
- (void)setClientRegistrationRecords:(id)arg1;
- (void)setCloudRecordsByIdentifier:(id)arg1;
- (void)setDeletedRecordNames:(id)arg1;
- (void)setRegistrationRecordForCurrentClient:(id)arg1;
- (void)setReplicaRecords:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
