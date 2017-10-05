/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCachedMapTable : NSObject <NSCopying> {
    NSMutableOrderedSet * __cachedObjects;
    NSMapTable * __mapTable;
    unsigned long long  _cacheCountLimit;
}

@property (nonatomic, readonly) NSMutableOrderedSet *_cachedObjects;
@property (nonatomic, readonly) NSMapTable *_mapTable;
@property (nonatomic, readonly) unsigned long long accurateCount;
@property (nonatomic) unsigned long long cacheCountLimit;

- (void).cxx_destruct;
- (id)_cachedObjects;
- (id)_cachedObjectsCreateIfNeeded:(bool)arg1;
- (unsigned long long)_initialCapacity;
- (id)_mapTable;
- (id)_mapTableCreateIfNeeded:(bool)arg1;
- (void)_objectWasRecentlyUsed:(id)arg1;
- (unsigned long long)accurateCount;
- (unsigned long long)cacheCountLimit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCacheCountLimit:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
