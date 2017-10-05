/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAuthenticationContext : NSObject <LAUIDelegate> {
    double  _authenticationGracePeriod;
    bool  _authenticationInvalidated;
    NSHashTable * _clients;
    NSMutableOrderedSet * _clientsAwaitingAuthentication;
    NSMapTable * _clientsAwaitingAuthenticationToCompletionBlocks;
    LAContext * _context;
    <_SFAuthenticationClient> * _currentClientBeingAuthenticated;
    <_SFAuthenticationContextDelegate> * _delegate;
    bool  _fingerDetectRequired;
    double  _lastApplicationBackgroundTime;
    double  _lastAuthenticatedSessionEndTime;
    double  _lastAuthenticatedSessionStartTime;
    bool  _matchFound;
    int  _notificationToken;
    unsigned long long  _numberOfBiometricAuthenticationFailures;
    bool  _ongoingAuthenticationCanceled;
    bool  _successfullyAuthenticated;
}

@property (nonatomic) <_SFAuthenticationContextDelegate> *delegate;
@property (nonatomic, readonly) bool needsAuthentication;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (bool)_biometricProtectionEnabled;
- (bool)_canInvalidateAuthentication;
- (void)_cancelOngoingAndPendingAuthentications;
- (void)_cancelOngoingAuthentication;
- (bool)_contextRequiresSessionBasedAuthentication;
- (void)_evaluatePolicyForClient:(id)arg1 reply:(id /* block */)arg2;
- (void)_handleTouchIDEventWithParameters:(id)arg1;
- (bool)_hasAuthenticationCapability;
- (void)_invalidateAuthentication;
- (bool)_monotonicTimeIsWithinAuthenticationGracePeriod:(double)arg1;
- (void)_processNextClientAwaitingAuthentication;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)authenticateForClient:(id)arg1 completion:(id /* block */)arg2;
- (bool)authenticateWithNoPromptForClient:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (void)invalidateClient:(id)arg1;
- (bool)needsAuthentication;
- (void)preemptOngoingAuthenticationWithPasccodeAuthentication;
- (void)setDelegate:(id)arg1;

@end
