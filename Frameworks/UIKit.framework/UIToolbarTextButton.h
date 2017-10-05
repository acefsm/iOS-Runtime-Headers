/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbarTextButton : UIToolbarButton {
    NSSet * _possibleTitles;
    NSString * _pressedTitle;
    NSString * _title;
}

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setPressed:(bool)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(double)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
