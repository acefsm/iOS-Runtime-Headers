/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetHandle : NSObject {
    NSString * _assetKey;
    unsigned long long  _countOfPenalizedDownloadAttempts;
    NSDate * _dateOfLastDownloadAttempt;
    <FCAssetHandleDelegate> * _delegate;
    NSError * _downloadError;
    NSHashTable * _downloadRequests;
    NSObject<OS_dispatch_group> * _fetchGroup;
    <FCOperationCanceling><FCOperationPrioritizing> * _fetchOperation;
    NSString * _filePath;
    FCInterestToken * _holdToken;
    long long  _lifetimeHint;
    NSURL * _remoteURL;
    FCMutexLock * _stateMutex;
}

@property (nonatomic, copy) NSString *assetKey;
@property unsigned long long countOfPenalizedDownloadAttempts;
@property (retain) NSDate *dateOfLastDownloadAttempt;
@property (nonatomic) <FCAssetHandleDelegate> *delegate;
@property (retain) NSError *downloadError;
@property (nonatomic, retain) NSHashTable *downloadRequests;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic, retain) <FCOperationCanceling><FCOperationPrioritizing> *fetchOperation;
@property (copy) NSString *filePath;
@property (nonatomic, retain) FCInterestToken *holdToken;
@property (nonatomic) long long lifetimeHint;
@property (nonatomic, retain) NSURL *remoteURL;
@property (nonatomic, retain) FCMutexLock *stateMutex;
@property (readonly) NSURL *streamingURL;
@property (readonly, copy) NSString *uniqueKey;

- (void).cxx_destruct;
- (bool)_canRetryDownload;
- (void)_completeFetchWithFilePath:(id)arg1 cancelled:(bool)arg2 error:(id)arg3;
- (void)_removeDownloadRequest:(id)arg1;
- (void)_revisitDownloadRequestPriorities;
- (id)assetKey;
- (unsigned long long)countOfPenalizedDownloadAttempts;
- (id)dateOfLastDownloadAttempt;
- (void)dealloc;
- (id)delegate;
- (id)downloadError;
- (id)downloadIfNeededWithCompletion:(id /* block */)arg1;
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadIfNeededWithGroup:(id)arg1;
- (id)downloadRequests;
- (id)fetchGroup;
- (id)fetchOperation;
- (id)filePath;
- (id)holdToken;
- (id)initWithFilePath:(id)arg1;
- (long long)lifetimeHint;
- (id)remoteURL;
- (void)setAssetKey:(id)arg1;
- (void)setCountOfPenalizedDownloadAttempts:(unsigned long long)arg1;
- (void)setDateOfLastDownloadAttempt:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadError:(id)arg1;
- (void)setDownloadRequests:(id)arg1;
- (void)setFetchGroup:(id)arg1;
- (void)setFetchOperation:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setHoldToken:(id)arg1;
- (void)setLifetimeHint:(long long)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setStateMutex:(id)arg1;
- (id)stateMutex;
- (id)streamingURL;
- (id)uniqueKey;

@end
