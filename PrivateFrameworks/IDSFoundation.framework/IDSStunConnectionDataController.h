/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSStunConnectionDataController : NSObject {
    NSMutableDictionary * _tokenToConnectionData;
    NSMutableDictionary * _tokenToDeliveryStatus;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)candidatesFromData:(id)arg1 token:(id)arg2;
- (id)dataFromCandidates:(id)arg1 token:(id)arg2;
- (unsigned long long)deliveryStatus:(id)arg1;
- (void)removeData:(id)arg1;
- (void)setDeliveryStatus:(id)arg1 status:(unsigned long long)arg2;

@end
