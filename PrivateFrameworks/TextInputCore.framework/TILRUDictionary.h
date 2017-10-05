/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILRUDictionary : NSObject {
    struct __CFDictionary { } * _dictionary;
    TILRUDictionaryNode * _head;
    unsigned long long  _maxCount;
    TILRUDictionaryNode * _tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)arg1;

- (void)_addNodeToFront:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (id)allKeys;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (unsigned long long)linkedListCount;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
