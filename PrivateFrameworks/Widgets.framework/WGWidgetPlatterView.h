/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetPlatterView : MTTitledPlatterView {
    long long  _buttonMode;
    UIView * _compatibilityDarkeningView;
    WGWidgetListItemViewController * _listItem;
    NSString * _longerTitle;
    bool  _showingMoreContent;
    WGWidgetHostingViewController * _widgetHost;
}

@property (nonatomic, readonly) UIButton *addWidgetButton;
@property (getter=isAddWidgetButtonVisible, nonatomic) bool addWidgetButtonVisible;
@property (nonatomic) long long buttonMode;
@property (nonatomic) WGWidgetListItemViewController *listItem;
@property (nonatomic, readonly) UIButton *showMoreButton;
@property (getter=isShowMoreButtonVisible, nonatomic) bool showMoreButtonVisible;
@property (getter=isShowingMoreContent, nonatomic) bool showingMoreContent;
@property (nonatomic) WGWidgetHostingViewController *widgetHost;

- (void).cxx_destruct;
- (void)_configureHeaderContentView;
- (void)_handleAddWidget:(id)arg1;
- (void)_handleIconButton:(id)arg1;
- (bool)_isUtilityButtonVisible;
- (void)_setUtilityButtonVisible:(bool)arg1;
- (void)_toggleShowMore:(id)arg1;
- (void)_updateCompatibilityDarkeningViewIfNecessary;
- (void)_updateUtilityButtonForMode:(long long)arg1;
- (void)_updateUtilityButtonForMoreContentState:(bool)arg1;
- (void)_willRemoveCustomContent:(id)arg1;
- (id)addWidgetButton;
- (long long)buttonMode;
- (void)iconDidInvalidate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andCornerRadius:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAddWidgetButtonVisible;
- (bool)isShowMoreButtonVisible;
- (bool)isShowingMoreContent;
- (void)layoutSubviews;
- (id)listItem;
- (void)setAddWidgetButtonVisible:(bool)arg1;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setButtonMode:(long long)arg1;
- (void)setListItem:(id)arg1;
- (void)setShowMoreButtonVisible:(bool)arg1;
- (void)setShowingMoreContent:(bool)arg1;
- (void)setWidgetHost:(id)arg1;
- (id)showMoreButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)widgetHost;

@end
