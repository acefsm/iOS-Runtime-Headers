/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeusLowerComplicationDisplay> {
    UIView * _highlightView;
    bool  _highlighted;
    unsigned long long  _style;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (id)viewForComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)displayObserver;
- (id)init;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setDisplayObserver:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
