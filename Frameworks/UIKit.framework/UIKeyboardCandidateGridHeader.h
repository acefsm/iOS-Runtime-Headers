/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridHeader : UIView {
    UIKBBackdropView * _backdropView;
    UILabel * _inlineTextLabel;
    double  _inlineTextRightMargin;
    UIButton * _toggleButton;
}

@property (nonatomic, copy) NSString *arrowDirection;
@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic, copy) NSString *inlineText;
@property (nonatomic, retain) UILabel *inlineTextLabel;
@property (nonatomic) double inlineTextRightMargin;
@property (nonatomic, retain) UIButton *toggleButton;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)arrowDirection;
- (id)backdropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (id)inlineTextLabel;
- (double)inlineTextRightMargin;
- (void)layoutSubviews;
- (void)setArrowDirection:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setInlineText:(id)arg1;
- (void)setInlineTextLabel:(id)arg1;
- (void)setInlineTextRightMargin:(double)arg1;
- (void)setToggleButton:(id)arg1;
- (id)toggleButton;

@end
