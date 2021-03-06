/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemModule : NSObject {
    <HFItemUpdating> * _itemUpdater;
}

@property (nonatomic, readonly) NSSet *allItems;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) <HFItemUpdating> *itemUpdater;

- (void).cxx_destruct;
- (id)allItems;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)containsItem:(id)arg1;
- (id)init;
- (id)initWithItemUpdater:(id)arg1;
- (id)itemProviders;
- (id)itemUpdater;

@end
