/* Generated by RuntimeBrowser.
 */

@protocol _TVRCAudioBuffer <NSObject>

@required

- (void)setGain:(float)arg1;
- (void)setPacketCount:(unsigned long long)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)writeAudioData:(void*)arg1 length:(unsigned long long)arg2;
- (void)writePacketDescriptions:(void*)arg1 length:(unsigned long long)arg2;

@end
