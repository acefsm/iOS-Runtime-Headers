/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {
    NSString * _activityType;
    id  _placeholderItem;
    id  _providedItem;
}

@property (setter=_setActivityType:, nonatomic, copy) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id item;
@property (nonatomic, retain) id placeholderItem;
@property (nonatomic, retain) id providedItem;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_setActivityType:(id)arg1;
- (bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (id)activityType;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;
- (void)main;
- (id)placeholderItem;
- (id)providedItem;
- (void)setPlaceholderItem:(id)arg1;
- (void)setProvidedItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (bool)activityTypeShouldProvideImage:(id)arg1;

@end
