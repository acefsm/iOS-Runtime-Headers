/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse {
    NSString * _requestToken;
    bool  _success;
}

@property (nonatomic, readonly, copy) NSString *requestToken;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)requestToken;
- (bool)success;

@end
