/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary;



@interface SUVariableCellConfigurationCache : NSObject 
{
    NSMutableDictionary *_caches;
    id _cellContext;
    float _tableHeight;
}

@property(readonly) NSArray *caches;
@property(retain) id cellContext;


- (id)initWithTableHeight:(float)arg1;
- (void)dealloc;
- (id)cacheForClass:(Class)arg1;
- (id)caches;
- (void)reset;
- (id)cellContext;
- (void)setCellContext:(id)arg1;

@end