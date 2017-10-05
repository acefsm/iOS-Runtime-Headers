/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableCellStyle : SXDataTableElementStyle {
    NSArray * _textStyles;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXDataTableBorderSides *border;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } height;
@property (nonatomic, readonly) unsigned long long horizontalAlignment;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } minimumWidth;
@property (nonatomic, readonly) SXPadding *padding;
@property (nonatomic, readonly) SXJSONArray *selectors;
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) NSArray *textStyles;
@property (nonatomic, readonly) unsigned long long verticalAlignment;
@property (nonatomic, readonly) double width;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (id)paddingWithValue:(id)arg1 withType:(int)arg2;
- (id)textStyles;
- (unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end
