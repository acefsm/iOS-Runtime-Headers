/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding> {
    CKRecordID * _recordID;
    NSString * _recordType;
}

@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2;
- (id)recordID;
- (id)recordType;

@end
