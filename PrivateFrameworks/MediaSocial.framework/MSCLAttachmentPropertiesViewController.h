/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachmentPropertiesViewController : SKUIViewController <MSCLAttachmentPropertiesTableViewSectionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    MSCLAlbumSelectionViewController * _albumSelectionViewController;
    long long  _artistNameLength;
    MSCLAttachment * _attachment;
    SKUIMediaSocialAuthor * _author;
    NSArray * _authorAlbumItems;
    MSCLLoadAuthorAlbumsOperation * _authorAlbumsOperation;
    MSCLConfiguration * _configuration;
    <MSCLAttachmentPropertiesDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    UIImagePickerController * _imagePickerController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    UIPopoverPresentationController * _popoverPresentationController;
    NSMutableArray * _sections;
    UITableView * _tableView;
    long long  _titleLength;
    MSCLTokenTextViewTableAssistant * _tokenTextViewAssistant;
}

@property (nonatomic, readonly, copy) MSCLAttachment *attachment;
@property (nonatomic, copy) SKUIMediaSocialAuthor *author;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLAttachmentPropertiesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (void)_keyboardChangeNotification:(id)arg1;
- (void)_layoutTableView;
- (void)_presentCoverImageEditingOptionsForIndexPath:(id)arg1;
- (void)_presentCoverImagePickerControllerForIndexPath:(id)arg1;
- (void)_pushAlbumSelectionViewController;
- (void)_pushCategorySelectionViewController;
- (void)_reloadSectionWithType:(long long)arg1;
- (void)_setAuthorAlbumItems:(id)arg1;
- (void)_setCoverImage:(id)arg1;
- (void)_updateDoneButton;
- (id)attachment;
- (id)author;
- (void)dealloc;
- (id)delegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithAttachment:(id)arg1 configuration:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewSection:(id)arg1 artistLengthChanged:(long long)arg2;
- (void)tableViewSection:(id)arg1 titleLengthChanged:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
