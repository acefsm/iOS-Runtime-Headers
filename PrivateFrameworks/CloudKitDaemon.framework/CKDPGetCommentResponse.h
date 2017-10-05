/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentResponse : PBCodable <NSCopying> {
    CKDPComment * _comment;
}

@property (nonatomic, retain) CKDPComment *comment;
@property (nonatomic, readonly) bool hasComment;

- (void).cxx_destruct;
- (id)comment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComment:(id)arg1;
- (void)writeTo:(id)arg1;

@end
