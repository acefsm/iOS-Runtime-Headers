/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSourceRevision : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    NSString * _productType;
    HKSource * _source;
    NSString * _version;
}

@property (readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (readonly, copy) NSString *productType;
@property (readonly) HKSource *source;
@property (readonly) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithSource:(id)arg1;
- (void)_setSource:(id)arg1;
- (void)_setVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 version:(id)arg2;
- (id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg4;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)productType;
- (id)source;
- (id)version;

@end
