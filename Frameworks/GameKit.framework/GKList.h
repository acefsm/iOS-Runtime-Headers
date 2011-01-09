/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKList : NSObject 
{
    NSUInteger *_items;
    NSUInteger _count;
    NSUInteger _size;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}

@property(readonly) NSUInteger count;


- (id)init;
- (id)initWithSize:(unsigned long)arg1;
- (void)dealloc;
- (BOOL)hasID:(NSUInteger)arg1;
- (void)addID:(NSUInteger)arg1;
- (void)copyItemsInto:(id)arg1;
- (void)addIDsFromList:(id)arg1;
- (void)removeID:(NSUInteger)arg1;
- (void)removeAllIDs;
- (id)allMatchingObjectsFromTable:(id)arg1;
- (void)lock;
- (void)unlock;
- (void)print;
- (unsigned long)count;

@end