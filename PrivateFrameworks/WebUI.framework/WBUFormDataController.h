/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormDataController : WBSFormDataController <MCProfileConnectionObserver, WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate> {
    WBSFormAutoFillCorrectionManager * _autoFillCorrectionManager;
    WBSFormAutoFillParsecFeedbackProcessor * _autoFillFeedbackProcessor;
    int  _cachedAutoFillRestrictionValue;
    bool  _savePending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNContact *me;
@property (nonatomic) bool shouldAutoFillFromAddressBook;
@property (nonatomic) bool shouldAutoFillFromCreditCardData;
@property (nonatomic) bool shouldAutoFillPasswords;
@property (readonly) Class superclass;

+ (bool)_isDevicePasscodeSet;
+ (id)_meCard;
+ (id)_stringForCNContactObject:(id)arg1 contactObjectComponent:(id)arg2;
+ (bool)contactIsMe:(id)arg1;
+ (bool)contactStoreHasMeCard:(id)arg1;
+ (bool)keychainSyncEnabled;
+ (id)localizedLowercaseContactProperty:(id)arg1;
+ (id)valueStringForMatch:(id)arg1;

- (void).cxx_destruct;
- (id)_addressBookMatchesForFullNameForContact:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_autoFillCorrectionManager;
- (void)_autoFillPreferencesDidChange;
- (id)_credentialForLoginForm:(id)arg1 inFrame:(id)arg2 completingPartialUser:(bool)arg3 matches:(id*)arg4 potentialMatches:(id*)arg5;
- (id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3;
- (void)_didFillFieldWithGeneratedPassword:(id)arg1 inFrame:(id)arg2 webView:(id)arg3;
- (id)_displayDataWithTextField:(id)arg1 displayedInQuickType:(bool)arg2 prefix:(id)arg3;
- (void)_processCorrectionsForFormWithDomain:(id)arg1 formMetadata:(id)arg2;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id*)arg3 matchesForCurrentHost:(id*)arg4;
- (void)_replaceCredentialsWithDontSaveMarkerForProtectionSpace:(id)arg1;
- (void)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 andPromptToUpdateRelatedCredentialsWithWebView:(id)arg4;
- (bool)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 formType:(unsigned long long)arg4 promptingPolicy:(long long)arg5 webView:(id)arg6 completionHandler:(id /* block */)arg7;
- (bool)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2;
- (bool)_shouldSaveUsernamesAndPasswordsForURL:(id)arg1 inWebView:(id)arg2;
- (void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned long long)arg2 username:(id)arg3 host:(id)arg4 hasCredentialForCurrentHost:(bool)arg5 existingCredentialMatchesForCurrentHost:(id)arg6 otherSubdomainCredentialMatches:(id)arg7 completionHandler:(id /* block */)arg8;
- (bool)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (bool)_webView:(id)arg1 formSubmission:(bool)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(id /* block */)arg5;
- (bool)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formSubmission:(bool)arg3 formWithMetadata:(id)arg4 fromFrame:(id)arg5 username:(id)arg6 password:(id)arg7 submissionHandler:(id /* block */)arg8;
- (bool)_webView:(id)arg1 saveUsernameAndPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 isGeneratedPassword:(bool)arg7 confirmOverwritingCurrentPassword:(bool)arg8 submissionHandler:(id /* block */)arg9;
- (bool)_webView:(id)arg1 saveUsernameAndPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(bool)arg4 submissionHandler:(id /* block */)arg5;
- (bool)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(id /* block */)arg4;
- (bool)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 formSubmission:(bool)arg3 fromFrame:(id)arg4 submissionHandler:(id /* block */)arg5;
- (bool)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(id /* block */)arg4;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 contact:(id)arg4;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(bool)arg6;
- (bool)autoFillCorrectionManagerShouldProcessFeedback:(id)arg1;
- (void)clearAllFormCredentials;
- (id)completionDBPath;
- (id)credentialForLoginForm:(id)arg1 inFrame:(id)arg2;
- (id)credentialFromMatches:(id)arg1 completingPartialUserInLoginForm:(id)arg2;
- (void)dealloc;
- (void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (id)feedbackProcessorForAutoFillCorrectionManager:(id)arg1;
- (id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)arg1;
- (id)formFieldClassificationCorrector:(id)arg1 bestAddressBookLabelForControlValue:(id)arg2;
- (bool)formFieldClassificationCorrector:(id)arg1 hasAddressBookDataForAddressBookLabel:(id)arg2;
- (void)gatherAutoFillDisplayDataWithTextField:(id)arg1 displayedInQuickType:(bool)arg2 prefix:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 multiRoundAutoFillManager:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithAggressiveKeychainCaching:(bool)arg1;
- (bool)mayFillCreditCardDataInFrame:(id)arg1;
- (bool)mayPreFillInFrame:(id)arg1 ancestorFrames:(id)arg2;
- (id)me;
- (void)prepareMeCard;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)saveCompletionDBSoon;
- (void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(bool)arg3;
- (void)setShouldAutoFillFromAddressBook:(bool)arg1;
- (void)setShouldAutoFillFromCreditCardData:(bool)arg1;
- (void)setShouldAutoFillPasswords:(bool)arg1;
- (bool)shouldAllowPasswordAutoFillOnURL:(id)arg1;
- (bool)shouldAutoFillFromAddressBook;
- (bool)shouldAutoFillFromCreditCardData;
- (bool)shouldAutoFillFromCreditCardDataInFrame:(id)arg1;
- (bool)shouldAutoFillFromPreviousData;
- (bool)shouldAutoFillPasswords;
- (bool)shouldAutoGeneratePasswordsForURL:(id)arg1 inWebView:(id)arg2;
- (void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (id)uniqueIDOfContact:(id)arg1;
- (bool)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(bool)arg4 processMetadataCorrections:(bool)arg5 submissionHandler:(id /* block */)arg6;
- (bool)whiteListAllowsURL:(id)arg1;

@end
