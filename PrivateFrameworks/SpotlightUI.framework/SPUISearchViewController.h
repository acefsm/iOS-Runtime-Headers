/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchViewController : UIViewController <SFFeedbackListener, SPUIResultViewDelegate, SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SearchUIResultViewTestingDelegate, UIGestureRecognizerDelegate> {
    NSMutableSet * _allHeaderViews;
    NSTimer * _clearResultsTimer;
    <SPUISearchViewControllerDelegate> * _delegate;
    SPUISearchFirstTimeViewController * _firstTimeExperienceViewController;
    bool  _internetOverrideForPPT;
    _UILegibilitySettings * _legibilitySettings;
    SPUILockScreenFooterView * _lockScreenFooterView;
    unsigned long long  _presentationMode;
    SPUIResultViewController * _proactiveResultViewController;
    unsigned long long  _queryStartTime;
    NSTimer * _queryUpdateTimer;
    SPUISearchHeader * _searchHeader;
    SPUIResultViewController * _searchResultViewController;
    double  _statusBarDismissTime;
    NSArray * _testingSections;
    UITableView * _testingTableView;
}

@property (retain) NSMutableSet *allHeaderViews;
@property (retain) NSTimer *clearResultsTimer;
@property (readonly) NSString *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPUISearchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *headerView;
@property bool internetOverrideForPPT;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (retain) SPUILockScreenFooterView *lockScreenFooterView;
@property unsigned long long presentationMode;
@property (retain) SPUIResultViewController *proactiveResultViewController;
@property (retain) SPUISearchHeader *searchHeader;
@property (retain) SPUIResultViewController *searchResultViewController;
@property double statusBarDismissTime;
@property (readonly) Class superclass;
@property (retain) NSArray *testingSections;
@property (retain) UITableView *testingTableView;

+ (bool)_isSuggestionResult:(id)arg1;
+ (bool)isFeedbackSelector:(SEL)arg1;
+ (bool)shouldShowAsTypedSuggestion;

- (void).cxx_destruct;
- (void)activateFirstTimeExperienceViewAnimate:(bool)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)activateViewController:(id)arg1 animate:(bool)arg2;
- (id)activeViewController;
- (id)allHeaderViews;
- (bool)allowInternet;
- (void)cancelButtonPressed;
- (void)clearResultsFromSection:(id)arg1;
- (id)clearResultsTimer;
- (void)clearSearchResults;
- (void)clearTimerExpired;
- (id)contentScrollView;
- (id)createAdditionalHeaderView;
- (id)currentQuery;
- (void)dealloc;
- (id)delegate;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)didBeginScrollingResults;
- (void)didChangeExpansionStateForSection:(id)arg1 expanded:(bool)arg2;
- (void)didEngageResult:(id)arg1;
- (void)didSwipeUpOnTableView;
- (void)didTapInEmptyRegion;
- (void)didUpdateContentScrolledOffScreenStatus:(bool)arg1 animated:(bool)arg2;
- (void)didUpdateFromResults;
- (double)distanceToTopOfAppIcons;
- (void)firstTimeExperienceContinueButtonPressed;
- (id)firstTimeExperienceViewController;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)headerView;
- (void)hideKeyboard;
- (id)init;
- (bool)internetOverrideForPPT;
- (id)legibilitySettings;
- (id)lockScreenFooterView;
- (void)performSearchWithQuery:(id)arg1;
- (void)performSearchWithQuery:(id)arg1 forSuggestions:(bool)arg2;
- (void)performSearchWithSuggestion:(id)arg1;
- (void)performTestBlock:(id /* block */)arg1 waitingForNotificationNamed:(id)arg2 completion:(id /* block */)arg3;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(long long)arg3;
- (void)popToSpotlight;
- (unsigned long long)presentationMode;
- (id)proactiveResultViewController;
- (void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(bool)arg3;
- (bool)queryIsPresent;
- (bool)respondsToSelector:(SEL)arg1;
- (void)resultViewController:(id)arg1 updatedTableViewController:(id)arg2 withSections:(id)arg3;
- (void)runSpotlightScrollSearchResultsTest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)runSpotlightShowAndScrollCardsTest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (bool)runTest:(id)arg1 options:(id)arg2 unlockSpringBoard:(id /* block */)arg3 enterSpotlight:(id /* block */)arg4 exitSpotlight:(id /* block */)arg5;
- (double)scrollDeltaForScrollView:(id)arg1;
- (void)scrollScrollView:(id)arg1 iterations:(unsigned long long)arg2 initiation:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)scrollSearchTableWithTestName:(id)arg1 iterations:(unsigned long long)arg2;
- (id)searchHeader;
- (id)searchResultViewController;
- (void)searchViewDidDismissWithReason:(unsigned long long)arg1;
- (void)searchViewDidPresentFromSource:(unsigned long long)arg1;
- (void)searchViewWillDismissWithReason:(unsigned long long)arg1;
- (void)searchViewWillPresentFromSource:(unsigned long long)arg1;
- (bool)sectionIsClearable:(id)arg1;
- (bool)sectionShouldBeExpanded:(id)arg1;
- (bool)selectCategoryNamed:(id)arg1 testName:(id)arg2;
- (void)setAllHeaderViews:(id)arg1;
- (void)setClearResultsTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstTimeExperienceViewController:(id)arg1;
- (void)setInternetOverrideForPPT:(bool)arg1;
- (void)setInternetOverrideToDisable:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLockScreenFooterView:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setProactiveResultViewController:(id)arg1;
- (void)setSearchHeader:(id)arg1;
- (void)setSearchResultViewController:(id)arg1;
- (void)setStatusBarDismissTime:(double)arg1;
- (void)setTestingSections:(id)arg1;
- (void)setTestingTableView:(id)arg1;
- (double)statusBarDismissTime;
- (id)testingSections;
- (id)testingTableView;
- (void)updateHeaderViewsWithBlock:(id /* block */)arg1;
- (id)viewControllerForPresenting;
- (void)viewDidLayoutSubviews;

@end
