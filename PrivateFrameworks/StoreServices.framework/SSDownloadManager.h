/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _activeDownloads;
    bool  _activeDownloadsChanged;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    SSXPCConnection * _connection;
    NSArray * _downloads;
    bool  _downloadsChanged;
    bool  _isUsingNetwork;
    int  _launchNotificationToken;
    SSXPCConnection * _observerConnection;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    SSDownloadManagerOptions * _options;
    NSMutableSet * _removedDownloads;
}

@property (readonly) NSArray *activeDownloads;
@property (readonly) NSArray *downloads;
@property (readonly) SSDownloadManagerOptions *managerOptions;
@property (getter=isUsingNetwork, readonly) bool usingNetwork;

+ (id)EBookDownloadKinds;
+ (id)EBookDownloadManager;
+ (id)IPodDownloadKinds;
+ (id)IPodDownloadManager;
+ (id)ITunesDownloadKinds;
+ (void)_sendGlobalHandler:(id)arg1;
+ (void)_triggerDownloads;
+ (id)allStoreDownloadKinds;
+ (void)reconnectToLSApplicationWorkspace;
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg1;
+ (void)removePersistenceIdentifier:(id)arg1;
+ (void)retryAllRestoreDownloads;
+ (void)setDownloadHandler:(id)arg1;
+ (id)softwareDownloadKinds;
+ (id)softwareDownloadManager;

- (void).cxx_destruct;
- (id)_XPCConnection;
- (void)_connectAfterDaemonLaunch;
- (void)_connectAsObserver;
- (id)_copyDownloadKindsUsingNetwork;
- (id)_copyDownloads;
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;
- (void)_finishDownloads:(id)arg1;
- (void)_handleDownloadKindsUsingNetworkChanged:(id)arg1;
- (void)_handleDownloadStatesChanged:(id)arg1;
- (void)_handleDownloadsChanged:(id)arg1;
- (void)_handleDownloadsRemoved:(id)arg1;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_handleReply:(id)arg1 forDownloads:(id)arg2 message:(id)arg3 isRetry:(bool)arg4 block:(id /* block */)arg5;
- (id)_initSSDownloadManagerWithOptions:(id)arg1;
- (void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_loadDownloadKindsUsingNetwork;
- (void)_moveDownload:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)_newOptionsDictionary;
- (void)_pauseDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_pauseDownloads:(id)arg1 forced:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_reloadIsUsingNetworkWithDownloadKinds:(id)arg1;
- (void)_resetAllDownloads;
- (void)_sendDownloadsChanged:(id)arg1;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_sendMessageToObservers:(SEL)arg1;
- (void)_sendObserverConnection;
- (bool)_supportsSoftwareKind;
- (void)_willFinishDownloads:(id)arg1;
- (id)activeDownloads;
- (void)addDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (bool)canCancelDownload:(id)arg1;
- (void)cancelAllDownloadsWithCompletionBlock:(id /* block */)arg1;
- (void)cancelDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)downloads;
- (void)finishDownloads:(id)arg1;
- (void)getDownloadsUsingBlock:(id /* block */)arg1;
- (id)initWithDownloadKinds:(id)arg1;
- (id)initWithManagerOptions:(id)arg1;
- (void)insertDownloads:(id)arg1 afterDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)insertDownloads:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)isUsingNetwork;
- (id)managerOptions;
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)pauseDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)reloadFromServer;
- (void)removeObserver:(id)arg1;
- (void)restartDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resumeDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(id /* block */)arg3;

@end
