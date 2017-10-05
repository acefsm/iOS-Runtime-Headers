/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTask : NSObject <FCOperationPrioritizing, NSCopying, NSProgressReporting> {
    bool  __extractorFinishedDecoding;
    bool  __extractorPreparedForExtraction;
    double  __loadingPriority;
    double  __timeoutIntervalForResource;
    float  _priority;
}

@property (copy) NSDictionary *_DuetActivityProperties;
@property (copy) NSData *_TCPConnectionMetadata;
@property unsigned long long _allowedProtocolTypes;
@property bool _allowsCellular;
@property (nonatomic) bool _allowsQUIC;
@property (setter=_setAppleIDContext:, copy) <NSURLSessionAppleIDContext> *_appleIDContext;
@property bool _authenticatorConfiguredViaTaskProperty;
@property (nonatomic, retain) NSURL *_backgroundPublishingURL;
@property (nonatomic, copy) NSDictionary *_backgroundTaskTimingData;
@property (copy) NSString *_boundInterfaceIdentifier;
@property long long _bytesPerSecondLimit;
@property bool _cacheOnly;
@property int _cachePolicy;
@property (retain) struct _CFURLCache { }*_cfCache;
@property (retain) struct OpaqueCFHTTPCookieStorage { }*_cfCookies;
@property (retain) struct _CFURLCredentialStorage { }*_cfCreds;
@property (retain) struct _CFHSTSPolicy { }*_cfHSTS;
@property (setter=_setConnectionIsCellular:) bool _connectionIsCellular;
@property (copy) NSArray *_contentDispositionFallbackArray;
@property int _cookieAcceptPolicy;
@property long long _countOfBytesReceivedEncoded;
@property long long _countOfPendingBytesReceivedEncoded;
@property (retain) struct _CFURLRequest { }*_currentCFURLRequest;
@property unsigned int _darkWakePowerAssertion;
@property (nonatomic, retain) NSDictionary *_dependencyInfo;
@property bool _disallowCellular;
@property long long _expectedWorkload;
@property (nonatomic, retain) <SZExtractor> *_extractor;
@property bool _extractorFinishedDecoding;
@property bool _extractorPreparedForExtraction;
@property (nonatomic, retain) NSURLSessionTaskMetrics *_incompleteTaskMetrics;
@property (nonatomic, readonly) bool _isAVAssetTask;
@property (copy) NSURL *_ledBellyFallbackURL;
@property (copy) NSString *_ledBellyServiceIdentifier;
@property (copy) NSDictionary *_legacySocketStreamProperties;
@property double _loadingPriority;
@property double _loadingPriorityValue;
@property int _networkServiceType;
@property (copy) NSString *_pathToDownloadTaskFile;
@property (nonatomic, retain) struct __PerformanceTiming { }*_performanceTiming;
@property unsigned int _powerAssertion;
@property (nonatomic) bool _preconnect;
@property bool _preventsIdleSystemSleep;
@property bool _preventsSystemHTTPProxyAuthentication;
@property long long _priority;
@property long long _priorityValue;
@property bool _prohibitAuthUI;
@property (nonatomic) id _protocolForTask;
@property (copy) NSDictionary *_proxySettings;
@property (nonatomic, retain) NSURL *_publishingURL;
@property long long _requestPriority;
@property bool _shouldHandleCookies;
@property bool _shouldPipelineHTTP;
@property (nonatomic) bool _shouldReportTimingDataToAWD;
@property bool _shouldSkipPipelineProbe;
@property bool _shouldSkipPreferredClientCertificateLookup;
@property bool _shouldUsePipelineHeuristics;
@property (copy) NSDictionary *_sslSettings;
@property (copy) NSString *_storagePartitionIdentifier;
@property bool _strictContentLength;
@property long long _suspensionThreshhold;
@property double _timeWindowDelay;
@property double _timeWindowDuration;
@property double _timeoutInterval;
@property double _timeoutIntervalForResource;
@property (nonatomic, retain) NSDictionary *_trailers;
@property (copy) NSString *_uniqueIdentifier;
@property (copy) NSURLSessionTaskHTTPAuthenticator *authenticator;
@property long long countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property (copy) NSURLRequest *currentRequest;
@property (readonly, retain) NSURL *currentRequest_URL;
@property (readonly, retain) NSURL *currentRequest_mainDocumentURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURLSessionTaskDependencyTree *dependencyTree;
@property (readonly, copy) NSString *description;
@property (copy) NSDate *earliestBeginDate;
@property (copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (copy) NSURLRequest *originalRequest;
@property float priority;
@property (readonly) NSProgress *progress;
@property (nonatomic) long long relativePriority;
@property (copy) NSURLResponse *response;
@property (retain) NSURLSession *session;
@property double startTime;
@property long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionTaskDependency *taskDependency;
@property (copy) NSString *taskDescription;
@property unsigned long long taskIdentifier;
@property (readonly, retain) NSObject<OS_dispatch_queue> *workQueue;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)taskForWrappedRequest:(id)arg1;

- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (void)_completeUploadProgress;
- (void)_consumePendingBytesReceivedEncoded;
- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (bool)_extractorFinishedDecoding;
- (bool)_extractorPreparedForExtraction;
- (void)_finishProgressReporting;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (bool)_isAVAssetTask;
- (double)_loadingPriority;
- (id)_loggableDescription;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_releasePowerAsssertion;
- (void)_prepareNewTimingDataContainer;
- (void)_setBytesPerSecondLimit:(long long)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (double)_timeoutIntervalForResource;
- (id)_transactionMetrics;
- (void)cancel;
- (long long)computeAdjustedPoolPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;
- (float)priority;
- (void)resume;
- (void)setPriority:(float)arg1;
- (void)set_extractorFinishedDecoding:(bool)arg1;
- (void)set_extractorPreparedForExtraction:(bool)arg1;
- (void)set_loadingPriority:(double)arg1;
- (void)set_timeoutIntervalForResource:(double)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)suspend;
- (void)updateCurrentRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;

@end
