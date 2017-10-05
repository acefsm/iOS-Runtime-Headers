/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileServiceProfile : MCProfile {
    NSString * _URLString;
    NSArray * _bogusPayloads;
    id  _challenge;
    bool  _confirmInstallation;
    NSArray * _deviceAttributes;
    NSData * _enrollmentIdentityPersistentID;
}

@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, readonly, retain) id challenge;
@property (nonatomic, readonly) bool confirmInstallation;
@property (nonatomic, readonly, retain) NSArray *deviceAttributes;
@property (nonatomic, retain) NSData *enrollmentIdentityPersistentID;

- (void).cxx_destruct;
- (id)URLString;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)challenge;
- (bool)confirmInstallation;
- (id)description;
- (id)deviceAttributes;
- (id)enrollmentIdentityPersistentID;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(bool)arg2 outError:(id*)arg3;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)payloads;
- (void)setEnrollmentIdentityPersistentID:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)stubDictionary;

@end
