/* Generated by RuntimeBrowser.
 */

@protocol WFNetworkListDelegate <NSObject>

@required

- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 didTapRecord:(id <WFNetworkListRecord>)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 setWAPIEnabled:(bool)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 showSettingsForNetwork:(id <WFNetworkListRecord>)arg2;
- (void)networkListViewController:(UIViewController<WFNetworkListing> *)arg1 userDidChangePower:(bool)arg2;
- (bool)networkListViewControllerCurrentPowerState:(UIViewController<WFNetworkListing> *)arg1;
- (void)networkListViewControllerDidAppear:(UIViewController<WFNetworkListing> *)arg1;
- (void)networkListViewControllerDidDisappear:(UIViewController<WFNetworkListing> *)arg1;
- (void)networkListViewControllerDidTapOtherNetwork:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerNetworkRestrictionActive:(UIViewController<WFNetworkListing> *)arg1;
- (bool)networkListViewControllerWAPIEnabled:(UIViewController<WFNetworkListing> *)arg1;

@end
