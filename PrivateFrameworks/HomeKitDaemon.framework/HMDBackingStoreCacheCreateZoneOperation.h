/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheCreateZoneOperation : HMDBackingStoreOperation {
    id /* block */  _creationBlock;
    NSString * _zoneName;
}

@property (nonatomic, copy) id /* block */ creationBlock;
@property (nonatomic, retain) NSString *zoneName;

- (void).cxx_destruct;
- (id /* block */)creationBlock;
- (id)initWithZoneName:(id)arg1 creationBlock:(id /* block */)arg2;
- (id)mainReturningError;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)setZoneName:(id)arg1;
- (id)zoneName;

@end
