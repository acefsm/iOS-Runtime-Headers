/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletin : NSObject <NSCopying, NSSecureCoding> {
    BBAccessoryIcon * _accessoryIconMask;
    NSMutableDictionary * _actions;
    NSArray * _additionalAttachments;
    long long  _addressBookRecordID;
    NSSet * _alertSuppressionContexts;
    NSString * _bulletinID;
    NSString * _bulletinVersionID;
    NSArray * _buttons;
    NSString * _categoryID;
    bool  _clearable;
    BBContent * _content;
    long long  _contentPreviewSetting;
    NSDictionary * _context;
    unsigned long long  _counter;
    NSDate * _date;
    long long  _dateFormatStyle;
    bool  _dateIsAllDay;
    NSString * _dismissalID;
    NSDate * _endDate;
    NSDate * _expirationDate;
    unsigned long long  _expirationEvents;
    bool  _expiresOnPublisherDeath;
    bool  _hasEventDate;
    BBSectionIcon * _icon;
    bool  _ignoresQuietMode;
    NSArray * _intentIDs;
    NSDate * _lastInterruptDate;
    bool  _loading;
    BBContent * _modalAlertContent;
    NSString * _parentSectionID;
    NSArray * _peopleIDs;
    BBAttachmentMetadata * _primaryAttachment;
    NSDate * _publicationDate;
    NSString * _publisherBulletinID;
    NSString * _publisherRecordID;
    NSDate * _recencyDate;
    NSString * _sectionID;
    long long  _sectionSubtype;
    BBSound * _sound;
    BBContent * _starkBannerContent;
    NSSet * _subsectionIDs;
    NSMutableDictionary * _supplementaryActionsByLayout;
    NSString * _threadID;
    NSTimeZone * _timeZone;
    bool  _turnsOnDisplay;
    NSString * _universalSectionID;
    NSString * _unlockActionLabelOverride;
    bool  _usesExternalSync;
    bool  _wantsFullscreenPresentation;
    NSSet * alertSuppressionAppIDs_deprecated;
    unsigned long long  realertCount_deprecated;
}

@property (nonatomic, retain) BBAccessoryIcon *accessoryIconMask;
@property (nonatomic, copy) BBAction *acknowledgeAction;
@property (nonatomic, retain) NSMutableDictionary *actions;
@property (nonatomic, copy) NSArray *additionalAttachments;
@property (nonatomic) long long addressBookRecordID;
@property (nonatomic, readonly) NSSet *alertSuppressionAppIDs;
@property (nonatomic, copy) NSSet *alertSuppressionAppIDs_deprecated;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, readonly) bool allowsAddingToLockScreenWhenUnlocked;
@property (nonatomic, readonly) bool allowsAutomaticRemovalFromLockScreen;
@property (nonatomic, copy) BBAction *alternateAction;
@property (nonatomic, readonly) NSString *alternateActionLabel;
@property (nonatomic, readonly) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property (nonatomic, readonly) NSString *bannerAccessoryRemoteViewControllerClassName;
@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSString *bulletinVersionID;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, readonly) bool canBeSilencedByMenuButtonPress;
@property (nonatomic, copy) NSString *categoryID;
@property (nonatomic) bool clearable;
@property (nonatomic, readonly) bool coalescesWhenLocked;
@property (nonatomic, retain) BBContent *content;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic) unsigned long long counter;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic) bool dateIsAllDay;
@property (nonatomic, copy) BBAction *defaultAction;
@property (nonatomic, copy) NSString *dismissalID;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) unsigned long long expirationEvents;
@property (nonatomic, copy) BBAction *expireAction;
@property (nonatomic) bool expiresOnPublisherDeath;
@property (nonatomic, readonly) NSString *fullAlternateActionLabel;
@property (nonatomic, readonly) NSString *fullUnlockActionLabel;
@property (nonatomic) bool hasEventDate;
@property (nonatomic) bool hasPrivateContent;
@property (nonatomic, readonly) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, readonly) long long iPodOutAlertType;
@property (nonatomic, retain) BBSectionIcon *icon;
@property (nonatomic) bool ignoresQuietMode;
@property (nonatomic, readonly) bool inertWhenLocked;
@property (nonatomic, copy) NSArray *intentIDs;
@property (nonatomic, retain) NSDate *lastInterruptDate;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) unsigned long long messageNumberOfLines;
@property (nonatomic, readonly) NSString *missedBannerDescriptionFormat;
@property (nonatomic, retain) BBContent *modalAlertContent;
@property (nonatomic, readonly) bool orderSectionUsingRecencyDate;
@property (nonatomic, copy) NSString *parentSectionID;
@property (nonatomic, copy) NSArray *peopleIDs;
@property (nonatomic, readonly) bool playsSoundForModify;
@property (nonatomic, readonly) bool preemptsPresentedAlert;
@property (nonatomic, readonly) bool preservesUnlockActionCase;
@property (nonatomic, readonly) bool preventLock;
@property (nonatomic, copy) BBAttachmentMetadata *primaryAttachment;
@property (nonatomic, readonly) bool prioritizeAtTopOfLockScreen;
@property (nonatomic, readonly) unsigned long long privacySettings;
@property (nonatomic, retain) NSDate *publicationDate;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, readonly, copy) NSString *publisherMatchID;
@property (nonatomic, copy) BBAction *raiseAction;
@property (nonatomic, readonly) unsigned long long realertCount;
@property (nonatomic) unsigned long long realertCount_deprecated;
@property (nonatomic, retain) NSDate *recencyDate;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, readonly) bool revealsAdditionalContentOnPresentation;
@property (nonatomic, readonly) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property (nonatomic, readonly) NSString *secondaryContentRemoteViewControllerClassName;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, readonly) NSString *sectionDisplayName;
@property (nonatomic, readonly) bool sectionDisplaysCriticalBulletins;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, readonly) BBSectionIcon *sectionIcon;
@property (nonatomic) long long sectionSubtype;
@property (nonatomic, readonly) bool showsContactPhoto;
@property (nonatomic, readonly) bool showsDateInFloatingLockScreenAlert;
@property (nonatomic, readonly) bool showsSubtitle;
@property (nonatomic, readonly) bool showsUnreadIndicatorForNoticesFeed;
@property (nonatomic, copy) BBAction *snoozeAction;
@property (nonatomic, retain) BBSound *sound;
@property (nonatomic, retain) BBContent *starkBannerContent;
@property (nonatomic, copy) NSSet *subsectionIDs;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long subtypePriority;
@property (nonatomic, retain) NSMutableDictionary *supplementaryActionsByLayout;
@property (nonatomic, readonly) bool suppressesAlertsWhenAppIsActive;
@property (nonatomic, readonly) bool suppressesMessageForPrivacy;
@property (nonatomic, readonly) bool suppressesTitle;
@property (nonatomic, copy) NSString *threadID;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) BBColor *tintColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSString *topic;
@property (nonatomic) bool turnsOnDisplay;
@property (nonatomic, copy) NSString *universalSectionID;
@property (nonatomic, readonly) NSString *unlockActionLabel;
@property (nonatomic, copy) NSString *unlockActionLabelOverride;
@property (nonatomic) bool usesExternalSync;
@property (nonatomic, readonly) bool usesVariableLayout;
@property (nonatomic, readonly) bool visuallyIndicatesWhenDateIsInFuture;
@property (nonatomic) bool wantsFullscreenPresentation;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)_lifeAssertionAssociationSet;
+ (id)_observerAssociationSet;
+ (id)bulletinReferenceDateFromDate:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)validSortDescriptorsFromSortDescriptors:(id)arg1;
+ (void)vetSortDescriptor:(id)arg1;

- (void).cxx_destruct;
- (id)_actionKeyForType:(long long)arg1;
- (id)_actionWithID:(id)arg1 fromActions:(id)arg2;
- (id)_allActions;
- (id)_allSupplementaryActions;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_responseForAction:(id)arg1;
- (id)_safeDescription:(bool)arg1;
- (id)_sectionParameters;
- (id)_sectionSubtypeParameters;
- (id)accessoryIconMask;
- (id)acknowledgeAction;
- (id)actionForResponse:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)actions;
- (void)addLifeAssertion:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)additionalAttachments;
- (long long)addressBookRecordID;
- (id)alertSuppressionAppIDs;
- (id)alertSuppressionAppIDs_deprecated;
- (id)alertSuppressionContexts;
- (bool)allowsAddingToLockScreenWhenUnlocked;
- (bool)allowsAutomaticRemovalFromLockScreen;
- (id)alternateAction;
- (id)alternateActionLabel;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (id)bulletinID;
- (id)bulletinVersionID;
- (id)buttons;
- (bool)canBeSilencedByMenuButtonPress;
- (id)categoryID;
- (bool)clearable;
- (bool)coalescesWhenLocked;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSizeWithObserver:(id)arg1;
- (id)composedAttachmentImageWithObserver:(id)arg1;
- (id)content;
- (long long)contentPreviewSetting;
- (id)context;
- (void)copyAssociationsForBulletin:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)counter;
- (id)date;
- (long long)dateFormatStyle;
- (bool)dateIsAllDay;
- (void)dealloc;
- (id)defaultAction;
- (id)description;
- (id)dismissAction;
- (id)dismissalID;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)expirationDate;
- (unsigned long long)expirationEvents;
- (id)expireAction;
- (bool)expiresOnPublisherDeath;
- (id)firstValidObserver;
- (id)fullAlternateActionLabel;
- (id)fullUnlockActionLabel;
- (bool)hasEventDate;
- (bool)hasPrivateContent;
- (unsigned long long)hash;
- (id)hiddenPreviewsBodyPlaceholder;
- (long long)iPodOutAlertType;
- (id)icon;
- (bool)ignoresQuietMode;
- (bool)inertWhenLocked;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intentIDs;
- (bool)isEqual:(id)arg1;
- (bool)isLoading;
- (id)lastInterruptDate;
- (id)lifeAssertions;
- (id)message;
- (unsigned long long)messageNumberOfLines;
- (id)missedBannerDescriptionFormat;
- (id)modalAlertContent;
- (unsigned long long)numberOfAdditionalAttachments;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (bool)orderSectionUsingRecencyDate;
- (id)parentSectionID;
- (id)peopleIDs;
- (bool)playsSoundForModify;
- (bool)preemptsPresentedAlert;
- (bool)preservesUnlockActionCase;
- (bool)preventLock;
- (id)primaryAttachment;
- (long long)primaryAttachmentType;
- (bool)prioritizeAtTopOfLockScreen;
- (unsigned long long)privacySettings;
- (id)publicationDate;
- (id)publisherBulletinID;
- (id)publisherMatchID;
- (id)raiseAction;
- (unsigned long long)realertCount;
- (unsigned long long)realertCount_deprecated;
- (id)recencyDate;
- (id)recordID;
- (id)responseForAcknowledgeAction;
- (id)responseForAction:(id)arg1;
- (id)responseForButtonActionAtIndex:(unsigned long long)arg1;
- (id)responseForDefaultAction;
- (id)responseForExpireAction;
- (id)responseForRaiseAction;
- (id)responseForSnoozeAction;
- (id /* block */)responseSendBlock;
- (bool)revealsAdditionalContentOnPresentation;
- (id)safeDescription;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)section;
- (id)sectionDisplayName;
- (bool)sectionDisplaysCriticalBulletins;
- (id)sectionID;
- (id)sectionIcon;
- (long long)sectionSubtype;
- (void)setAccessoryIconMask:(id)arg1;
- (void)setAcknowledgeAction:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAdditionalAttachments:(id)arg1;
- (void)setAddressBookRecordID:(long long)arg1;
- (void)setAlertSuppressionAppIDs_deprecated:(id)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlternateAction:(id)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setBulletinVersionID:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setClearable:(bool)arg1;
- (void)setContent:(id)arg1;
- (void)setContentPreviewSetting:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setCounter:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setDateIsAllDay:(bool)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissalID:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpirationEvents:(unsigned long long)arg1;
- (void)setExpireAction:(id)arg1;
- (void)setExpiresOnPublisherDeath:(bool)arg1;
- (void)setHasEventDate:(bool)arg1;
- (void)setHasPrivateContent:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIgnoresQuietMode:(bool)arg1;
- (void)setIntentIDs:(id)arg1;
- (void)setLastInterruptDate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalAlertContent:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPeopleIDs:(id)arg1;
- (void)setPrimaryAttachment:(id)arg1;
- (void)setPublicationDate:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRaiseAction:(id)arg1;
- (void)setRealertCount_deprecated:(unsigned long long)arg1;
- (void)setRecencyDate:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(long long)arg1;
- (void)setShowsMessagePreview:(bool)arg1;
- (void)setSilenceAction:(id)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setStarkBannerContent:(id)arg1;
- (void)setSubsectionIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupplementaryActionsByLayout:(id)arg1;
- (void)setThreadID:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTurnsOnDisplay:(bool)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (void)setUnlockActionLabelOverride:(id)arg1;
- (void)setUsesExternalSync:(bool)arg1;
- (void)setWantsFullscreenPresentation:(bool)arg1;
- (id)shortDescription;
- (bool)showsContactPhoto;
- (bool)showsDateInFloatingLockScreenAlert;
- (bool)showsMessagePreview;
- (bool)showsSubtitle;
- (bool)showsUnreadIndicatorForNoticesFeed;
- (id)silenceAction;
- (id)snoozeAction;
- (id)sound;
- (id)starkBannerContent;
- (id)subsectionIDs;
- (id)subtitle;
- (unsigned long long)subtypePriority;
- (id)supplementaryActions;
- (id)supplementaryActionsByLayout;
- (id)supplementaryActionsForLayout:(long long)arg1;
- (bool)suppressesAlertsWhenAppIsActive;
- (bool)suppressesMessageForPrivacy;
- (bool)suppressesTitle;
- (id)syncHash;
- (id)threadID;
- (id)timeZone;
- (id)tintColor;
- (id)title;
- (id)topic;
- (bool)turnsOnDisplay;
- (id)universalSectionID;
- (id)unlockActionLabel;
- (id)unlockActionLabelOverride;
- (bool)usesExternalSync;
- (bool)usesVariableLayout;
- (bool)visuallyIndicatesWhenDateIsInFuture;
- (bool)wantsFullscreenPresentation;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (id)blt_uniqueKey;
- (id)dateOrRecencyDate;
- (bool)matchesPublisherBulletinID:(id)arg1 andRecordID:(id)arg2;
- (id)publishDate;
- (id)sectionMatchID;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

- (id)_defaultActionWithFilter:(id /* block */)arg1;
- (id)_launchURLForAction:(id)arg1 context:(id)arg2;
- (id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id /* block */)actionBlockForAction:(id)arg1 withOrigin:(int)arg2;
- (id /* block */)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id /* block */)actionBlockForButton:(id)arg1;
- (bool)bulletinAlertShouldOverridePocketMode;
- (bool)bulletinAlertShouldOverrideQuietMode;
- (void)killSound;
- (bool)playSound;
- (id)sb_minimalSupplementaryActions;
- (id)sb_nonPluginDefaultAction;

@end
