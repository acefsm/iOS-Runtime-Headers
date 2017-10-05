/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant> {
    bool  _backButtonHidden;
    UIBarButtonItem * _backButtonItem;
    double  _backButtonMargin;
    double  _backButtonMaximumWidth;
    UIImage * _backIndicatorImage;
    long long  _barMetrics;
    bool  _deferResolvedSizeChange;
    <_UINavigationBarContentViewDelegate> * _delegate;
    _UINavigationBarContentViewLayout * _layout;
    NSArray * _leadingBarButtonItems;
    bool  _leadingItemsSupplementBackItem;
    bool  _needsBackButtonUpdate;
    bool  _outstandingDeferredResolvedSizeChange;
    double  _overrideSize;
    long long  _requestedContentSize;
    UIColor * _textColor;
    NSString * _title;
    NSDictionary * _titleAttributes;
    double  _titleVerticalPositionAdjustment;
    UIView * _titleView;
    double  _titleViewAlpha;
    NSArray * _trailingBarButtonItems;
    _UINavigationBarTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) UIView *accessibilityBackButtonView;
@property (nonatomic, readonly) UIView *accessibilityTitleView;
@property (nonatomic) bool backButtonHidden;
@property (nonatomic, retain) UIBarButtonItem *backButtonItem;
@property (nonatomic) double backButtonMargin;
@property (setter=_setBackButtonMaximumWidth:, nonatomic) double backButtonMaximumWidth;
@property (nonatomic) long long barMetrics;
@property (nonatomic, readonly) long long currentContentSize;
@property (nonatomic, readonly) double currentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UINavigationBarContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *leadingBarButtonItems;
@property (nonatomic) bool leadingItemsSupplementBackItem;
@property (nonatomic) double overrideSize;
@property (nonatomic) long long requestedContentSize;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *titleAttributes;
@property (nonatomic) double titleVerticalPositionAdjustment;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic) double titleViewAlpha;
@property (nonatomic, copy) NSArray *trailingBarButtonItems;

- (void).cxx_destruct;
- (void)__backButtonAction:(id)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibility_barButtonItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_appearanceChanged;
- (void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2;
- (long long)_currentContentSize;
- (id)_defaultInlineTitleAttributes;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (double)_intrinsicHeight;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (id)_newLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_overlayRectForView:(id)arg1 inTargetView:(id)arg2;
- (void)_setBackButtonMaximumWidth:(double)arg1;
- (void)_setupBackButtonAnimated:(bool)arg1;
- (void)_setupLeadingButtonBarAnimated:(bool)arg1;
- (void)_setupTitleView;
- (void)_setupTrailingButtonBarAnimated:(bool)arg1;
- (void)_updateLayoutMarginsForLayout:(id)arg1;
- (id)accessibilityBackButtonView;
- (id)accessibilityTitleView;
- (void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(bool)arg2;
- (bool)backButtonHidden;
- (id)backButtonItem;
- (double)backButtonMargin;
- (double)backButtonMaximumWidth;
- (id)backIndicatorImage;
- (long long)barMetrics;
- (long long)barType;
- (long long)currentContentSize;
- (double)currentHeight;
- (double)defaultEdgeSpacing;
- (id)defaultFontDescriptor;
- (id)delegate;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isRTL;
- (void)layoutMarginsDidChange;
- (id)leadingBarButtonItems;
- (bool)leadingItemsSupplementBackItem;
- (double)overrideSize;
- (void)recordFromStateForTransition:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (long long)requestedContentSize;
- (void)resolvedSizeDidChange;
- (void)safeAreaInsetsDidChange;
- (void)setBackButtonHidden:(bool)arg1;
- (void)setBackButtonItem:(id)arg1;
- (void)setBackButtonMargin:(double)arg1;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBarMetrics:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeadingBarButtonItems:(id)arg1;
- (void)setLeadingItemsSupplementBackItem:(bool)arg1;
- (void)setNeedsBackButtonUpdate;
- (void)setOverrideSize:(double)arg1;
- (void)setRequestedContentSize:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAttributes:(id)arg1;
- (void)setTitleVerticalPositionAdjustment:(double)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTitleViewAlpha:(double)arg1;
- (void)setTrailingBarButtonItems:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (void)tintColorDidChange;
- (id)title;
- (id)titleAttributes;
- (double)titleVerticalPositionAdjustment;
- (id)titleView;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (double)titleViewAlpha;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (id)trailingBarButtonItems;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContent;
- (void)updateContentAnimated:(bool)arg1;

@end
