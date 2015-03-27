/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLSlideshowSettingsViewControllerDelegate>, MPMediaItemCollection, MPMediaPickerController, NSArray, NSString, PLSlideshowAirPlayRoutesViewController, PLSlideshowTransitionsViewController, UITableView, UITableViewCell;

@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate> {
    PLSlideshowAirPlayRoutesViewController *_airPlayRoutesController;
    NSArray *_airplayRoutes;
    NSArray *_alternateTransitionLocalizations;
    <PLSlideshowSettingsViewControllerDelegate> *_delegate;
    MPMediaPickerController *_mediaPicker;
    UITableViewCell *_playMusicSwitchCell;
    unsigned int _selectedAirplayRouteIndex;
    UITableViewCell *_selectedMusicCell;
    NSString *_selectedTransition;
    MPMediaItemCollection *_slideshowMusicCollection;
    BOOL _slideshowShouldPlayMusic;
    UITableView *_table;
    UITableViewCell *_transitionCell;
    NSArray *_transitionKeys;
    PLSlideshowTransitionsViewController *_transitionsController;
}

@property(copy,readonly) NSString * debugDescription;
@property <PLSlideshowSettingsViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * selectedTransition;
@property(retain) MPMediaItemCollection * slideshowMusicCollection;
@property BOOL slideshowShouldPlayMusic;
@property(readonly) Class superclass;

+ (id)AppleTVPushTransitions;
+ (id)TVOutTransitions;
+ (int)_uiTransitionForTransitionKey:(id)arg1;
+ (id)iPadTransitions;
+ (id)iPhoneTransitions;

- (int)_airPlaySection;
- (int)_buttonSection;
- (BOOL)_includeAirPlaySection;
- (int)_mainSection;
- (void)_playButtonWasPressed:(id)arg1;
- (void)_playMusicSwitchValueDidChange:(id)arg1;
- (void)_preheatMediaPicker;
- (id)_selectedAirplayRoute;
- (id)_selectedMusic;
- (void)_updateSettingsInfo;
- (void)applySlideshowSettings:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)delegate;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned int)arg2;
- (void)loadView;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)selectedTransition;
- (void)setDelegate:(id)arg1;
- (void)setSelectedTransition:(id)arg1;
- (void)setSlideshowMusicCollection:(id)arg1;
- (void)setSlideshowShouldPlayMusic:(BOOL)arg1;
- (id)slideshowMusicCollection;
- (id)slideshowSettings;
- (BOOL)slideshowShouldPlayMusic;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateTransitionKeys:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end