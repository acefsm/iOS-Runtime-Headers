/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSpinnerHeaderView : UIView {
    UILabel * _headerLabel;
    NSString * _headerText;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSString *headerText;
@property (nonatomic) bool showSpinner;
@property (nonatomic) UITableView *tableView;

+ (id)_labelFont;
+ (double)sectionHeight;

- (void).cxx_destruct;
- (void)_systemTextSizeChanged;
- (id)headerText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 text:(id)arg2 showSpinner:(bool)arg3;
- (void)layoutSubviews;
- (void)setHeaderText:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setTableView:(id)arg1;
- (bool)showSpinner;
- (id)tableView;

@end
