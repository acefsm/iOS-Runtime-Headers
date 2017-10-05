/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatistics : NSObject {
    NSMutableSet * _children;
    NSString * _key;
    double  _sampleRate;
    double  _sampleValue;
}

@property (nonatomic) double sampleRate;

+ (id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3;
+ (id)alertButtonTapCount;
+ (id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2;
+ (id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2;
+ (unsigned long long)currentTime;
+ (id)feedbackEngineActivationCountWithSuffix:(id)arg1;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)arg1;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)arg1;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)arg1;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1;
+ (id)maxForce;
+ (id)pinchGestureCount;
+ (id)previewInteractionAlertPresentationCount;
+ (id)previewInteractionPeekCount;
+ (id)previewInteractionPeekDuration;
+ (id)previewInteractionPeekForce;
+ (id)previewInteractionPopCount;
+ (id)previewInteractionPopForce;
+ (id)previewInteractionTapCount;
+ (id)recentsInputViewItemSelectedCount;
+ (id)recentsInputViewNewEntryCount;
+ (id)recentsInputViewNumberOfItems;
+ (id)recentsInputViewPresentationCount;
+ (id)scrollBounceCount;
+ (id)scrollViewVerticalVelocityInteractive;
+ (id)scrollViewVerticalVelocityNoninteractive;
+ (id)scrubberUsageCount;
+ (id)scrubberUsageTime;
+ (id)zoomGestureCount;

- (void).cxx_destruct;
- (void)_addChildStatistic:(id)arg1;
- (void)_incrementValueBy:(long long)arg1;
- (id)_key;
- (void)_recordDistributionTime:(unsigned long long)arg1;
- (void)_recordDistributionValue:(double)arg1;
- (void)_removeChildStatistic:(id)arg1;
- (void)_resetDistribution;
- (void)_resetDistributionToValue:(double)arg1;
- (void)_resetValue;
- (void)_setValue:(long long)arg1;
- (bool)_shouldSample;
- (id)description;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;
- (void)randomizeSampleValue;
- (double)sampleRate;
- (void)setSampleRate:(double)arg1;

@end
