/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDescription : NSObject {
    void * _cfType;
    Class  _class;
    bool  _commaSeparated;
    unsigned long long  _fieldNameWidth;
    NSMutableArray * _fieldOrder;
    NSMutableDictionary * _fields;
    NSString * _header;
    NSObject * _object;
}

+ (id)descriptionWithCFType:(void*)arg1 format:(id)arg2;
+ (id)descriptionWithObject:(id)arg1;
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2;
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;
+ (id)descriptionWithObject:(id)arg1 format:(id)arg2;

- (void).cxx_destruct;
- (void)addField:(id)arg1 format:(id)arg2;
- (void)addField:(id)arg1 object:(id)arg2;
- (void)addField:(id)arg1 value:(id)arg2;
- (void)addFieldValue:(id)arg1;
- (void)addFieldWithFormat:(id)arg1;
- (void)addSuperDescription;
- (id)descriptionString;
- (id)initWithCFType:(void*)arg1 header:(id)arg2;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(char *)arg4;
- (id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3;
- (id)initWithObject:(id)arg1 format:(id)arg2;
- (id)p_header;
- (void)setFieldOptionCommaSeparated;

@end
