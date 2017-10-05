/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying> {
    NSString * _applicationIdentifier;
    NSString * _requestIdentifier;
    HDCodableWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic, readonly) bool hasApplicationIdentifier;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, readonly) bool hasWorkoutConfiguration;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, retain) HDCodableWorkoutConfiguration *workoutConfiguration;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApplicationIdentifier;
- (bool)hasRequestIdentifier;
- (bool)hasWorkoutConfiguration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (id)workoutConfiguration;
- (void)writeTo:(id)arg1;

@end
