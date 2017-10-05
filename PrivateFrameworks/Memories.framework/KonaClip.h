/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface KonaClip : NSObject <KonaClipMiroAutoEditAdditions, MiroClip, MiroClip_Shim, NSCopying, SpeedRangeDelegate> {
    KonaClip * _altClip;
    ClipBackground * _clipBackground;
    unsigned int  _filterEffectSeed;
    bool  _isAltClip;
    float  _sourceDuration;
    float  _sourceStartTime;
    SpeedRanges * _speedRanges;
    TitleDefinition * _titleDefinition;
    NSString * _uuid;
    long long  anchorItemIndex;
    NSMutableDictionary * m_clipDict;
    bool  placeholder;
    int  selectionEnd;
    int  selectionStart;
    bool  showActivity;
    bool  transitionChanged;
}

@property (nonatomic, retain) KonaClip *altClip;
@property (nonatomic, retain) KonaClip *anchorItem;
@property (nonatomic) long long anchorItemIndex;
@property (nonatomic) int anchorLocalOffset;
@property (nonatomic) int anchorTargetOffset;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, retain) NSString *audioArtist;
@property (nonatomic) bool audioEnabled;
@property (nonatomic) int audioEndOffset;
@property (nonatomic) int audioFadeInDuration;
@property (nonatomic) int audioFadeOutDuration;
@property (nonatomic) int audioStartOffset;
@property (nonatomic, retain) NSString *audioTitle;
@property (nonatomic) float audioVolume;
@property (nonatomic, retain) ClipBackground *clipBackground;
@property (nonatomic, readonly) int clipType;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int desiredDuration;
@property (nonatomic) int duration;
@property (nonatomic, retain) PVEffect *filterEffect;
@property (nonatomic, readonly) unsigned int filterEffectSeed;
@property (nonatomic) unsigned int filterEffectSeed;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic) int freezeFrame;
@property (nonatomic, readonly) bool hasSelection;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *identifierURL;
@property (nonatomic) bool isAltClip;
@property (nonatomic, readonly) bool isSlomo;
@property (nonatomic, readonly) int maxDur;
@property (nonatomic) int maxDuration;
@property (nonatomic, readonly) int maxEnd;
@property (nonatomic, readonly) int minStart;
@property (nonatomic, retain) Movie *movie;
@property (nonatomic, retain) NSDictionary *movieMapLocation;
@property (nonatomic, retain) NSURL *movieURL;
@property (nonatomic, readonly) NSArray *multiUpContainedClips;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSizeWithTransform;
@property (nonatomic, retain) KonaClip *nextTransition;
@property (nonatomic) bool placeholder;
@property (nonatomic, retain) KonaClip *precisionSourceClip;
@property (nonatomic) int precisionTrack;
@property (nonatomic) bool projectMovie;
@property (nonatomic, readonly) int rawSourceDuration;
@property (nonatomic) float rotation;
@property (nonatomic) float scaleFactor;
@property (nonatomic) int selectionEnd;
@property (nonatomic) int selectionStart;
@property (nonatomic) bool showActivity;
@property (nonatomic, readonly) float sourceDuration;
@property (nonatomic) float sourceDuration;
@property (nonatomic, readonly) float sourceStartTime;
@property (nonatomic) float sourceStartTime;
@property (nonatomic) float speed;
@property (nonatomic, readonly) SpeedRanges *speedRanges;
@property (nonatomic, retain) SpeedRanges *speedRanges;
@property (nonatomic) int startOffset;
@property (nonatomic) int startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) TitleDefinition *titleDefinition;
@property (nonatomic, readonly) int titleDuration;
@property (nonatomic, readonly) PVEffect *titleEffect;
@property (nonatomic) bool transitionChanged;
@property (nonatomic) int transitionEatLeft;
@property (nonatomic) int transitionEatRight;
@property (nonatomic) float translateX;
@property (nonatomic) float translateY;
@property (nonatomic) int userEditedSize;
@property (nonatomic) bool userEditing;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) VideoMovie *videoMovie;

+ (bool)audioEnabledByDefault;
+ (Class)classForClipType:(int)arg1;
+ (id)clip;
+ (id)clipFromPlist:(id)arg1;
+ (id)clipWithAsset:(id)arg1;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (void)_addDefaultKeys;
- (bool)allowsTitle;
- (id)altClip;
- (id)anchorItem;
- (long long)anchorItemIndex;
- (int)anchorLocalOffset;
- (int)anchorTargetOffset;
- (double)aspectRatio;
- (id)asset;
- (id)audioArtist;
- (bool)audioEnabled;
- (int)audioEndOffset;
- (int)audioFadeInDuration;
- (int)audioFadeOutDuration;
- (int)audioStartOffset;
- (id)audioTitle;
- (float)audioVolume;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)arg1;
- (bool)canBeDeleted;
- (bool)canBeDuplicated;
- (void)changedMapFrom:(id)arg1 to:(id)arg2;
- (void)clearSelection;
- (id)clipBackground;
- (bool)clipContentsEqual:(id)arg1;
- (int)clipType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)deepCopyOntoClip:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)description;
- (int)desiredDuration;
- (void)didFinishTrimming;
- (int)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)filterEffect;
- (unsigned int)filterEffectSeed;
- (float)frameRate;
- (int)freezeFrame;
- (void)generateFilterEffectSeed;
- (bool)hasAudioCharacteristic;
- (bool)hasPhotoCharacteristic;
- (bool)hasSelection;
- (bool)hasTitle;
- (bool)hasVisualCharacteristic;
- (unsigned long long)hash;
- (id)identifierURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)initializeFromURL:(id)arg1 asset:(id)arg2;
- (bool)isAltClip;
- (bool)isBackgroundAudio;
- (bool)isBurst;
- (bool)isEqual:(id)arg1;
- (bool)isFreezeFrame;
- (bool)isIris;
- (bool)isMultiUp;
- (bool)isPano;
- (bool)isPrimary;
- (bool)isSlomo;
- (bool)isSpeedAdjustable;
- (bool)isVideoOverlay;
- (id)loadAVAsset;
- (void)loadAVPlayerItemWithCompletionHander:(id /* block */)arg1 progressHandler:(id /* block */)arg2 networkAccessAllowed:(bool)arg3;
- (int)maxDur;
- (int)maxDuration;
- (int)maxEnd;
- (int)minStart;
- (id)movie;
- (id)movieMapLocation;
- (id)movieURL;
- (id)multiUpContainedClips;
- (id)name;
- (struct CGSize { double x1; double x2; })naturalSizeWithTransform;
- (id)nextTransition;
- (int)paddedMaxDur;
- (int)paddedMaxEnd;
- (int)paddedMinStart;
- (bool)placeholder;
- (id)plistRepresentationFromProject:(id)arg1;
- (id)precisionSourceClip;
- (int)precisionTrack;
- (bool)projectMovie;
- (int)rawSourceDuration;
- (float)rotation;
- (float)scaleFactor;
- (int)selectionEnd;
- (int)selectionStart;
- (void)setAltClip:(id)arg1;
- (void)setAnchorItem:(id)arg1;
- (void)setAnchorItemIndex:(long long)arg1;
- (void)setAnchorLocalOffset:(int)arg1;
- (void)setAnchorTargetOffset:(int)arg1;
- (void)setAudioArtist:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioEndOffset:(int)arg1;
- (void)setAudioFadeInDuration:(int)arg1;
- (void)setAudioFadeOutDuration:(int)arg1;
- (void)setAudioStartOffset:(int)arg1;
- (void)setAudioTitle:(id)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setClipBackground:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setCreationDate:(id)arg1;
- (void)setDesiredDuration:(int)arg1;
- (void)setDuration:(int)arg1;
- (void)setFilterEffect:(id)arg1;
- (void)setFilterEffectSeed:(unsigned int)arg1;
- (void)setFreezeFrame:(int)arg1;
- (void)setIdentifierURL:(id)arg1;
- (void)setIsAltClip:(bool)arg1;
- (void)setMaxDuration:(int)arg1;
- (void)setMovie:(id)arg1;
- (void)setMovieMapLocation:(id)arg1;
- (void)setMovieURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNextTransition:(id)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setPrecisionSourceClip:(id)arg1;
- (void)setPrecisionTrack:(int)arg1;
- (void)setProjectMovie:(bool)arg1;
- (void)setRotation:(float)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setSelectionEnd:(int)arg1;
- (void)setSelectionStart:(int)arg1;
- (void)setShowActivity:(bool)arg1;
- (void)setSourceDuration:(float)arg1;
- (void)setSourceStartTime:(float)arg1;
- (void)setSpeed:(float)arg1;
- (void)setSpeedRanges:(id)arg1;
- (void)setStartOffset:(int)arg1;
- (void)setStartTime:(int)arg1;
- (void)setTitleDefinition:(id)arg1;
- (void)setTransitionChanged:(bool)arg1;
- (void)setTransitionEatLeft:(int)arg1;
- (void)setTransitionEatRight:(int)arg1;
- (void)setTranslateX:(float)arg1;
- (void)setTranslateY:(float)arg1;
- (void)setUserEditedSize:(int)arg1;
- (void)setUserEditing:(bool)arg1;
- (bool)showActivity;
- (float)sourceDuration;
- (float)sourceStartTime;
- (float)speed;
- (id)speedRanges;
- (void)stampNewUUID;
- (int)startOffset;
- (int)startTime;
- (id)titleDefinition;
- (int)titleDuration;
- (id)titleEffect;
- (int)titleStartTimeForClipStartTime:(int)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform:(struct CGSize { double x1; double x2; })arg1 fillDest:(bool)arg2;
- (bool)transitionChanged;
- (int)transitionEatLeft;
- (int)transitionEatRight;
- (float)translateX;
- (float)translateY;
- (void)updateSourceCaches;
- (int)userEditedSize;
- (bool)userEditing;
- (id)uuid;
- (void)validateEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inProject:(id)arg2;
- (id)validationInformation;
- (id)videoMovie;

@end
