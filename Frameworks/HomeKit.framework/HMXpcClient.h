/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXpcClient : HMFMessageTransport <HMXPCMessageTransport> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _connectionValid;
    int  _notifyRegisterToken;
    bool  _notifyRegistered;
    id /* block */  _reconnectionHandler;
    bool  _requiresCheckin;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) bool connectionValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) bool notifyRegistered;
@property (nonatomic, copy) id /* block */ reconnectionHandler;
@property (nonatomic) bool requiresCheckin;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)connection;
- (bool)connectionValid;
- (void)dealloc;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id /* block */)arg5;
- (id)init;
- (int)notifyRegisterToken;
- (bool)notifyRegistered;
- (void)recheckinIfRequired:(id)arg1;
- (id /* block */)reconnectionHandler;
- (void)registerReconnectionHandler:(id /* block */)arg1;
- (bool)requiresCheckin;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnectionValid:(bool)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setNotifyRegistered:(bool)arg1;
- (void)setReconnectionHandler:(id /* block */)arg1;
- (void)setRequiresCheckin:(bool)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
