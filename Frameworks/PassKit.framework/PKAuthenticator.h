/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAuthenticator : NSObject {
    unsigned int _authenticationIdentifier;
    PKAuthenticatorEvaluationContext *_context;
    NSObject<OS_dispatch_queue> *_contextMutationQueue;
    double _fingerPresentTimeout;
    PKWeakReference *_weakDelegate;
}

@property (nonatomic, readonly) unsigned int authenticationIdentifier;
@property (nonatomic) <PKAuthenticatorDelegate> *delegate;
@property (nonatomic, readonly) BOOL fingerPresent;
@property (nonatomic) double fingerPresentTimeout;
@property (nonatomic, readonly) BOOL fingerPresentTimeoutExpired;
@property (nonatomic, readonly) BOOL fingerPresentTimeoutRequired;

+ (unsigned int)currentStateForPolicy:(int)arg1;
+ (void)preheatAuthenticator;
+ (id)viewServiceBundleID;

- (id)_compareAndSwapWithCompareContext:(id)arg1 replacementContext:(id)arg2;
- (id)_context;
- (void)_contextChanged;
- (BOOL)_contextMatchesContext:(id)arg1;
- (BOOL)_delegateSupportsPasscodePresentation;
- (BOOL)_delegateSupportsPassphrasePresentation;
- (id)_swapContext:(id)arg1;
- (unsigned int)authenticationIdentifier;
- (void)cancelEvaluation;
- (void)dealloc;
- (id)delegate;
- (void)evaluatePolicy:(int)arg1 completion:(id /* block */)arg2;
- (void)evaluateRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fallbackToSystemPasscodeUI;
- (BOOL)fingerPresent;
- (double)fingerPresentTimeout;
- (BOOL)fingerPresentTimeoutExpired;
- (BOOL)fingerPresentTimeoutRequired;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)restartEvaluation;
- (void)setDelegate:(id)arg1;
- (void)setFingerPresentTimeout:(double)arg1;
- (void)setFingerPresentTimeout:(double)arg1 preventRestart:(BOOL)arg2;

@end