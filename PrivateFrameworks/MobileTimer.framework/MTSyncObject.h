/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncObject : NSObject <MTSerializable> {
    long long  _changeType;
}

@property (nonatomic) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;

+ (id)_stringFromChangeType:(long long)arg1;
+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;
+ (int)sequenceNumber;

- (long long)changeType;
- (id)createProtobufWithOptions:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastModifiedDate;
- (id)objectIdentifier;
- (id)sequencer;
- (void)setChangeType:(long long)arg1;
- (id)syncId;

@end
