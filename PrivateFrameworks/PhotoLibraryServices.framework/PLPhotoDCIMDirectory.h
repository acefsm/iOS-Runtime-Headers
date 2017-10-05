/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCIMDirectory : NSObject {
    struct flock { long long x1; long long x2; int x3; short x4; short x5; } * _dcimDirectoryLock;
    int  _dcimDirectoryLockDescriptor;
    NSString * _dcimPath;
    int  _lastUsedDirectoryNumber;
    NSString * _miscPath;
    NSString * _posterImagePath;
    NSMutableArray * _topLevelDirectories;
    struct __CFDictionary { } * _topLevelDirectoriesByNumber;
    struct __CFSet { } * _unusableTopLevelDirectoryNumbers;
    NSMutableDictionary * _userInfo;
    bool  _userInfoDidChange;
}

- (id)_userInfoPath;
- (void)clearDCFDirectories;
- (id)dcfDirectories;
- (id)dcimPath;
- (void)dealloc;
- (bool)hasChangedExternally;
- (id)initWithDCIMPath:(id)arg1;
- (void)lockDirectory;
- (id)miscPath;
- (id)nextAvailableDirectory;
- (id)posterImagePath;
- (void)recreateInfoPlist;
- (void)reloadUserInfo;
- (void)saveUserInfo;
- (void)setHasChangedExternally:(bool)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)unlockDirectory;
- (id)userInfo;
- (id)userInfoObjectForKey:(id)arg1;

@end
