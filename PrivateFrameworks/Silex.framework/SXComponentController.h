/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentController : NSObject <SXAXAssistiveTechStatusChangeListener, SXViewportChangeListener> {
    <SXComponentHosting> * _componentHost;
    NSMutableDictionary * _componentIdentifiersToInvalidate;
    <SXComponentViewFactory> * _componentViewFactory;
    <SXComponentControllerDelegate> * _delegate;
    bool  _invalidationDispatched;
    bool  _isPresented;
    bool  _isPresenting;
    NSMutableDictionary * _mappedComponentViews;
    NSMutableArray * _nestedComponentViews;
    NSMutableSet * _possibleInvalidations;
    SXPresentationAttributes * _presentationAttributes;
    SXLayoutBlueprint * _presentedBlueprint;
    NSMutableArray * _sortedComponentViews;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) <SXComponentHosting> *componentHost;
@property (nonatomic, retain) NSMutableDictionary *componentIdentifiersToInvalidate;
@property (nonatomic, readonly) <SXComponentViewFactory> *componentViewFactory;
@property (nonatomic, readonly) NSArray *componentViews;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SXComponentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *flattenedComponentViews;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidationDispatched;
@property (nonatomic, readonly) bool isPresented;
@property (nonatomic) bool isPresenting;
@property (nonatomic, retain) NSMutableDictionary *mappedComponentViews;
@property (nonatomic, retain) NSMutableArray *nestedComponentViews;
@property (nonatomic, retain) NSMutableSet *possibleInvalidations;
@property (nonatomic, readonly) SXPresentationAttributes *presentationAttributes;
@property (nonatomic, readonly) SXLayoutBlueprint *presentedBlueprint;
@property (nonatomic, retain) NSMutableArray *sortedComponentViews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (void)assistiveTechnologyStatusDidChange;
- (void)cancelInvalidationForComponentWithIdentifier:(id)arg1;
- (id)componentHost;
- (id)componentIdentifiersToInvalidate;
- (id)componentViewFactory;
- (id)componentViewForIdentifier:(id)arg1;
- (id)componentViewForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)componentViewForPoint:(struct CGPoint { double x1; double x2; })arg1 inComponents:(id)arg2;
- (id)componentViews;
- (id)componentViewsForRole:(int)arg1;
- (id)componentViewsForRole:(int)arg1 forLayoutBlueprint:(id)arg2;
- (id)componentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)delegate;
- (void)fadeInComponents:(id)arg1;
- (id)flattenedComponentViews;
- (id)initWithViewport:(id)arg1 componentViewFactory:(id)arg2 componentHost:(id)arg3 delegate:(id)arg4;
- (void)invalidateLayoutForComponentWithIdentifier:(id)arg1;
- (void)invalidateLayoutForComponentWithIdentifier:(id)arg1 suggestedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)invalidateLayoutForComponentWithIdentifier:(id)arg1 suggestedSize:(struct CGSize { double x1; double x2; })arg2 priority:(int)arg3;
- (void)invalidateQueuedComponentsIfNeededInLayoutBlueprint:(id)arg1;
- (bool)invalidationDispatched;
- (bool)isPresented;
- (bool)isPresenting;
- (id)mappedComponentViews;
- (void)mightInvalidateComponentWithIdentifier:(id)arg1;
- (id)nestedComponentViews;
- (id)possibleInvalidations;
- (void)presentBlueprint:(id)arg1 animated:(bool)arg2;
- (void)presentBlueprint:(id)arg1 forParentComponentView:(id)arg2 inHost:(id)arg3;
- (void)presentBlueprint:(id)arg1 inHost:(id)arg2;
- (void)presentBlueprint:(id)arg1 withAttributes:(id)arg2;
- (id)presentComponentBlueprint:(id)arg1 inHost:(id)arg2 columnLayout:(id)arg3;
- (void)presentComponentsInBlueprint:(id)arg1;
- (id)presentationAttributes;
- (id)presentedBlueprint;
- (void)provideInfosLayoutTo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderBounds;
- (void)renderContentsIfNeededForComponents:(id)arg1;
- (void)setComponentIdentifiersToInvalidate:(id)arg1;
- (void)setInvalidationDispatched:(bool)arg1;
- (void)setIsPresenting:(bool)arg1;
- (void)setMappedComponentViews:(id)arg1;
- (void)setNestedComponentViews:(id)arg1;
- (void)setPossibleInvalidations:(id)arg1;
- (void)setSortedComponentViews:(id)arg1;
- (id)sortedComponentViews;
- (void)updateVisibilityStatesForComponentViews:(id)arg1;
- (void)updateVisibilityStatesForComponentViews:(id)arg1 parentComponent:(id)arg2 withOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)updateVisibilityStatesForComponentViews:(id)arg1 toState:(long long)arg2;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
