/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKPeerPayment3DTextView : UIView <PKMotionManagerClientProtocol> {
    void _lastRollPitch;
    SCNNode * _lightNode;
    unsigned long long  _renderStyle;
    SCNView * _sceneView;
    double  _sceneWidthUnits;
    NSString * _text;
    SCNNode * _textContainerNode;
    SCNMaterial * _textMaterial;
    SCNPlane * _wallGeometry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long renderStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)_sharedMotionManager;
+ (id)supportedCharacterSet;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 renderStyle:(unsigned long long)arg2;
- (void)layoutSubviews;
- (unsigned long long)renderStyle;
- (void)setRollPitch;
- (bool)setText:(id)arg1;
- (id)text;
- (void)updateSceneWidthUnits;

@end
