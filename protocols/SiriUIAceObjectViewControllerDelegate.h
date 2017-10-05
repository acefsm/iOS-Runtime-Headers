/* Generated by RuntimeBrowser.
 */

@protocol SiriUIAceObjectViewControllerDelegate <NSObject>

@required

- (NSArray *)additionalSpeechInterpretationsForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id <SiriUIViewController>)arg1;
- (AFDataStore *)persistentDataStoreForSiriViewController:(id <SiriUIViewController>)arg1;
- (<AFUIDataStoring> *)persistentStoreForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 setStatusViewHidden:(bool)arg2;
- (double)siriSnippetViewControllerExpectedWidth:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 addSelectionResponse:(SAUIListItem *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 didHideVibrantView:(UIView *)arg2;
- (SiriUIDisambiguationItem *)siriViewController:(id <SiriUIViewController>)arg1 disambiguationItemForListItem:(SAUIListItem *)arg2 disambiguationKey:(NSString *)arg3;
- (AceObject *)siriViewController:(id <SiriUIViewController>)arg1 domainObjectForIdentifier:(NSURL *)arg2;
- (NSArray *)siriViewController:(id <SiriUIViewController>)arg1 filteredDisambiguationListItems:(NSArray *)arg2;
- (SAUIListItem *)siriViewController:(id <SiriUIViewController>)arg1 listItemToPickInAutodisambiguationForListItems:(NSArray *)arg2;
- (bool)siriViewController:(id <SiriUIViewController>)arg1 openPunchOut:(SAUIAppPunchOut *)arg2;
- (bool)siriViewController:(id <SiriUIViewController>)arg1 openURL:(NSURL *)arg2;
- (void)siriViewController:(void *)arg1 openURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SiriUIViewController> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriViewController:(id <SiriUIViewController>)arg1 performAceCommands:(NSArray *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 sendGenericAceCommands:(NSArray *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 setContentOffset:(double)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 setDomainObject:(AceObject *)arg2 forIdentifier:(NSURL *)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })siriViewControllerBackgroundInsets:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerDidResignFirstResponder:(id <SiriUIViewController>)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })siriViewControllerDisplayInsetsForVisibleSpace:(id <SiriUIViewController>)arg1;
- (NSBundle *)siriViewControllerEffectiveBundleForCoreLocation:(id <SiriUIViewController>)arg1;
- (double)siriViewControllerExpectedWidth:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerHeightDidChange:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerHeightDidChange:(id <SiriUIViewController>)arg1 heightDifference:(double)arg2;
- (void)siriViewControllerHeightDidChange:(id <SiriUIViewController>)arg1 pinTopOfSnippet:(bool)arg2;
- (struct CGSize { double x1; double x2; })siriViewControllerVisibleContentArea:(id <SiriUIViewController>)arg1;
- (AFUserUtterance *)updatedUserUtteranceForSiriViewController:(id <SiriUIViewController>)arg1;

@optional

- (bool)inTextInputModeForSiriViewController:(id <SiriUIViewController>)arg1;
- (bool)shouldEnableInteractionForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)showCorrectionScreenForSiriViewController:(id <SiriUIViewController>)arg1;

@end
