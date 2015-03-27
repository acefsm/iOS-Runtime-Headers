/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@class NSMutableDictionary, NSString, NSURL, UIWindow;

@interface WebApplication : UIApplication <UIApplicationDelegate> {
    NSURL *_lastActiveWebClipURL;
    BOOL _wasSuspendedUnderLock;
    NSMutableDictionary *webAppControllerDictionary;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain) UIWindow * window;

- (id)_currentWebAppController;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationOpenURL:(id)arg1;
- (BOOL)applicationSuspendWithSettings:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)bringToFrontWebAppControllerForWebAppURL:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension:(int)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;

@end