/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNBarcodeObservation : VNRectangleObservation {
    NSDictionary * _acbsBarcodeInfo;
    CIBarcodeDescriptor * _barcodeDescriptor;
    NSString * _cachedPayloadStringValue;
    NSString * _symbology;
}

@property (setter=setACBSBarcodeInfo:, nonatomic, copy) NSDictionary *acbsBarcodeInfo;
@property (nonatomic, readonly) CIBarcodeDescriptor *barcodeDescriptor;
@property (nonatomic, readonly, copy) NSString *payloadStringValue;
@property (nonatomic, readonly, copy) NSString *symbology;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acbsBarcodeInfo;
- (id)barcodeDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbology:(id)arg1 descriptor:(id)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithSymbology:(id)arg1 descriptor:(id)arg2 topLeft:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4 bottomRight:(struct CGPoint { double x1; double x2; })arg5 topRight:(struct CGPoint { double x1; double x2; })arg6;
- (bool)isEqual:(id)arg1;
- (id)payloadStringValue;
- (void)setACBSBarcodeInfo:(id)arg1;
- (id)symbology;

@end
