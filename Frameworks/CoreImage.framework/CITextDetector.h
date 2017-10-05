/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITextDetector : CIDetector {
    double  _height;
    double  _width;
    CIContext * context;
    NSMutableDictionary * featureOptions;
    FKTextDetector * textDetector;
}

@property (nonatomic, retain) CIContext *context;

- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3;
- (id)context;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })ctmForImageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(int)arg2;
- (void)dealloc;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (void)setContext:(id)arg1;

@end
