/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <AVPlayerItemDelegate>, AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVPlayerItemInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    unsigned int RTCReportingFlags;
    NSURL *URL;
    BOOL allowProgressiveSwitchUp;
    BOOL allowsExtendedReadAhead;
    AVAsset *asset;
    AVAsset *assetWithFigPlaybackItem;
    NSDictionary *audibleDRMInfo;
    AVAudioMix *audioMix;
    NSArray *automaticallyLoadedAssetKeys;
    NSArray *cachedTracks;
    AVWeakReference *clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSString *dataYouTubeID;
    <AVPlayerItemDelegate> *delegate;
    BOOL didBecomeReadyForBasicInspection;
    BOOL didBecomeReadyForInspectionOfDuration;
    BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    int eqPreset;
    NSError *error;
    BOOL externalProtectionRequested;
    BOOL externalSubtitlesEnabled;
    struct OpaqueFigCPEProtector { } *figCPEProtector;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    struct OpaqueCMTimebase { } *figTimebase;
    void *figVideoCompositor;
    } forwardPlaybackEndTime;
    NSDictionary *gaplessInfo;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    BOOL haveCPEProtector;
    BOOL haveInitialSamples;
    BOOL initialAlwaysMonitorsPlayability;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    struct __CFString { } *initialFigTimePitchAlgorithm;
    BOOL initialLimitReadAhead;
    int initialPlaybackLikelyToKeepUpTrigger;
    } initialTime;
    } initialToleranceAfter;
    } initialToleranceBefore;
    int initialVariantIndex;
    BOOL initialWillNeverSeekBackwardsHint;
    BOOL isCurrentPlayerItem;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    } maximumTrailingBufferDuration;
    NSString *mediaKind;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    } minimumIntervalForIFrameOnlyPlayback;
    BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
    BOOL needTimedMetadataNotification;
    BOOL networkUsuallyExceedsMaxBitRate;
    AVPlayerItem *nextItem;
    unsigned int nextSeekIDToGenerate;
    BOOL nonForcedSubtitlesEnabled;
    int pendingSeekID;
    struct OpaqueVTPixelBufferAttributesMediator { } *pixelBufferAttributeMediator;
    AVPlayerConnection *playerConnection;
    AVWeakReference *playerReference;
    double preferredPeakBitRate;
    AVPlayerItem *previousItem;
    AVPropertyStorage *propertyStorage;
    struct OpaqueCMTimebase { } *proxyTimebase;
    NSDictionary *rampInOutInfo;
    BOOL requiresAccessLog;
    unsigned int restrictions;
    } reversePlaybackEndTime;
    BOOL savesDownloadedDataToDiskWhenDone;
    id seekCompletionHandler;
    struct OpaqueFigSimpleMutex { } *seekIDMutex;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSString *serviceIdentifier;
    float soundCheckVolumeNormalization;
    float speedThresholdForIFrameOnlyPlayback;
    BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    int status;
    BOOL suppressesVideoLayers;
    NSMutableArray *syncLayers;
    NSArray *textStyleRules;
    NSArray *timedMetadata;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    AVVideoComposition *videoComposition;
    float volumeAdjustment;
    BOOL wasInitializedWithURL;
    AVWeakReference *weakReference;
}

@end