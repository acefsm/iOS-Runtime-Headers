/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebAppViewController : _UIRemoteViewController <SFWebAppRemoteViewControllerProtocol> {
    <_SFWebAppViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFWebAppViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)didChangeLoadingState:(bool)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(bool)arg2;
- (void)didFinishInitialLoad:(bool)arg1;
- (void)didLoadWebView;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)loadWebAppWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)willDismissServiceViewController;
- (void)willOpenURLInHostApplication:(id)arg1;

@end
