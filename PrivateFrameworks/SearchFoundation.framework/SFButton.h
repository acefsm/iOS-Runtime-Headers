/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFButton : NSObject <NSCopying, NSSecureCoding, SFButton> {
    struct { 
        unsigned int isSelected : 1; 
    }  _has;
    SFImage * _image;
    bool  _isSelected;
    SFImage * _selectedImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic) bool isSelected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFImage *selectedImage;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsSelected;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isSelected;
- (id)jsonData;
- (id)selectedImage;
- (void)setImage:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setSelectedImage:(id)arg1;

@end
