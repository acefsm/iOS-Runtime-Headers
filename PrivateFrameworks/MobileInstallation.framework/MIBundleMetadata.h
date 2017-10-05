/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIBundleMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _installBuildVersion;
    NSDate * _installDate;
    unsigned long long  _installType;
    unsigned long long  _placeholderFailureReason;
    NSError * _placeholderFailureUnderlyingError;
    unsigned long long  _placeholderFailureUnderlyingErrorSource;
}

@property (nonatomic, copy) NSString *installBuildVersion;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) unsigned long long placeholderFailureReason;
@property (nonatomic, retain) NSError *placeholderFailureUnderlyingError;
@property (nonatomic) unsigned long long placeholderFailureUnderlyingErrorSource;

+ (id)metadataFromURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installBuildVersion;
- (id)installDate;
- (unsigned long long)installType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)placeholderFailureReason;
- (id)placeholderFailureUnderlyingError;
- (unsigned long long)placeholderFailureUnderlyingErrorSource;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (void)setInstallBuildVersion:(id)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setInstallType:(unsigned long long)arg1;
- (void)setPlaceholderFailureReason:(unsigned long long)arg1;
- (void)setPlaceholderFailureUnderlyingError:(id)arg1;
- (void)setPlaceholderFailureUnderlyingErrorSource:(unsigned long long)arg1;

@end
