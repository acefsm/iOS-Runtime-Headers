/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMLineShapeBuilder : CMShapeBuilder {
    OADStroke * _stroke;
}

- (void).cxx_destruct;
- (float)_adjustedCoefAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingBoxForLineEnd:(id)arg1;
- (float)_getRotationFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 withBounds:(id)arg3;
- (void)_renderBentConnector2InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { double x1; double x2; }*)arg4 headDst:(struct CGPoint { double x1; double x2; }*)arg5 tailSrc:(struct CGPoint { double x1; double x2; }*)arg6 tailDst:(struct CGPoint { double x1; double x2; }*)arg7;
- (void)_renderBentConnector3InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { double x1; double x2; }*)arg4 headDst:(struct CGPoint { double x1; double x2; }*)arg5 tailSrc:(struct CGPoint { double x1; double x2; }*)arg6 tailDst:(struct CGPoint { double x1; double x2; }*)arg7;
- (void)_renderLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 withOrientation:(float)arg3 inPath:(struct CGPath { }*)arg4;
- (void)_renderStraightConnector1InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { double x1; double x2; }*)arg4 headDst:(struct CGPoint { double x1; double x2; }*)arg5 tailSrc:(struct CGPoint { double x1; double x2; }*)arg6 tailDst:(struct CGPoint { double x1; double x2; }*)arg7;
- (struct CGPath { }*)copyShapeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setStroke:(id)arg1;

@end
