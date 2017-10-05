/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPromotedIAPGetInfoInternalRequest : SKRequest {
    NSString * _bundleId;
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (void)_sendXPCMessage;
- (id)bundleId;
- (id /* block */)completionHandler;
- (id)initWithBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setBundleId:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
