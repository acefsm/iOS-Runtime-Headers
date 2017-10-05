/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPasswordUtilities : ICSharedPasswordUtilities {
    bool  _authenticationInProgress;
    UIAlertController * _displayedAlertController;
    NSString * _divergedSharedPassword;
}

@property (nonatomic) bool authenticationInProgress;
@property (nonatomic) UIAlertController *displayedAlertController;
@property (nonatomic, retain) NSString *divergedSharedPassword;

+ (bool)authenticateDevicePasscodeIfNecessaryWithReason:(id)arg1;
+ (void)authenticateiCloudPasswordFromRootViewController:(id)arg1 confirmButtonTitle:(id)arg2 reason:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)deviceHasPasscode;
+ (struct UIImage { Class x1; }*)imageForCurrentDecryptedStatusForNote:(id)arg1;
+ (void)setTouchIDEnabledForSharedPassword:(bool)arg1;
+ (id)sharedInstance;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1;
+ (bool)touchIDEnabledForSharedPassword;
+ (bool)touchIDHardwareIsAvailable;
+ (bool)touchIDIsEnrolled;
+ (void)warnUserCannotPasswordProtectDueToManagedAppleIDInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectNoteDueToSharedNoteInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectNoteDueToUnsupportedAttachmentsInViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_authenticatePasswordForDeletingNotes:(id)arg1 incorrectAttempts:(long long)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 incorrectAttempts:(long long)arg3 passwordDiverged:(bool)arg4 displayWindow:(id)arg5 completionHandler:(id /* block */)arg6;
- (bool)_keychainContainsValidItemForSyncingObject:(id)arg1;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (void)addTitleAndMessageToAlert:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 incorrectAttempts:(long long)arg4 passwordDiverged:(bool)arg5;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithTouchIDForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithTouchIDWithReason:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 displayWindow:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)authenticationInProgress;
- (void)dealloc;
- (id)displayedAlertController;
- (id)divergedSharedPassword;
- (id)init;
- (bool)keychainContainsValidItemForAccount:(id)arg1;
- (bool)keychainContainsValidItemForNote:(id)arg1;
- (void)setAuthenticationInProgress:(bool)arg1;
- (void)setDisplayedAlertController:(id)arg1;
- (void)setDivergedSharedPassword:(id)arg1;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showUpdateDivergedPasswordForSharedPassword:(id)arg1 oldPassword:(id)arg2 displayWindow:(id)arg3;

@end
