/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDBezierPath : NSObject <NSCoding, NSCopying> {
    struct { 
        unsigned int sfr_flags : 8; 
        unsigned int sfr_pathState : 2; 
        unsigned int sfr_calculatedLengths : 1; 
        unsigned int sfr_unused : 21; 
    }  sfr_bpFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  sfr_controlPointBounds;
    unsigned long long  sfr_dashedLineCount;
    double * sfr_dashedLinePattern;
    double  sfr_dashedLinePhase;
    long long  sfr_elementCount;
    double * sfr_elementLength;
    long long  sfr_elementMax;
    long long  sfr_extraSegmentCount;
    long long  sfr_extraSegmentMax;
    void * sfr_extraSegments;
    double  sfr_flatness;
    struct PATHSEGMENT { unsigned int x1 : 4; unsigned int x2 : 60; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; } * sfr_head;
    long long  sfr_lastSubpathIndex;
    double  sfr_lineWidth;
    double  sfr_miterLimit;
    void * sfr_path;
    double  sfr_totalLength;
}

@property (nonatomic, readonly) bool containsClosePathElement;
@property (nonatomic, readonly) bool isCompound;
@property (nonatomic, readonly) bool isEffectivelyClosed;
@property (nonatomic, readonly) bool isLineSegment;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) bool isSelfIntersecting;

+ (id)appendBezierPaths:(id)arg1;
+ (id)bezierPath;
+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)bezierPathWithConvexHullOfPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2;
+ (void)clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)defaultFlatness;
+ (unsigned long long)defaultLineCapStyle;
+ (unsigned long long)defaultLineJoinStyle;
+ (double)defaultLineWidth;
+ (double)defaultMiterLimit;
+ (unsigned long long)defaultWindingRule;
+ (id)excludeBezierPaths:(id)arg1;
+ (id)exteriorOfBezierPath:(id)arg1;
+ (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)flatness;
+ (void)initialize;
+ (id)intersectBezierPaths:(id)arg1;
+ (unsigned long long)lineCapStyle;
+ (unsigned long long)lineJoinStyle;
+ (double)lineWidth;
+ (double)miterLimit;
+ (id)outlineBezierPath:(id)arg1;
+ (id)outlineBezierPath:(id)arg1 withThreshold:(double)arg2;
+ (id)outsideEdgeOfBezierPath:(id)arg1;
+ (struct Path { int x1; int x2; int x3; struct path_descr {} *x4; int x5; int x6; bool x7; bool x8; int x9; int x10; int x11; char *x12; }*)p_bezierToPath:(id)arg1;
+ (id)p_booleanWithBezierPaths:(id)arg1 operation:(int)arg2;
+ (id)p_pathToBezier:(struct Path { int x1; int x2; int x3; struct path_descr {} *x4; int x5; int x6; bool x7; bool x8; int x9; int x10; int x11; char *x12; }*)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_pathToBounds:(struct Path { int x1; int x2; int x3; struct path_descr {} *x4; int x5; int x6; bool x7; bool x8; int x9; int x10; int x11; char *x12; }*)arg1;
+ (void)setDefaultFlatness:(double)arg1;
+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;
+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;
+ (void)setDefaultLineWidth:(double)arg1;
+ (void)setDefaultMiterLimit:(double)arg1;
+ (void)setDefaultWindingRule:(unsigned long long)arg1;
+ (void)setFlatness:(double)arg1;
+ (void)setLineCapStyle:(unsigned long long)arg1;
+ (void)setLineJoinStyle:(unsigned long long)arg1;
+ (void)setLineWidth:(double)arg1;
+ (void)setMiterLimit:(double)arg1;
+ (void)setWindingRule:(unsigned long long)arg1;
+ (id)smoothBezierPath:(id)arg1 withThreshold:(double)arg2;
+ (void)strokeLineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (void)strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)subtractBezierPaths:(id)arg1;
+ (id)tracedPathForImage:(struct CGImage { }*)arg1 alphaThreshold:(double)arg2 pointSpacing:(double)arg3;
+ (id)tracedPathForInstantAlphaBinaryBitmap:(id)arg1 pointSpacing:(double)arg2;
+ (id)uniteBezierPaths:(id)arg1;
+ (unsigned long long)windingRule;

- (struct CGPath { }*)CGPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_addMitersFromSegments:(id)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (void)_appendArcSegmentWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)_appendToPath:(id)arg1;
- (id)_copyFlattenedPath;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)_deviceLineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_deviceMoveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_doPath;
- (void)addClip;
- (void)addIntersectionsWithLine:(struct CGPoint { double x1; double x2; })arg1 to:(id)arg2;
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2;
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(bool)arg3 reversed:(bool)arg4;
- (void)addPathToContext:(struct CGContext { }*)arg1;
- (id)aliasedPathInContext:(struct CGContext { }*)arg1 effectiveStrokeWidth:(float)arg2;
- (id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2;
- (void)alignBoundsToOrigin;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(bool)arg6;
- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(bool)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 startRadialVector:(struct CGPoint { double x1; double x2; })arg2 endRadialVector:(struct CGPoint { double x1; double x2; })arg3 angleSign:(int)arg4 startNewPath:(bool)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(long long)arg2;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)bezierPathByFittingCurve;
- (id)bezierPathByFittingCurve:(id)arg1;
- (id)bezierPathByFlatteningPath;
- (id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 withThreshold:(double)arg3;
- (id)bezierPathByRemovingRedundantElements;
- (id)bezierPathByReversingPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsIncludingStroke;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsIncludingStrokeWidth:(double)arg1 joinStyle:(unsigned long long)arg2 capStyle:(unsigned long long)arg3 miterLimit:(double)arg4 needsToExtendJoins:(bool)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsIncludingTSDStroke:(id)arg1;
- (const char *)cString;
- (double)calculateLengthOfElement:(long long)arg1;
- (void)calculateLengths;
- (id)chisel;
- (void)clearStroke:(struct CGContext { }*)arg1;
- (void)closePath;
- (bool)containsClosePathElement;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })controlPointBounds;
- (id)copyFromSegment:(int)arg1 t:(float)arg2 toSegment:(int)arg3 t:(float)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })currentPoint;
- (float)curvatureAt:(float)arg1;
- (double)curvatureAt:(double)arg1 fromElement:(int)arg2;
- (void)curveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)dealloc;
- (id)description;
- (double)distanceToPoint:(struct CGPoint { double x1; double x2; })arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4;
- (unsigned long long)elementAtIndex:(long long)arg1;
- (unsigned long long)elementAtIndex:(long long)arg1 allPoints:(struct CGPoint { double x1; double x2; }*)arg2;
- (unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint { double x1; double x2; }*)arg2;
- (long long)elementCount;
- (long long)elementPercentage:(float*)arg1 forOverallPercentage:(float)arg2;
- (float)elementPercentageFromElement:(int)arg1 forOverallPercentage:(float)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)fill;
- (double)flatness;
- (void)flattenIntoPath:(id)arg1;
- (void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3;
- (void)getStartPoint:(struct CGPoint { double x1; double x2; }*)arg1 andEndPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (struct CGPoint { double x1; double x2; })gradientAt:(float)arg1;
- (struct CGPoint { double x1; double x2; })gradientAt:(double)arg1 fromElement:(long long)arg2;
- (id)init;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intersectBezierPath:(id)arg1;
- (bool)intersectsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 hasFill:(bool)arg2;
- (bool)isCircular;
- (bool)isClockwise;
- (bool)isCompound;
- (bool)isDiamond;
- (bool)isEffectivelyClosed;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isFlat;
- (bool)isLineSegment;
- (bool)isOpen;
- (bool)isRectangular;
- (bool)isSelfIntersecting;
- (bool)isTriangular;
- (double)length;
- (double)lengthOfElement:(long long)arg1;
- (double)lengthToElement:(long long)arg1;
- (unsigned long long)lineCapStyle;
- (unsigned long long)lineJoinStyle;
- (void)lineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)lineWidth;
- (double)miterLimit;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })myGradientAt:(float)arg1;
- (struct CGPoint { double x1; double x2; })myGradientAt:(float)arg1 fromElement:(long long)arg2;
- (struct CGPoint { double x1; double x2; })nearestAngleOnPathToLine:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })nearestPointOnPathToLine:(struct CGPoint { double x1; double x2; })arg1;
- (id)outlineStroke;
- (id)p_aliasedPathInContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3;
- (id)p_beziersFromSegmentIntersections:(id)arg1;
- (id)p_pathAsSegments;
- (id)pathBySplittingAtPointOnPath:(struct CGPoint { double x1; double x2; })arg1;
- (id)pathByWobblingByUpTo:(double)arg1 subdivisions:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })pointAlongPathAtPercentage:(double)arg1;
- (struct CGPoint { double x1; double x2; })pointAt:(double)arg1 fromElement:(long long)arg2;
- (bool)pointOnPath:(struct CGPoint { double x1; double x2; })arg1 tolerance:(double)arg2;
- (id)pressure;
- (struct CGPoint { double x1; double x2; })rawGradientAt:(float)arg1 fromElement:(long long)arg2;
- (void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2;
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(struct { double x1; double x2; })arg2 inElementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 into:(id)arg4;
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(struct { double x1; double x2; })arg2 into:(id)arg3;
- (void)relativeCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)relativeLineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)relativeMoveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)removeAllPoints;
- (struct CGPoint { double x1; double x2; })roundPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2 strokeWidth:(int)arg3;
- (void)setAssociatedPoints:(struct CGPoint { double x1; double x2; }*)arg1 atIndex:(long long)arg2;
- (void)setFlatness:(double)arg1;
- (void)setLineCapStyle:(unsigned long long)arg1;
- (void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setLineJoinStyle:(unsigned long long)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setWindingRule:(unsigned long long)arg1;
- (void)stroke;
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 controlPoint1:(struct CGPoint { double x1; double x2; })arg3 controlPoint2:(struct CGPoint { double x1; double x2; })arg4 endPoint:(struct CGPoint { double x1; double x2; })arg5;
- (id)subtractBezierPath:(id)arg1;
- (void)takeAttributesFromStroke:(id)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGPoint { double x1; double x2; })transformedCoordinate:(struct CGPoint { double x1; double x2; })arg1 withPressure:(id)arg2;
- (struct CGPoint { double x1; double x2; })transformedTotalCoordinate:(struct CGPoint { double x1; double x2; })arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 withPressure:(id)arg4 getElement:(long long*)arg5 getPercentage:(float*)arg6;
- (struct CGPoint { double x1; double x2; })transformedTotalCoordinate:(struct CGPoint { double x1; double x2; })arg1 inElement:(long long)arg2 withPressure:(id)arg3;
- (id)uniteWithBezierPath:(id)arg1;
- (unsigned long long)windingRule;
- (double)yValueFromXValue:(double)arg1;
- (double)yValueFromXValue:(double)arg1 elementIndex:(long long*)arg2 parametricValue:(double*)arg3;

@end
