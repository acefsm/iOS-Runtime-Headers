/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHBottomUpStrokeGroupingStrategy : CHStrokeGroupingStrategy

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingBoxOfPoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; }*)arg1 rotatedAroundPoint:(struct CGPoint { double x1; double x2; })arg2 byAngle:(double)arg3;
+ (struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect {} *x1; struct CGRect {} *x2; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect {} *x_3_1_1; } x3; })_boundingBoxesOfStrokesInGroup:(id)arg1 rotatedAroundPoint:(struct CGPoint { double x1; double x2; })arg2 byAngle:(double)arg3;
+ (double)_circumferenceRatioOfCircleFittedToPoints:(struct list<CGPoint, std::__1::allocator<CGPoint> > { struct __list_node_base<CGPoint, void *> { struct __list_node_base<CGPoint, void *> {} *x_1_1_1; struct __list_node_base<CGPoint, void *> {} *x_1_1_2; } x1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<CGPoint, void *> > > { unsigned long long x_2_1_1; } x2; })arg1 circleCenter:(struct CGPoint { double x1; double x2; }*)arg2 circleRadius:(double*)arg3;
+ (double)_containerSupportForPoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; }*)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; })_convexHullForPoints:(struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; }*)arg1;
+ (struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; })_convexHullForStroke:(id)arg1;
+ (double)_lineOrientationForStrokePoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; }*)arg1 error:(double*)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unionStrokeBounds:(const struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect {} *x1; struct CGRect {} *x2; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect {} *x_3_1_1; } x3; }*)arg1 aroundXPosition:(double)arg2 usingOneSideStrokeCountLimit:(long long)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unionStrokeBounds:(const struct vector<CGRect, std::__1::allocator<CGRect> > { struct CGRect {} *x1; struct CGRect {} *x2; struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { struct CGRect {} *x_3_1_1; } x3; }*)arg1 usingStrokeCountLimit:(long long)arg2 reverseOrder:(bool)arg3;
+ (double)_vectorMeanWithoutOutliers:(struct vector<double, std::__1::allocator<double> > { double *x1; double *x2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_1_1; } x3; }*)arg1;

- (struct CGVector { double x1; double x2; })_averageVectorFromSubstroke:(id)arg1 toSubstroke:(id)arg2 withOrientation:(struct CGVector { double x1; double x2; })arg3 strokeRef:(id)arg4;
- (long long)_compareDistanceInWritingSequenceOfStroke:(id)arg1 andStroke:(id)arg2 toReferenceStroke:(id)arg3;
- (void)_estimateWritingDirectionAndSortSubstrokesAccordingly:(id)arg1 averageWritingOrientation:(struct CGVector { double x1; double x2; }*)arg2 averageStrokeDeviation:(struct CGVector { double x1; double x2; }*)arg3;
- (struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; })_flippedCenters:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; }*)arg1 ofSubstrokes:(id)arg2 maxStrokesGap:(long long)arg3 begnning:(bool)arg4;
- (void)_getMergingEndOfLineCost:(double*)arg1 mergingEndOfLineStroke:(id*)arg2 forStrokeSubstrokes:(id)arg3 toLineGroup:(id)arg4;
- (void)_getMergingMiddleOfLineCost:(double*)arg1 mergingMiddleOfLineStroke:(id*)arg2 forStrokeSubstrokes:(id)arg3 toLineGroup:(id)arg4;
- (bool)_isStrokeClassifiedAsDoodling:(id)arg1 withSubstrokes:(id)arg2;
- (void)_mergeGroupsPostProcessing:(id)arg1 createdGroups:(id)arg2 deletedGroups:(id)arg3;
- (void)_refineLocalWritingOrientationsForSubstrokes:(id)arg1 useCoalescedCenter:(bool)arg2;
- (bool)_refineWritingOrientationAndResortSubstrokes:(id)arg1 averageWritingOrientation:(struct CGVector { double x1; double x2; }*)arg2;
- (double)_scaleFactorForBoundsHeight:(double)arg1;
- (void)_smoothLocalWritingOrientations:(struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector {} *x1; struct CGVector {} *x2; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector {} *x_3_1_1; } x3; }*)arg1;
- (void)_sortSubstrokesByWritingDirection:(id)arg1 averageWritingOrientation:(struct CGVector { double x1; double x2; }*)arg2;
- (id)_substrokesForStroke:(id)arg1;
- (void)_updateLocalStrokeDeviationsForSubstrokes:(id)arg1 averageStrokeDeviation:(struct CGVector { double x1; double x2; }*)arg2;
- (void)_updateLocalWritingOrientationsForSubstrokes:(id)arg1 useCoalescedCenter:(bool)arg2;
- (void)_updateNontextCandidateSupport:(id)arg1 withStroke:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 nontextStrokeIdentifiers:(id)arg4 nontextGroups:(id)arg5 createdGroups:(id)arg6;
- (void)_updateNontextCandidates:(id)arg1 byAddingStrokes:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 newNontextStrokeIdentifiers:(id)arg4 textGroups:(id)arg5 nontextGroups:(id)arg6 nontextGroupsSnapshot:(id)arg7 createdGroups:(id)arg8 shouldCancelCallback:(id /* block */)arg9;
- (void)_updateNontextCandidates:(id)arg1 byRemovingStrokeIdentifiers:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 reinsertedStrokes:(id)arg4 removedNontextStrokeIdentifiers:(id)arg5 nontextGroups:(id)arg6 createdGroups:(id)arg7 deletedGroups:(id)arg8 shouldCancelCallback:(id /* block */)arg9;
- (void)_updateNontextGroups:(id)arg1 createdGroups:(id)arg2 deletedGroups:(id)arg3 byRemovingStrokeIdentifier:(id)arg4;
- (void)_updateTextGroups:(id)arg1 createdGroups:(id)arg2 deletedGroups:(id)arg3 forAddedStroke:(id)arg4 substrokesByStrokeIdentifier:(id)arg5;
- (double)_verticalOffsetForBoundsHeight:(double)arg1 andScaleFactor:(double)arg2;
- (id)_writingDirectionSortedStrokeIdentifiersFromSubstrokes:(id)arg1 localWritingOrientations:(struct vector<CGVector, std::__1::allocator<CGVector> > { struct CGVector {} *x1; struct CGVector {} *x2; struct __compressed_pair<CGVector *, std::__1::allocator<CGVector> > { struct CGVector {} *x_3_1_1; } x3; }*)arg2;
- (id)averageAngleAndReliabilityForStrokeGroup:(id)arg1;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 orderedStrokesIDs:(id*)arg2;
- (id)updatedGroupingResultWithCancellationBlock:(id /* block */)arg1;

@end
