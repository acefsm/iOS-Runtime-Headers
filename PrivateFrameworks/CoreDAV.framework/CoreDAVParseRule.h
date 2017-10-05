/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVParseRule : NSObject {
    NSString * _elementName;
    long long  _maximumNumber;
    long long  _minimumNumber;
    NSString * _nameSpace;
    Class  _objectClass;
    SEL  _setterMethod;
}

@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) long long maximumNumber;
@property (nonatomic, readonly) long long minimumNumber;
@property (nonatomic, readonly) NSString *nameSpace;
@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly) SEL setterMethod;

+ (id)ruleWithMinimumNumber:(long long)arg1 maximumNumber:(long long)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;

- (void).cxx_destruct;
- (id)description;
- (id)elementName;
- (id)initWithMinimumNumber:(long long)arg1 maximumNumber:(long long)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6;
- (long long)maximumNumber;
- (long long)minimumNumber;
- (id)nameSpace;
- (Class)objectClass;
- (SEL)setterMethod;

@end
