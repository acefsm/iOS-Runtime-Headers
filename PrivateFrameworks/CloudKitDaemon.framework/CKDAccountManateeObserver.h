/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAccountManateeObserver : NSObject {
    NSError * _lastCDPError;
    long long  _manateeAvailableForLoggedInAccount;
    NSObject<OS_dispatch_queue> * _statusQueue;
}

@property (nonatomic, copy) NSError *lastCDPError;
@property (setter=_lockedSetManateeAvailableForLoggedInAccount:, nonatomic) long long manateeAvailableForLoggedInAccount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusQueue;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (long long)_fetchManateeAvailability:(id*)arg1;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)_lockedSetManateeAvailableForLoggedInAccount:(long long)arg1;
- (void)handleUpdateNotificationWithAvailability:(id)arg1;
- (id)init;
- (bool)isManateeAvailable:(id*)arg1;
- (id)lastCDPError;
- (long long)manateeAvailableForLoggedInAccount;
- (void)setLastCDPError:(id)arg1;
- (void)setStatusQueue:(id)arg1;
- (void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(id /* block */)arg1;
- (id)statusQueue;

@end
