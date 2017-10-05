/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASAClockDevice : ASAObject

@property (getter=isAlive, nonatomic, readonly) bool alive;
@property (nonatomic, readonly) unsigned int clockDomain;
@property (nonatomic, readonly, copy) NSArray *controlObjectIDs;
@property (nonatomic, readonly, copy) NSArray *controls;
@property (nonatomic, readonly, copy) NSString *deviceUID;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) unsigned int inputLatency;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double nominalSampleRate;
@property (nonatomic, readonly, copy) NSArray *nominalSampleRates;
@property (nonatomic, readonly) unsigned int outputLatency;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly) unsigned int transportType;
@property (nonatomic, readonly) unsigned int zeroTimestampPeriod;

- (unsigned int)clockDomain;
- (id)controlObjectIDs;
- (id)controls;
- (id)coreAudioClassName;
- (id)deviceUID;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (unsigned int)inputLatency;
- (bool)isAlive;
- (bool)isHidden;
- (bool)isRunning;
- (id)manufacturer;
- (id)name;
- (double)nominalSampleRate;
- (id)nominalSampleRates;
- (unsigned int)outputLatency;
- (void)setName:(id)arg1;
- (void)setNominalSampleRate:(double)arg1;
- (unsigned int)transportType;
- (unsigned int)zeroTimestampPeriod;

@end
