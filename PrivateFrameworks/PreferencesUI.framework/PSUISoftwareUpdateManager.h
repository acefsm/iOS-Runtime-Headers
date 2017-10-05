/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISoftwareUpdateManager : NSObject <SUManagerClientDelegate, SUNetworkObserver> {
    SUManagerClient * _SUManager;
    NSString * _actionString;
    bool  _anyScanInProgress;
    SUAutoInstallOperation * _autoInstallOperation;
    bool  _connectedToPowerSource;
    <PSUISoftwareUpdateManagerDelegate> * _delegate;
    SUDownload * _download;
    SUMutableDownloadMetadata * _downloadMetadata;
    NSDateComponentsFormatter * _durationFormatter;
    UIViewController * _hostController;
    SUInstallPolicy * _installPolicy;
    bool  _manuallyStartedScan;
    int  _networkType;
    unsigned char  _originalCellFlag;
    unsigned char  _originalWifiFlag;
    double  _previousTimeRemaining;
    NSString * _progressString;
    bool  _readyToDownload;
    bool  _readyToResume;
    bool  _runningInitialScan;
    RUIStyle * _serverFlowStyle;
    int  _state;
    SUDescriptor * _update;
}

@property (nonatomic, readonly) SUManagerClient *SUManager;
@property (nonatomic, readonly) NSString *actionString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSUISoftwareUpdateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SUDownload *download;
@property (nonatomic, retain) SUMutableDownloadMetadata *downloadMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *hostController;
@property (nonatomic, retain) SUInstallPolicy *installPolicy;
@property (nonatomic, readonly) NSString *prettyUpdateName;
@property (nonatomic, readonly) NSString *progressString;
@property (nonatomic, retain) RUIStyle *serverFlowStyle;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) SUDescriptor *update;

- (void).cxx_destruct;
- (id)SUManager;
- (bool)_SUDownloadPhaseIsQueued:(id)arg1;
- (void)_alertForDownloadConstraintsWithCompletion:(id /* block */)arg1;
- (void)_batteryStateChanged:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (void)_notifyScanFailed:(id)arg1;
- (bool)_readyToDownloadWithError:(id*)arg1;
- (void)_reallyDownloadAndInstallAcceptingCellularFees:(bool)arg1 completion:(id /* block */)arg2;
- (void)_reallyResumeDownloadAcceptingCellularFees:(bool)arg1;
- (void)_setState:(int)arg1 error:(id)arg2;
- (void)_updateDownloadProgressWithDownload:(id)arg1 stateFromDownload:(int*)arg2;
- (id)actionString;
- (bool)canCancelAutoInstall;
- (void)cancelAutoInstall;
- (void)checkAndSetReadyToInstall;
- (void)checkAutoInstall;
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2 withInstallPolicy:(id)arg3;
- (void)client:(id)arg1 downloadDidStart:(id)arg2;
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 installDidStart:(id)arg2;
- (void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
- (void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)download;
- (id)downloadMetadata;
- (void)handleDownloadError:(id)arg1;
- (void)handleScanError:(id)arg1;
- (id)hostController;
- (id)humanReadableDescriptionForError:(id)arg1 enableButton:(bool*)arg2 showAsButtonFooter:(bool*)arg3;
- (id)initWithDelegate:(id)arg1 hostController:(id)arg2;
- (id)installPolicy;
- (Class)managerClientClass;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)presentTermsIfNecessaryCompletion:(id /* block */)arg1;
- (id)prettyNameForUpdate:(id)arg1;
- (id)prettyUpdateName;
- (id)progressString;
- (void)promptForDevicePasscodeCompletion:(id /* block */)arg1;
- (void)promptForDevicePasscodeForUnattendedInstall:(bool)arg1 completion:(id /* block */)arg2;
- (bool)readyToDownload;
- (bool)readyToResume;
- (void)refreshState;
- (void)resumeDownload;
- (void)runEntryScan;
- (void)scanFinishedWithUpdate:(id)arg1 error:(id)arg2;
- (void)scanForUpdateCompletion:(id /* block */)arg1;
- (id)serverFlowStyle;
- (void)setAutoInstall:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownload:(id)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setInstallPolicy:(id)arg1;
- (void)setServerFlowStyle:(id)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 error:(id)arg2;
- (void)setUpdate:(id)arg1;
- (bool)shouldSetStateForInstallError:(id)arg1 outError:(id*)arg2 outState:(int*)arg3;
- (void)startDownloadWithHandler:(id /* block */)arg1;
- (void)startInstallWithHandler:(id /* block */)arg1;
- (int)state;
- (id)update;
- (void)updateStateFromDownload:(id)arg1;

@end
