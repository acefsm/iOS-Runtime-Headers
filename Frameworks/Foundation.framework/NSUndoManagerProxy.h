/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (BOOL)_tryRetain;
- (void)forwardInvocation:(id)arg1;
- (id)initWithManager:(id)arg1 targetClass:(Class)arg2;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (oneway void)release;
- (id)retain;
- (void)superRelease;

@end