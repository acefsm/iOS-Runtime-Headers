/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSString;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {
    NSDictionary *_userInfo;
}

@property(readonly) int actionType;
@property(readonly) NSString * alertBodyString;
@property(readonly) NSString * alertCancelString;
@property(readonly) NSString * alertOKString;
@property(readonly) NSString * alertTitleString;
@property(readonly) id badgeValue;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSDictionary * notificationUserInfo;
@property(readonly) NSString * soundFileName;
@property(readonly) Class superclass;

- (id)_valueForAlertKey:(id)arg1;
- (int)actionType;
- (id)alertBodyString;
- (id)alertCancelString;
- (id)alertOKString;
- (id)alertTitleString;
- (id)badgeValue;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)notificationUserInfo;
- (id)soundFileName;
- (id)valueForKey:(id)arg1;

@end