/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACAudioRouteBuffer : PBCodable <NSCopying> {
    struct { 
        unsigned int routeSubtype : 1; 
        unsigned int routeType : 1; 
        unsigned int picked : 1; 
        unsigned int supportsVolumeControl : 1; 
    }  _has;
    bool  _picked;
    NSString * _routeName;
    int  _routeSubtype;
    int  _routeType;
    bool  _supportsVolumeControl;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) bool hasPicked;
@property (nonatomic, readonly) bool hasRouteName;
@property (nonatomic) bool hasRouteSubtype;
@property (nonatomic) bool hasRouteType;
@property (nonatomic) bool hasSupportsVolumeControl;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic) bool picked;
@property (nonatomic, retain) NSString *routeName;
@property (nonatomic) int routeSubtype;
@property (nonatomic) int routeType;
@property (nonatomic) bool supportsVolumeControl;
@property (nonatomic, retain) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPicked;
- (bool)hasRouteName;
- (bool)hasRouteSubtype;
- (bool)hasRouteType;
- (bool)hasSupportsVolumeControl;
- (bool)hasUniqueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)picked;
- (bool)readFrom:(id)arg1;
- (id)routeName;
- (int)routeSubtype;
- (int)routeType;
- (void)setHasPicked:(bool)arg1;
- (void)setHasRouteSubtype:(bool)arg1;
- (void)setHasRouteType:(bool)arg1;
- (void)setHasSupportsVolumeControl:(bool)arg1;
- (void)setPicked:(bool)arg1;
- (void)setRouteName:(id)arg1;
- (void)setRouteSubtype:(int)arg1;
- (void)setRouteType:(int)arg1;
- (void)setSupportsVolumeControl:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)supportsVolumeControl;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
