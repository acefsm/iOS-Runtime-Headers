/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFWiFiStateMonitor : NSObject {
    bool  _associatedToCarPlayOnly;
    WFClient * _client;
    WFNetworkScanRecord * _currentNetwork;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _internalQueue;
    WFLinkQuality * _linkQuality;
    bool  _monitoring;
    long long  _state;
}

@property bool associatedToCarPlayOnly;
@property (nonatomic, retain) WFClient *client;
@property (nonatomic, retain) WFNetworkScanRecord *currentNetwork;
@property (copy) id /* block */ handler;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) WFLinkQuality *linkQuality;
@property bool monitoring;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_autoJoinStateChanged:(id)arg1;
- (void)_clientConnectionRestarted:(id)arg1;
- (void)_hostAPStateChanged:(id)arg1;
- (void)_interfaceBecameAvailable:(id)arg1;
- (void)_linkDidChange:(id)arg1;
- (void)_linkQualityDidChange:(id)arg1;
- (void)_notifyStateChanged:(long long)arg1 newState:(long long)arg2;
- (void)_powerStateDidChange:(id)arg1;
- (void)_updateState;
- (void)_updateState:(id /* block */)arg1;
- (bool)associatedToCarPlayOnly;
- (id)client;
- (id)currentNetwork;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (id)initWithClient:(id)arg1 handler:(id /* block */)arg2;
- (id)internalQueue;
- (id)linkQuality;
- (bool)monitoring;
- (void)setAssociatedToCarPlayOnly:(bool)arg1;
- (void)setClient:(id)arg1;
- (void)setCurrentNetwork:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setLinkQuality:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)startMonitoring;
- (long long)state;
- (void)stopMonitoring;

@end
