/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKEnrollPearlOperation : BKEnrollOperation {
    bool  _clientToComplete;
}

@property (nonatomic) bool clientToComplete;
@property (nonatomic) <BKEnrollPearlOperationDelegate> *delegate;

- (bool)clientToComplete;
- (bool)completeWithError:(id*)arg1;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (id)optionsDictionaryWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (void)setClientToComplete:(bool)arg1;
- (bool)startWithError:(id*)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (bool)suspendWithError:(id*)arg1;

@end
