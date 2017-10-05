/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionTableCell : PKTableViewCell {
    CNAvatarView * _avatarView;
    UIColor * _primaryColor;
    UIFont * _primaryFont;
    UILabel * _primaryLabel;
    NSString * _primaryString;
    UIColor * _secondaryColor;
    UILabel * _secondaryLabel;
    NSString * _secondaryString;
    bool  _showsAvatarView;
    bool  _sizeLabels;
    UIColor * _tertiaryColor;
    UILabel * _tertiaryLabel;
    NSString * _tertiaryString;
    NSString * _transactionIdentifier;
    UIColor * _transactionValueColor;
    UIFont * _transactionValueFont;
    UILabel * _transactionValueLabel;
    NSString * _transactionValueString;
}

@property (nonatomic, readonly) CNAvatarView *avatarView;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, retain) NSString *primaryString;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic, retain) NSString *secondaryString;
@property (nonatomic) bool showsAvatarView;
@property (nonatomic, retain) UIColor *tertiaryColor;
@property (nonatomic, retain) NSString *tertiaryString;
@property (nonatomic, retain) NSString *transactionIdentifier;
@property (nonatomic, retain) UIColor *transactionValueColor;
@property (nonatomic, retain) UIFont *transactionValueFont;
@property (nonatomic, retain) NSString *transactionValueString;

+ (id)defaultPrimaryLabelFont;
+ (id)defaultTransactionValueFont;
+ (double)rowHeightWithTransactionValueFont:(id)arg1;
+ (id)secondaryLabelFont;
+ (id)tertiaryLabelFont;

- (void).cxx_destruct;
- (void)_updateAvatarView;
- (id)avatarView;
- (id)defaultPrimaryColor;
- (id)defaultSecondaryColor;
- (id)defaultTertiaryColor;
- (id)defaultTransactionValueColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryColor;
- (id)primaryFont;
- (id)primaryString;
- (id)secondaryColor;
- (id)secondaryString;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryString:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setSecondaryString:(id)arg1;
- (void)setShowsAvatarView:(bool)arg1;
- (void)setTertiaryColor:(id)arg1;
- (void)setTertiaryString:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setTransactionValueColor:(id)arg1;
- (void)setTransactionValueFont:(id)arg1;
- (void)setTransactionValueString:(id)arg1;
- (bool)showsAvatarView;
- (id)tertiaryColor;
- (id)tertiaryString;
- (id)transactionIdentifier;
- (id)transactionValueColor;
- (id)transactionValueFont;
- (id)transactionValueString;

@end