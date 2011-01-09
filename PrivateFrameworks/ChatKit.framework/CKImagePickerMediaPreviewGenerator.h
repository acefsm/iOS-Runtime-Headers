/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDictionary, UIImagePickerController, UIImage, NSData;



@interface CKImagePickerMediaPreviewGenerator : CKMediaPreviewGenerator 
{
    UIImage *_image;
    NSData *_imageData;
    NSDictionary *_editingInfo;
    UIImagePickerController *_imagePickerController;
    struct CGImage { } *_videoPreviewCGImage;
}

@property(retain) UIImagePickerController *imagePickerController;
@property(retain) NSDictionary *editingInfo;
@property(retain) NSData *imageData;
@property(retain) UIImage *image;


- (void)main;
- (void)_generatePreviewOnMainThreadForVideoFile:(id)arg1;
- (void)dealloc;
- (id)imagePickerController;
- (void)setImagePickerController:(id)arg1;
- (id)editingInfo;
- (void)setEditingInfo:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;

@end