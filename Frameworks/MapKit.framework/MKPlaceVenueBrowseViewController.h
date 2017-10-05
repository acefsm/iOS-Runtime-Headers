/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceVenueBrowseViewController : UIViewController <MKModuleViewControllerProtocol, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _browseItems;
    UIColor * _cellTitleLabelTextColor;
    MKVenuesBrowseCollectionView * _collectionView;
    NSLayoutConstraint * _collectionViewBottomConstraint;
    <GEOVenueComponentIdentifier> * _componentIdentifier;
    <MKPlaceVenueBrowseViewControllerDelegate> * _delegate;
    MKMapItem * _mapItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredCellSize;
    UIFont * _preferredCellTitleLabelFont;
    unsigned long long  _venueID;
}

@property (nonatomic, retain) NSArray *browseItems;
@property (nonatomic, retain) UIColor *cellTitleLabelTextColor;
@property (nonatomic, retain) MKVenuesBrowseCollectionView *collectionView;
@property (nonatomic, retain) NSLayoutConstraint *collectionViewBottomConstraint;
@property (nonatomic, retain) <GEOVenueComponentIdentifier> *componentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceVenueBrowseViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredCellSize;
@property (nonatomic, retain) UIFont *preferredCellTitleLabelFont;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long venueID;

+ (bool)canDisplayForMapItem:(id)arg1;

- (void).cxx_destruct;
- (void)_ppt_postNotificationName:(id)arg1 object:(id)arg2;
- (id)browseItems;
- (id)cellTitleLabelTextColor;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewBottomConstraint;
- (double)collectionViewBottomPadding;
- (id)componentIdentifier;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)delegate;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (int)placeCardTypeForAnalytics;
- (struct CGSize { double x1; double x2; })preferredCellSize;
- (id)preferredCellTitleLabelFont;
- (void)setBrowseItems:(id)arg1;
- (void)setCellTitleLabelTextColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewBottomConstraint:(id)arg1;
- (void)setComponentIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPreferredCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredCellTitleLabelFont:(id)arg1;
- (void)setVenueID:(unsigned long long)arg1;
- (void)setupCollectionView;
- (void)updateCellTitleLabelTextColor;
- (unsigned long long)venueID;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
