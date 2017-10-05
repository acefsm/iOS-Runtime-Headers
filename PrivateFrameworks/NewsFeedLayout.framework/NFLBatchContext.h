/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLBatchContext : NSObject <NSCoding, NSCopying> {
    unsigned long long  _batchType;
    NSString * _identifier;
}

@property (nonatomic, readonly) unsigned long long batchType;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (unsigned long long)batchType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initForTesting;
- (id)initWithBatchType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;

@end
