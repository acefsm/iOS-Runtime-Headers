/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXNotificationHandler : NSObject {
    id /* block */  _dispatcher;
    NSString * _notificationName;
    unsigned long long  _observerIdentifier;
    id  _target;
    bool  _valid;
}

@property (setter=_setDispatcher:, nonatomic, copy) id /* block */ _dispatcher;
@property (setter=_setNotificationName:, nonatomic, retain) NSString *_notificationName;
@property (setter=_setTarget:, nonatomic, retain) id _target;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)_safelyGetObserverForIdentifier:(unsigned long long)arg1;
+ (unsigned long long)_safelyRegisterObserver:(id)arg1;
+ (void)_safelyRemoveObserverForIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id /* block */)_dispatcher;
- (void)_handleNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3;
- (id)_notificationName;
- (id)_notificationTypeDescription;
- (void)_setDispatcher:(id /* block */)arg1;
- (void)_setNotificationName:(id)arg1;
- (void)_setTarget:(id)arg1;
- (void)_startObserving;
- (void)_stopObserving;
- (id)_target;
- (void)dealloc;
- (id)description;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id /* block */)arg3;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(id /* block */)arg3 startObserving:(bool)arg4;
- (id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3;
- (void)invalidate;
- (bool)isValid;
- (void)processHandler:(SEL)arg1;

@end
