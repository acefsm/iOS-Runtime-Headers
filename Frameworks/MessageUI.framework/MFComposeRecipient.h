/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipient : NSObject <NSCoding, NSCopying, UIItemProviderReading, UIItemProviderWriting> {
    NSString * _address;
    CNAutocompleteResult * _autocompleteResult;
    NSArray * _cachedCompleteMatches;
    NSArray * _cachedMatchedStrings;
    NSArray * _cachedSortedMembers;
    NSString * _compositeName;
    CNContact * _contact;
    NSString * _contactIdentifier;
    NSString * _countryCode;
    NSString * _displayString;
    int  _identifier;
    unsigned long long  _kind;
    NSString * _label;
    MFComposeRecipientOriginContext * _originContext;
    int  _property;
    void * _record;
    int  _recordID;
    unsigned long long  _sourceType;
    NSString * _unlocalizedLabel;
    NSString * _valueIdentifier;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, retain) CNAutocompleteResult *autocompleteResult;
@property (nonatomic, readonly) NSString *commentedAddress;
@property (nonatomic, readonly) NSString *compositeName;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, retain) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDirectoryServerResult;
@property (nonatomic, readonly) bool isGroup;
@property (nonatomic, readonly) bool isSuggestedRecipient;
@property (nonatomic, readonly) unsigned long long kind;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) NSString *normalizedAddress;
@property (nonatomic, readonly) MFComposeRecipientOriginContext *originContext;
@property (nonatomic, readonly) NSString *placeholderName;
@property (getter=isRemovableFromSearchResults, nonatomic, readonly) bool removableFromSearchResults;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) bool showsAccessoryButton;
@property (nonatomic) unsigned long long sourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uncommentedAddress;
@property (nonatomic, retain) NSString *unlocalizedLabel;
@property (nonatomic, retain) NSString *valueIdentifier;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)_requiredKeyDescriptors;
+ (id)composeRecipientWithAutocompleteResult:(id)arg1;
+ (id)mf_recipientWithGALResult:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_unformattedAddress;
- (id)address;
- (id)autocompleteResult;
- (id)children;
- (id)childrenWithCompleteMatches;
- (id)commentedAddress;
- (id)completelyMatchedAttributedStrings;
- (id)compositeName;
- (id)contact;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (int)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;
- (id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (bool)isDirectoryServerResult;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isRemovableFromSearchResults;
- (bool)isSuggestedRecipient;
- (unsigned long long)kind;
- (id)label;
- (id)labeledValueIdentifier;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)normalizedAddress;
- (id)originContext;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (int)property;
- (void*)record;
- (int)recordID;
- (void)setAddress:(id)arg1;
- (void)setAutocompleteResult:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setOriginContext:(id)arg1;
- (void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setUnlocalizedLabel:(id)arg1;
- (void)setValueIdentifier:(id)arg1;
- (id)shortName;
- (bool)showsAccessoryButton;
- (id)sortedChildren;
- (unsigned long long)sourceType;
- (id)uncommentedAddress;
- (id)unlocalizedLabel;
- (id)valueIdentifier;
- (bool)wasCompleteMatch;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)IDSCanonicalAddress;
- (id)canonicalAddress;
- (struct __CFPhoneNumber { }*)copyPhoneNumber;
- (bool)isEmail;
- (bool)isPhone;
- (id)rawAddress;
- (void)setCanonicalAddress:(id)arg1;

@end
