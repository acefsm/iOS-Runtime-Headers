/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableDictionary, WebInspectorServer;

@interface WebInspectorServerWebViewConnectionController : NSObject  {
    WebInspectorServer *_server;
    NSMutableDictionary *_openConnections;
    BOOL _hasScheduledPush;
}


- (void)_receivedConnectionDied:(id)arg1;
- (void)_receivedIndicate:(id)arg1;
- (void)_receivedGetListing:(id)arg1;
- (void)_receivedDidClose:(id)arg1;
- (void)_receivedSetup:(id)arg1;
- (void)pushListing:(id)arg1;
- (void)_pushListing:(id)arg1;
- (id)_listingForWebView:(id)arg1 pageId:(id)arg2 registry:(id)arg3;
- (void)receivedMessage:(id)arg1 userInfo:(id)arg2;
- (void)closeAllConnections;
- (void)sendMessageToFrontend:(id)arg1 userInfo:(id)arg2;
- (void)connectionClosing:(id)arg1;
- (void)pushListing;
- (void)_receivedData:(id)arg1;
- (void)dealloc;
- (id)initWithServer:(id)arg1;

@end