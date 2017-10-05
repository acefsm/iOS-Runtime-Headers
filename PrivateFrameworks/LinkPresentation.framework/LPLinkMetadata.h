/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSString * _appleContentID;
    NSArray * _audios;
    NSString * _creator;
    NSString * _creatorFacebookProfile;
    NSString * _creatorTwitterUsername;
    LPImage * _icon;
    LPIconMetadata * _iconMetadata;
    NSArray * _icons;
    LPImage * _image;
    LPImageMetadata * _imageMetadata;
    NSArray * _images;
    NSString * _itemType;
    NSURL * _originalURL;
    NSURL * _relatedURL;
    NSString * _selectedText;
    NSString * _siteName;
    LPSpecializationMetadata * _specialization;
    NSArray * _streamingVideos;
    NSString * _summary;
    NSString * _title;
    unsigned int  _version;
    LPVideo * _video;
    LPVideoMetadata * _videoMetadata;
    NSArray * _videos;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (nonatomic, copy) NSString *appleContentID;
@property (nonatomic, copy) NSArray *audios;
@property (nonatomic, copy) NSString *creator;
@property (nonatomic, copy) NSString *creatorFacebookProfile;
@property (nonatomic, copy) NSString *creatorTwitterUsername;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, retain) LPIconMetadata *iconMetadata;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, retain) LPImageMetadata *imageMetadata;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic, copy) NSURL *originalURL;
@property (nonatomic, copy) NSURL *relatedURL;
@property (nonatomic, copy) NSString *selectedText;
@property (nonatomic, copy) NSString *siteName;
@property (nonatomic, copy) LPSpecializationMetadata *specialization;
@property (nonatomic, copy) NSArray *streamingVideos;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, retain) LPVideo *video;
@property (nonatomic, retain) LPVideoMetadata *videoMetadata;
@property (nonatomic, copy) NSArray *videos;

+ (id)metadataWithDataRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (unsigned long long)_encodedSize;
- (id)_initWithDictionary:(id)arg1;
- (void)_reduceSizeByDroppingResourcesIfNeeded;
- (id)appleContentID;
- (id)audios;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creator;
- (id)creatorFacebookProfile;
- (id)creatorTwitterUsername;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)iconMetadata;
- (id)icons;
- (id)image;
- (id)imageMetadata;
- (id)images;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemType;
- (id)originalURL;
- (id)relatedURL;
- (id)selectedText;
- (void)setAppleContentID:(id)arg1;
- (void)setAudios:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setCreatorFacebookProfile:(id)arg1;
- (void)setCreatorTwitterUsername:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconMetadata:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageMetadata:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setOriginalURL:(id)arg1;
- (void)setRelatedURL:(id)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setSiteName:(id)arg1;
- (void)setSpecialization:(id)arg1;
- (void)setStreamingVideos:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setVideo:(id)arg1;
- (void)setVideoMetadata:(id)arg1;
- (void)setVideos:(id)arg1;
- (id)siteName;
- (id)specialization;
- (id)streamingVideos;
- (id)summary;
- (id)title;
- (unsigned int)version;
- (id)video;
- (id)videoMetadata;
- (id)videos;

@end
