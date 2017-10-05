/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFAnalyticsLogger : NSObject <NSURLSessionDelegate> {
    unsigned int  _allowInsecureSplunkCert;
    NSArray * _blacklistedEvents;
    NSArray * _blacklistedFields;
    SFAnalyticsLoggerSQLiteStore * _database;
    unsigned int  _disableLogging;
    unsigned int  _disableUploads;
    unsigned int  _ignoreServersMessagesTellingUsToGoAway;
    NSDictionary * _metricsBase;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _secondsBetweenUploads;
    NSURL * _splunkBagURL;
    NSString * _splunkTopicName;
    NSURL * _splunkUploadURL;
}

@property (readonly) bool allowsInsecureSplunkCert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool ignoreServerDisablingMessages;
@property (readonly) NSURL *splunkBagURL;
@property (readonly) NSObject<OS_dispatch_queue> *splunkLoggingQueue;
@property (readonly) NSString *splunkTopicName;
@property (readonly) NSURL *splunkUploadURL;
@property (readonly) Class superclass;

+ (id)databasePath;
+ (long long)fuzzyDaysSinceDate:(id)arg1;
+ (id)logger;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_onQueuePostJSON:(id)arg1 error:(id*)arg2;
- (bool)allowsInsecureSplunkCert;
- (id)datePropertyForKey:(id)arg1;
- (id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3;
- (id)eventDictWithBlacklistedFieldsStrippedFrom:(id)arg1;
- (id)extraValuesToUploadToServer;
- (bool)forceUploadWithError:(id*)arg1;
- (id)getLoggingJSONWithError:(id*)arg1;
- (id)getSysdiagnoseDumpWithError:(id*)arg1;
- (bool)ignoreServerDisablingMessages;
- (id)init;
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSuccessForEventNamed:(id)arg1;
- (void)noteEventNamed:(id)arg1;
- (void)resetUploadDate:(bool)arg1;
- (void)setAllowsInsecureSplunkCert:(bool)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setIgnoreServerDisablingMessages:(bool)arg1;
- (id)splunkBagURL;
- (id)splunkLoggingQueue;
- (id)splunkTopicName;
- (id)splunkUploadURL;
- (id)stringForEventClass:(long long)arg1;
- (id)sysdiagnoseStringForEventRecord:(id)arg1;

@end
