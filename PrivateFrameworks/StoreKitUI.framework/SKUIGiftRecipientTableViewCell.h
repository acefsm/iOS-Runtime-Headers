/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNContactPickerDelegate, MFComposeRecipientViewDelegate, SKUIGiftContactSearchDelegate> {
    CNContactPickerViewController * _contactPickerController;
    CNContactStore * _contactStore;
    UILabel * _placeholderLabel;
    MFComposeRecipientView * _recipientView;
    SKUIGiftContactSearchController * _searchController;
    UIView * _topBorderView;
}

@property (nonatomic, copy) NSAttributedString *attributedPlaceholder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *recipientAddresses;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactStore;
- (void)_resetSearchController;
- (void)_sendDidChangeRecipients;
- (void)_sendDidUpdateSearchController;
- (void)_sendDismissContactPicker;
- (id)attributedPlaceholder;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)layoutSubviews;
- (void)presentPeoplePickerPopover:(id)arg1 animated:(bool)arg2;
- (void)presentSearchResultsPopover:(id)arg1 animated:(bool)arg2;
- (id)recipientAddresses;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)searchControllerDidFinishSearch:(id)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
