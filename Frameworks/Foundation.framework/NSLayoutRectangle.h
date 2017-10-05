/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutRectangle : NSLayoutRect

@property (readonly, copy) NSLayoutPoint *centerPoint;

+ (id)rectangleWithCenter:(id)arg1 width:(id)arg2 height:(id)arg3;
+ (id)rectangleWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
+ (id)rectangleWithLeading:(id)arg1 top:(id)arg2 width:(id)arg3 height:(id)arg4;

- (id)centerPoint;
- (id)constraintsContainingWithinRectangle:(id)arg1;
- (id)constraintsEqualToRectangle:(id)arg1;
- (id)rectangleByInsettingTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4;
- (id)rectangleByInsettingTopByDimension:(id)arg1 leadingByDimension:(id)arg2 bottomByDimension:(id)arg3 trailingByDimension:(id)arg4;
- (id)rectangleBySlicingWithDimension:(id)arg1 fromEdge:(long long)arg2;
- (id)rectangleBySlicingWithDistance:(double)arg1 fromEdge:(long long)arg2;
- (id)rectangleBySlicingWithProportion:(double)arg1 fromEdge:(long long)arg2;
- (id)rectangleWithName:(id)arg1;

@end
