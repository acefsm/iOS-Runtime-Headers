/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingContentItem : MPContentItem {
    <MPNowPlayingContentItemArtworkDataSource> * _artworkDataSource;
    <MPNowPlayingContentItemDescriptionDataSource> * _descriptionDataSource;
    <MPNowPlayingContentItemLanguageOptionDataSource> * _languageOptionDataSource;
    <MPNowPlayingContentItemLyricsDataSource> * _lyricsDataSource;
    void * _mediaRemoteDeltaRequest;
    NSDictionary * _nowPlayingInfo;
}

@property (nonatomic) void*_mediaRemoteDeltaRequest;
@property (nonatomic, copy) NSString *albumArtistName;
@property (nonatomic, copy) NSString *albumName;
@property (getter=isAlwaysLiveItem, nonatomic) bool alwaysLiveItem;
@property (nonatomic, retain) MPMediaItemArtwork *artwork;
@property (nonatomic) <MPNowPlayingContentItemArtworkDataSource> *artworkDataSource;
@property (nonatomic, copy) NSString *artworkIdentifier;
@property (nonatomic, readonly) NSDictionary *auxiliaryNowPlayingInfo;
@property (nonatomic, copy) NSArray *availableLanguageOptions;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSDictionary *collectionInfo;
@property (nonatomic, copy) NSString *composerName;
@property (nonatomic, copy) NSArray *currentLanguageOptions;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic) <MPNowPlayingContentItemDescriptionDataSource> *descriptionDataSource;
@property (nonatomic, copy) NSDictionary *deviceSpecificUserInfo;
@property (nonatomic, copy) NSString *directorName;
@property (nonatomic) long long discNumber;
@property (nonatomic) double duration;
@property (nonatomic) long long editingStyleFlags;
@property (nonatomic) double elapsedTime;
@property (nonatomic, readonly) double elapsedTimeTimestamp;
@property (nonatomic) long long episodeNumber;
@property (getter=isExplicitItem, nonatomic) bool explicitItem;
@property (nonatomic, copy) NSString *externalContentIdentifier;
@property (nonatomic, copy) NSString *genreName;
@property (nonatomic, copy) NSString *info;
@property (nonatomic) <MPNowPlayingContentItemLanguageOptionDataSource> *languageOptionDataSource;
@property (nonatomic, copy) NSString *localizedContentRating;
@property (nonatomic, copy) MPNowPlayingInfoLyricsItem *lyrics;
@property (nonatomic) <MPNowPlayingContentItemLyricsDataSource> *lyricsDataSource;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic) unsigned long long numberOfChildren;
@property (nonatomic) long long playCount;
@property (nonatomic) float playbackRate;
@property (nonatomic) long long playlistType;
@property (nonatomic, copy) NSString *profileIdentifier;
@property (nonatomic, copy) NSString *queueIdentifier;
@property (nonatomic, copy) NSString *radioStationName;
@property (nonatomic, copy) NSString *radioStationStringIdentifier;
@property (nonatomic) long long radioStationType;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic) long long seasonNumber;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, copy) NSString *seriesName;
@property (getter=isSharableItem, nonatomic) bool sharableItem;
@property (nonatomic) double startTime;
@property (getter=isSteerable, nonatomic) bool steerable;
@property (nonatomic) long long storeAlbumID;
@property (nonatomic) long long storeArtistID;
@property (nonatomic) long long storeID;
@property (nonatomic) long long storeSubscriptionID;
@property (nonatomic) long long totalDiscCount;
@property (nonatomic) long long totalTrackCount;
@property (nonatomic, copy) NSString *trackArtistName;
@property (nonatomic) long long trackNumber;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)shouldPushArtworkData;

- (void).cxx_destruct;
- (id)_changeDictionary;
- (void*)_mediaRemoteDeltaRequest;
- (id)albumArtistName;
- (id)albumName;
- (id)artworkDataSource;
- (id)artworkIdentifier;
- (id)auxiliaryNowPlayingInfo;
- (id)availableLanguageOptions;
- (id)collectionIdentifier;
- (id)collectionInfo;
- (id)composerName;
- (id)currentLanguageOptions;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (id)descriptionDataSource;
- (id)deviceSpecificUserInfo;
- (id)directorName;
- (long long)discNumber;
- (double)duration;
- (long long)editingStyleFlags;
- (double)elapsedTime;
- (double)elapsedTimeTimestamp;
- (long long)episodeNumber;
- (id)externalContentIdentifier;
- (id)genreName;
- (id)info;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateArtwork;
- (void)invalidateDescription;
- (void)invalidateLanguageOptions;
- (void)invalidateLyrics;
- (bool)isAlwaysLiveItem;
- (bool)isExplicitItem;
- (bool)isSharableItem;
- (bool)isSteerable;
- (id)languageOptionDataSource;
- (id)localizedContentRating;
- (id)lyrics;
- (id)lyricsDataSource;
- (unsigned long long)mediaType;
- (id)nowPlayingInfo;
- (unsigned long long)numberOfChildren;
- (long long)playCount;
- (float)playbackRate;
- (long long)playlistType;
- (id)profileIdentifier;
- (id)queueIdentifier;
- (id)radioStationName;
- (id)radioStationStringIdentifier;
- (long long)radioStationType;
- (id)releaseDate;
- (long long)seasonNumber;
- (id)sections;
- (id)seriesName;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setAlwaysLiveItem:(bool)arg1;
- (void)setArtwork:(id)arg1;
- (void)setArtworkDataSource:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setCollectionInfo:(id)arg1;
- (void)setComposerName:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setDescriptionDataSource:(id)arg1;
- (void)setDeviceSpecificUserInfo:(id)arg1;
- (void)setDirectorName:(id)arg1;
- (void)setDiscNumber:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditingStyleFlags:(long long)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElapsedTime:(double)arg1 playbackRate:(double)arg2;
- (void)setEpisodeNumber:(long long)arg1;
- (void)setExplicitItem:(bool)arg1;
- (void)setExternalContentIdentifier:(id)arg1;
- (void)setGenreName:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLanguageOptionDataSource:(id)arg1;
- (void)setLocalizedContentRating:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setLyricsDataSource:(id)arg1;
- (void)setMediaType:(unsigned long long)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setNumberOfChildren:(unsigned long long)arg1;
- (void)setPlayCount:(long long)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlaylistType:(long long)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRadioStationName:(id)arg1;
- (void)setRadioStationStringIdentifier:(id)arg1;
- (void)setRadioStationType:(long long)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSeasonNumber:(long long)arg1;
- (void)setSections:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setSharableItem:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSteerable:(bool)arg1;
- (void)setStoreAlbumID:(long long)arg1;
- (void)setStoreArtistID:(long long)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setStoreSubscriptionID:(long long)arg1;
- (void)setTotalDiscCount:(long long)arg1;
- (void)setTotalTrackCount:(long long)arg1;
- (void)setTrackArtistName:(id)arg1;
- (void)setTrackNumber:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_mediaRemoteDeltaRequest:(void*)arg1;
- (double)startTime;
- (long long)storeAlbumID;
- (long long)storeArtistID;
- (long long)storeID;
- (long long)storeSubscriptionID;
- (long long)totalDiscCount;
- (long long)totalTrackCount;
- (id)trackArtistName;
- (long long)trackNumber;
- (id)userInfo;

@end
