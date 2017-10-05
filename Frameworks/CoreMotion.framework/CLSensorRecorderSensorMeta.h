/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding> {
    unsigned long long  _dataIdentifier;
    unsigned int  _dataSize;
    int  _dataType;
    unsigned long long  _identifier;
    bool  _movement;
    unsigned int  _offset;
    double  _startTime;
    unsigned long long  _timestamp;
}

@property unsigned long long dataIdentifier;
@property unsigned int dataSize;
@property int dataType;
@property unsigned long long identifier;
@property bool movement;
@property unsigned int offset;
@property double startTime;
@property unsigned long long timestamp;

+ (bool)supportsSecureCoding;

- (unsigned long long)dataIdentifier;
- (unsigned int)dataSize;
- (int)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataType:(int)arg1;
- (bool)movement;
- (unsigned int)offset;
- (void)setDataIdentifier:(unsigned long long)arg1;
- (void)setDataSize:(unsigned int)arg1;
- (void)setDataType:(int)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setMovement:(bool)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (double)startTime;
- (unsigned long long)timestamp;

@end
