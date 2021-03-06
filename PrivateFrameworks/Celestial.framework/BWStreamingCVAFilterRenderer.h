/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStreamingCVAFilterRenderer : NSObject <BWFilterRenderer, CVADisparityPostprocessingCompletionDelegate, CVAMattingCompletionDelegate, CVAPortraitCompletionDelegate> {
    BWStreamingCVAFilterRendererAnimator * _animator;
    BWFigVideoCaptureDevice * _captureDevice;
    NSMutableDictionary * _faceVisibilityByFaceID;
    struct __CVBuffer { } * _mattingBuffer;
    <CVAPortraitVideoPipeline> * _portraitVideoPipeline;
    BWPixelBufferPool * _postprocessedDisparityBufferPool;
    NSMutableArray * _postprocessedFaces;
    struct { 
        bool depthFilterEnabled; 
        struct __CVBuffer {} *mostRecentPostprocessedDisparityBuffer; 
        float mostRecentFocusDisparity; 
        float mostRecentDeltaDisparity; 
        float mostRecentPortraitStability; 
        int numberOfFramesSinceLastStableFocus; 
        NSArray *mostRecentDetectedFaces; 
        NSArray *mostRecentFilteredFaces; 
    }  _sharedContext;
    NSObject<OS_dispatch_queue> * _sharedContextQueue;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

+ (void)initialize;

- (void)_removeFaceVisibilityForFacesMissingFromDetectedFaces:(id)arg1;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (void)dealloc;
- (void)disparityPostprocessingRequest:(id)arg1 didCompleteDisparityPostprocessingWithResult:(id)arg2;
- (id)displayName;
- (id)init;
- (id)initWithCaptureDevice:(id)arg1;
- (void)mattingRequest:(id)arg1 didCompleteMattingWithResult:(id)arg2;
- (void)portraitRequest:(id)arg1 didCompletePortraitWithResult:(id)arg2;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsAnimation;
- (short)type;

@end
