/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying> {
    NSNumber * _DSID;
    NSData * _SICData;
    NSData * _cloudCredentialsTokenData;
}

@property (nonatomic, copy) NSNumber *DSID;
@property (nonatomic, copy) NSData *SICData;
@property (nonatomic, copy) NSData *cloudCredentialsTokenData;
@property (nonatomic, readonly, copy) NSMutableDictionary *propertyListRepresentation;

- (void).cxx_destruct;
- (id)DSID;
- (id)SICData;
- (id)cloudCredentialsTokenData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDSID:(id)arg1 SICData:(id)arg2;
- (id)propertyListRepresentation;
- (void)setCloudCredentialsTokenData:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setSICData:(id)arg1;

@end
