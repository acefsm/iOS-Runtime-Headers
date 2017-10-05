/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppDescription : NSObject {
    NSNumber * _adamID;
    NSURL * _appStoreURL;
    NSString * _artworkURLTemplate;
    NSString * _bundleID;
    NSString * _buyParams;
    NSString * _displayName;
    UIImage * _icon;
    NSString * _sellerName;
}

@property (nonatomic, copy) NSNumber *adamID;
@property (nonatomic, copy) NSURL *appStoreURL;
@property (nonatomic, copy) NSString *artworkURLTemplate;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *buyParams;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *sellerName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamID;
- (id)appStoreURL;
- (id)artworkURLTemplate;
- (id)bundleID;
- (id)buyParams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)iconURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sellerName;
- (void)setAdamID:(id)arg1;
- (void)setAppStoreURL:(id)arg1;
- (void)setArtworkURLTemplate:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSellerName:(id)arg1;

@end
