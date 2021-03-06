/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface LogDumpUtility : NSObject

+ (bool)createDirectory:(id)arg1;
+ (id)filesSortedByTimestamp:(id)arg1;
+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (id)logFilename:(int)arg1 dumpID:(unsigned int)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5;
+ (void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2;
+ (void)removeOldFilesInDefaultLogDumpPath;

@end
