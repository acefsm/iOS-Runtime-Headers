/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding> {
    NSURL * _brokerURL;
    NSArray * _certificates;
    long long  _consistencyCheckBackoffLevel;
    NSURL * _inAppPaymentServicesURL;
    NSString * _lastUpdatedTag;
    NSURL * _paymentServicesMerchantURL;
    NSURL * _paymentServicesURL;
    NSURL * _peerPaymentServiceURL;
    NSString * _trustedServiceManagerPushTopic;
    NSURL * _trustedServiceManagerURL;
    NSString * _userNotificationPushTopic;
}

@property (nonatomic, retain) NSURL *brokerURL;
@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic) long long consistencyCheckBackoffLevel;
@property (nonatomic, retain) NSURL *inAppPaymentServicesURL;
@property (nonatomic, retain) NSString *lastUpdatedTag;
@property (nonatomic, retain) NSURL *paymentServicesMerchantURL;
@property (nonatomic, retain) NSURL *paymentServicesURL;
@property (nonatomic, retain) NSURL *peerPaymentServiceURL;
@property (nonatomic, retain) NSString *trustedServiceManagerPushTopic;
@property (nonatomic, retain) NSURL *trustedServiceManagerURL;
@property (nonatomic, retain) NSString *userNotificationPushTopic;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)brokerURL;
- (id)certificates;
- (long long)consistencyCheckBackoffLevel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)inAppPaymentServicesURL;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedTag;
- (id)paymentServicesMerchantURL;
- (id)paymentServicesURL;
- (id)peerPaymentServiceURL;
- (void)setBrokerURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(long long)arg1;
- (void)setInAppPaymentServicesURL:(id)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setPaymentServicesMerchantURL:(id)arg1;
- (void)setPaymentServicesURL:(id)arg1;
- (void)setPeerPaymentServiceURL:(id)arg1;
- (void)setTrustedServiceManagerPushTopic:(id)arg1;
- (void)setTrustedServiceManagerURL:(id)arg1;
- (void)setUserNotificationPushTopic:(id)arg1;
- (id)trustedServiceManagerPushTopic;
- (id)trustedServiceManagerURL;
- (id)userNotificationPushTopic;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkPossiblyOverriddenPeerPaymentServiceURL;

@end
