/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallController : NSObject {
    CXCallObserver * _callObserver;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSString * _extensionIdentifier;
}

@property (nonatomic, retain) CXCallObserver *callObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) NSString *extensionIdentifier;

- (void).cxx_destruct;
- (void)_requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (id)callObserver;
- (id)completionQueue;
- (id)extensionIdentifier;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTransactionWithAction:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTransactionWithActions:(id)arg1 completion:(id /* block */)arg2;
- (void)setCallObserver:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;

@end
