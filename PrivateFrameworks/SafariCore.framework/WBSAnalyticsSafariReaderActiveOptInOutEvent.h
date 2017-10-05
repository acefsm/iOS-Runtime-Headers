/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsSafariReaderActiveOptInOutEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    }  _has;
    int  _state;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int state;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end