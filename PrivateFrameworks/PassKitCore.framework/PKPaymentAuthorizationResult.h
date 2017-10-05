/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding> {
    NSArray * _errors;
    long long  _status;
}

@property (nonatomic, copy) NSArray *errors;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 errors:(id)arg2;
- (void)setErrors:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
