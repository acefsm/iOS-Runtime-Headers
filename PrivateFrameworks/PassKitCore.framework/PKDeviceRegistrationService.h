/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDeviceRegistrationService : NSObject {
    bool  _isRegistering;
    PKAssertion * _registrationAssertion;
    PKXPCService * _remoteService;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_aquireAssertionWithCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)arg1;

@end
