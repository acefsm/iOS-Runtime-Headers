/* Generated by RuntimeBrowser.
 */

@protocol CVAVideoPipelinePropertiesSPI <CVAVideoPipelineProperties>

@required

- (float)alphaCoeffFilterColorStd;
- (float)alphaCoeffFilterColorStdFast;
- (float)alphaContrastExponent;
- (float)alphaGammaExponent;
- (float)alphaGuidedFilterEps;
- (float)alphaMaxLaplacian;
- (int)backgroundDisparityStatsWindowSize;
- (float)backgroundDisparityUpdateRate;
- (float)backgroundSeparationLikelihoodHigh;
- (float)backgroundSeparationLikelihoodLow;
- (float)centerDeltaCanonicalDisparity;
- (float)closeDisparityPercentile;
- (float)deltaCanonicalDisparity;
- (float)deltaDepth;
- (float)depthPixelBufferMaxLeftOcclusionDisparityChange;
- (float)depthPixelBufferMaxRightOcclusionDisparityChange;
- (float)depthPixelBufferOffset;
- (float)depthPixelBufferScale;
- (int)depthPixelBufferXPadding;
- (int)depthPixelBufferYPadding;
- (float)disparityFilterColorStd;
- (float)disparityFilterUpdateRate;
- (int)disparityPushingBackgroundToForegroundDisparityDifference;
- (float)disparityStereoBaselineMeters;
- (float)disparityStereoFocalLengthPixels;
- (float)dsCanonicalHighScale;
- (float)dsCanonicalHighThld;
- (float)dsCanonicalLowScale;
- (float)dsCanonicalLowThld;
- (float)faceSizeRatioInFocus;
- (float)focusThresholdHardness;
- (float)focusUpdateRateFast;
- (float)focusUpdateRateSlow;
- (float)foregroundPercentile;
- (float)guidedFilterMinDistToDeweight;
- (float)guidedFilterUnconfidentWeight;
- (int)invalidDisparityRatioStatsWindowSize;
- (float)invalidDisparityRatioUpdateRate;
- (float)mattingUpdateRate;
- (float)mattingUpdateRateFast;
- (float)maxDeltaCanonicalDisparity;
- (float)maxDisparityFillingDistFromForeground;
- (float)maxDisparityFillingInconsistency;
- (int)maxDistToPushDisparityEdgesFwd;
- (int)maxDistToPushDisparityEdgesRev;
- (float)minDeltaCanonicalDisparity;
- (bool)modulateFocalRatio;
- (float)referenceDisparity;
- (int)relightDisplayMode;
- (bool)relightMarkFaceCenter;
- (bool)relightOverlayModel;
- (bool)relightSkipAlpha;
- (float)renderingDisparityAtInfinity;
- (float)renderingDisparityBlurRadius;
- (float)renderingDisparityUpdateRate;
- (float)renderingInvalidDisparityFillValue;
- (float)renderingLensFocalLength;
- (float)sdofStateMachineIntensityIncrement;
- (double)sdofStateMachineMaxOrientationDifference;
- (void)setAlphaCoeffFilterColorStd:(float)arg1;
- (void)setAlphaCoeffFilterColorStdFast:(float)arg1;
- (void)setAlphaContrastExponent:(float)arg1;
- (void)setAlphaGammaExponent:(float)arg1;
- (void)setAlphaGuidedFilterEps:(float)arg1;
- (void)setAlphaMaxLaplacian:(float)arg1;
- (void)setBackgroundDisparityStatsWindowSize:(int)arg1;
- (void)setBackgroundDisparityUpdateRate:(float)arg1;
- (void)setBackgroundSeparationLikelihoodHigh:(float)arg1;
- (void)setBackgroundSeparationLikelihoodLow:(float)arg1;
- (void)setCenterDeltaCanonicalDisparity:(float)arg1;
- (void)setCloseDisparityPercentile:(float)arg1;
- (void)setDeltaCanonicalDisparity:(float)arg1;
- (void)setDeltaDepth:(float)arg1;
- (void)setDepthPixelBufferMaxLeftOcclusionDisparityChange:(float)arg1;
- (void)setDepthPixelBufferMaxRightOcclusionDisparityChange:(float)arg1;
- (void)setDepthPixelBufferOffset:(float)arg1;
- (void)setDepthPixelBufferScale:(float)arg1;
- (void)setDepthPixelBufferXPadding:(int)arg1;
- (void)setDepthPixelBufferYPadding:(int)arg1;
- (void)setDisparityFilterColorStd:(float)arg1;
- (void)setDisparityFilterUpdateRate:(float)arg1;
- (void)setDisparityPushingBackgroundToForegroundDisparityDifference:(int)arg1;
- (void)setDisparityStereoBaselineMeters:(float)arg1;
- (void)setDisparityStereoFocalLengthPixels:(float)arg1;
- (void)setDsCanonicalHighScale:(float)arg1;
- (void)setDsCanonicalHighThld:(float)arg1;
- (void)setDsCanonicalLowScale:(float)arg1;
- (void)setDsCanonicalLowThld:(float)arg1;
- (void)setFaceSizeRatioInFocus:(float)arg1;
- (void)setFocusThresholdHardness:(float)arg1;
- (void)setFocusUpdateRateFast:(float)arg1;
- (void)setFocusUpdateRateSlow:(float)arg1;
- (void)setForegroundPercentile:(float)arg1;
- (void)setGuidedFilterMinDistToDeweight:(float)arg1;
- (void)setGuidedFilterUnconfidentWeight:(float)arg1;
- (void)setInvalidDisparityRatioStatsWindowSize:(int)arg1;
- (void)setInvalidDisparityRatioUpdateRate:(float)arg1;
- (void)setMattingUpdateRate:(float)arg1;
- (void)setMattingUpdateRateFast:(float)arg1;
- (void)setMaxDeltaCanonicalDisparity:(float)arg1;
- (void)setMaxDisparityFillingDistFromForeground:(float)arg1;
- (void)setMaxDisparityFillingInconsistency:(float)arg1;
- (void)setMaxDistToPushDisparityEdgesFwd:(int)arg1;
- (void)setMaxDistToPushDisparityEdgesRev:(int)arg1;
- (void)setMinDeltaCanonicalDisparity:(float)arg1;
- (void)setModulateFocalRatio:(bool)arg1;
- (void)setReferenceDisparity:(float)arg1;
- (void)setRelightDisplayMode:(int)arg1;
- (void)setRelightMarkFaceCenter:(bool)arg1;
- (void)setRelightOverlayModel:(bool)arg1;
- (void)setRelightSkipAlpha:(bool)arg1;
- (void)setRenderingDisparityAtInfinity:(float)arg1;
- (void)setRenderingDisparityBlurRadius:(float)arg1;
- (void)setRenderingDisparityUpdateRate:(float)arg1;
- (void)setRenderingInvalidDisparityFillValue:(float)arg1;
- (void)setRenderingLensFocalLength:(float)arg1;
- (void)setSdofStateMachineIntensityIncrement:(float)arg1;
- (void)setSdofStateMachineMaxOrientationDifference:(double)arg1;
- (void)setStableBackgroundDisparitySumVariance:(float)arg1;
- (void)setStableInvalidDisparityRatio:(float)arg1;
- (void)setStageLightStageMachineMaxOrientationDifference:(double)arg1;
- (void)setStageLightStateMachineIntensityIncrement:(float)arg1;
- (void)setUnstableBackgroundDisparitySumVariance:(float)arg1;
- (void)setUnstableInvalidDisparityRatio:(float)arg1;
- (float)stableBackgroundDisparitySumVariance;
- (float)stableInvalidDisparityRatio;
- (double)stageLightStageMachineMaxOrientationDifference;
- (float)stageLightStateMachineIntensityIncrement;
- (float)unstableBackgroundDisparitySumVariance;
- (float)unstableInvalidDisparityRatio;
- (void)validate;
- (unsigned long long)videoPipelineDevice;

@end