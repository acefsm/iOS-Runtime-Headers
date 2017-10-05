/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *deviceIDs;
@property (nonatomic, readonly) unsigned int errorCode;

- (id)deviceIDs;
- (unsigned int)errorCode;
- (id)initWithDeviceIDs:(id)arg1 errorCode:(unsigned int)arg2;
- (unsigned long long)type;

@end
