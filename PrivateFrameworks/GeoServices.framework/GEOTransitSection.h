/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSection : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _actionSheetArtworkIndexs;
    NSString * _actionSheetName;
    bool  _disableAlightNotifications;
    struct { 
        unsigned int nextOptionsIndex : 1; 
        unsigned int disableAlightNotifications : 1; 
    }  _has;
    int  _nextOptionsIndex;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _routeDetailsArtworkIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _stepIndexs;
}

@property (nonatomic, readonly) unsigned int*actionSheetArtworkIndexs;
@property (nonatomic, readonly) unsigned long long actionSheetArtworkIndexsCount;
@property (nonatomic, retain) NSString *actionSheetName;
@property (nonatomic) bool disableAlightNotifications;
@property (nonatomic, readonly) bool hasActionSheetName;
@property (nonatomic) bool hasDisableAlightNotifications;
@property (nonatomic) bool hasNextOptionsIndex;
@property (nonatomic) int nextOptionsIndex;
@property (nonatomic, readonly) unsigned int*routeDetailsArtworkIndexs;
@property (nonatomic, readonly) unsigned long long routeDetailsArtworkIndexsCount;
@property (nonatomic, readonly) unsigned int*stepIndexs;
@property (nonatomic, readonly) unsigned long long stepIndexsCount;

- (void).cxx_destruct;
- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)actionSheetArtworkIndexs;
- (unsigned long long)actionSheetArtworkIndexsCount;
- (id)actionSheetName;
- (void)addActionSheetArtworkIndex:(unsigned int)arg1;
- (void)addRouteDetailsArtworkIndex:(unsigned int)arg1;
- (void)addStepIndex:(unsigned int)arg1;
- (void)clearActionSheetArtworkIndexs;
- (void)clearRouteDetailsArtworkIndexs;
- (void)clearStepIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)disableAlightNotifications;
- (bool)hasActionSheetName;
- (bool)hasDisableAlightNotifications;
- (bool)hasNextOptionsIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nextOptionsIndex;
- (bool)readFrom:(id)arg1;
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)routeDetailsArtworkIndexs;
- (unsigned long long)routeDetailsArtworkIndexsCount;
- (void)setActionSheetArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setActionSheetName:(id)arg1;
- (void)setDisableAlightNotifications:(bool)arg1;
- (void)setHasDisableAlightNotifications:(bool)arg1;
- (void)setHasNextOptionsIndex:(bool)arg1;
- (void)setNextOptionsIndex:(int)arg1;
- (void)setRouteDetailsArtworkIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStepIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)stepIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)stepIndexs;
- (unsigned long long)stepIndexsCount;
- (void)writeTo:(id)arg1;

@end