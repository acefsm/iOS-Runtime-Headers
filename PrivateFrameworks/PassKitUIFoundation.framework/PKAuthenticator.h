/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKAuthenticator : NSObject {
    bool  _acquiringHintSupressionAssertion;
    unsigned long long  _authenticationIdentifier;
    PKAuthenticatorEvaluationContext * _context;
    NSObject<OS_dispatch_queue> * _contextMutationQueue;
    <PKAuthenticatorDelegate> * _delegate;
    double  _fingerPresentTimeout;
    <BSInvalidatable> * _hintSupressionAssertion;
}

@property (nonatomic, readonly) unsigned long long authenticationIdentifier;
@property (nonatomic) <PKAuthenticatorDelegate> *delegate;
@property (nonatomic, readonly) bool fingerPresent;
@property (nonatomic) double fingerPresentTimeout;
@property (nonatomic, readonly) bool fingerPresentTimeoutExpired;
@property (nonatomic, readonly) bool fingerPresentTimeoutRequired;
@property (nonatomic, readonly) bool passcodeActive;
@property (nonatomic, readonly) bool passcodeWasPresented;
@property (nonatomic, readonly) bool passphraseActive;
@property (nonatomic, readonly) bool userIntentAvailable;

+ (unsigned long long)_currentStateForMechanisms:(id)arg1;
+ (unsigned long long)cachedStateForPolicy:(long long)arg1;
+ (unsigned long long)currentStateForAccessControl:(struct __SecAccessControl { }*)arg1;
+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (bool)isUserIntentAvailable;
+ (void)preheatAuthenticator;
+ (void)removeUserIntentAvailable;
+ (void)resetSharedRootContextWithCompletion:(id /* block */)arg1;
+ (id)viewServiceBundleID;

- (void).cxx_destruct;
- (id)_compareAndSwapWithCompareContext:(id)arg1 replacementContext:(id)arg2;
- (id)_context;
- (void)_contextChanged;
- (bool)_contextMatchesContext:(id)arg1;
- (bool)_delegateSupportsPasscodePresentation;
- (bool)_delegateSupportsPassphrasePresentation;
- (id)_swapContext:(id)arg1;
- (void)accessExternalizedContextWithCompletion:(id /* block */)arg1;
- (unsigned long long)authenticationIdentifier;
- (void)cancelEvaluation;
- (void)dealloc;
- (id)delegate;
- (void)evaluatePolicy:(long long)arg1 completion:(id /* block */)arg2;
- (void)evaluateRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fallbackToSystemPasscodeUI;
- (bool)fingerPresent;
- (double)fingerPresentTimeout;
- (bool)fingerPresentTimeoutExpired;
- (bool)fingerPresentTimeoutRequired;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)passcodeActive;
- (bool)passcodeWasPresented;
- (bool)passphraseActive;
- (void)restartEvaluation;
- (void)setDelegate:(id)arg1;
- (void)setFingerPresentTimeout:(double)arg1;
- (void)setFingerPresentTimeout:(double)arg1 preventRestart:(bool)arg2;
- (bool)userIntentAvailable;

@end
