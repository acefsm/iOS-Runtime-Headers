/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLabelLanguage : PBCodable <NSCopying> {
    unsigned int  _endOffset;
    NSString * _languageLocale;
    unsigned int  _startOffset;
}

@property (nonatomic) unsigned int endOffset;
@property (nonatomic, retain) NSString *languageLocale;
@property (nonatomic) unsigned int startOffset;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageLocale;
- (bool)readFrom:(id)arg1;
- (void)setEndOffset:(unsigned int)arg1;
- (void)setLanguageLocale:(id)arg1;
- (void)setStartOffset:(unsigned int)arg1;
- (unsigned int)startOffset;
- (void)writeTo:(id)arg1;

@end
