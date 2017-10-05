/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUListPattern : NUPattern {
    struct NSArray { Class x1; } * _list;
}

@property (readonly) NSArray *list;

- (void).cxx_destruct;
- (id)init;
- (id)initWithList:(id)arg1;
- (bool)isEqualToListPattern:(id)arg1;
- (bool)isEqualToPattern:(id)arg1;
- (bool)isFixedOrder;
- (struct NSArray { Class x1; }*)list;
- (bool)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3;
- (id)optimizedPattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)tokens;

@end
