/* Generated by RuntimeBrowser.
 */

@protocol SGUISuggestionTableViewCellDelegate <NSObject>

@required

- (void)suggestionCell:(UITableViewCell *)arg1 didTapConfirmForSuggestion:(id <SGRealtimeSuggestion>)arg2;
- (void)suggestionCell:(UITableViewCell *)arg1 didTapIgnoreForSuggestion:(id <SGRealtimeSuggestion>)arg2;

@end
