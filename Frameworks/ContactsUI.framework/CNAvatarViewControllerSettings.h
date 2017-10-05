/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarViewControllerSettings : NSObject {
    CNContactStore * _contactStore;
    <CNUILikenessRendering> * _likenessRenderer;
    <CNUIPRLikenessResolver> * _likenessResolver;
    PRPersonaStore * _personaStore;
    <CNSchedulerProvider> * _schedulerProvider;
    unsigned long long  _style;
    bool  _threeDTouchEnabled;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) <CNUILikenessRendering> *likenessRenderer;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, retain) PRPersonaStore *personaStore;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic) unsigned long long style;
@property (nonatomic) bool threeDTouchEnabled;

+ (id)defaultSettings;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(bool)arg3;
+ (id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(bool)arg2;
+ (id)settingsWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 threeDTouchEnabled:(bool)arg3 schedulerProvider:(id)arg4;
+ (bool)threeDTouchEnabledDefaultValue;

- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 threeDTouchEnabled:(bool)arg3 schedulerProvider:(id)arg4;
- (id)likenessRenderer;
- (id)likenessResolver;
- (id)personaStore;
- (id)schedulerProvider;
- (void)setContactStore:(id)arg1;
- (void)setLikenessRenderer:(id)arg1;
- (void)setLikenessResolver:(id)arg1;
- (void)setPersonaStore:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (unsigned long long)style;
- (bool)threeDTouchEnabled;

@end
