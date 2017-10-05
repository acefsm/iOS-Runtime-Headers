/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface MediaControlServer : NSObject {
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; void *x2; id x3; struct OpaqueAPAdvertiser {} x4; unsigned char x5; unsigned char x6; struct HTTPServerPrivate {} *x7; id x8; struct HTTPServerPrivate {} x9; unsigned char x10[16]; float x11; unsigned char x12; int x13; unsigned char x14; unsigned char x15; struct OpaqueAPReceiverSystemInfo {} *x16; unsigned char x17; unsigned char x18; struct __CFDictionary {} *x19; struct __CFDictionary {} *x20; struct MediaControlServerPrivate {} *x21; struct __CFDictionary {} *x22; unsigned int x23; int x24; unsigned int x25; struct APReceiverSessionManagerOpaque {} *x26; struct OpaqueFigValeria {} *x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; } * _connectionsServer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _lastActivity;
    AirPlayLocalSlideshow * _slideshow;
}

- (int)_ensurePresentationStarted:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 type:(id)arg2;
- (void)_ensurePresentationStopped:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 type:(id)arg2;
- (int)_showPhoto:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 options:(id)arg2 data:(id)arg3 path:(id)arg4;
- (void)_slideshowActivity:(id)arg1;
- (void)_slideshowWillStart:(id)arg1;
- (void)_slideshowWillStop:(id)arg1;
- (int)_startSlideshow:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 options:(id)arg2;
- (int)_startVideo:(struct OpaqueAPReceiverRequestProcessor { }*)arg1 params:(id)arg2;
- (int)_stopSlideshow:(struct OpaqueAPReceiverRequestProcessor { }*)arg1;
- (void)_stopVideo:(struct OpaqueAPReceiverRequestProcessor { }*)arg1;
- (void)dealloc;
- (id)init:(struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; void *x2; id x3; struct OpaqueAPAdvertiser {} x4; unsigned char x5; unsigned char x6; struct HTTPServerPrivate {} *x7; id x8; struct HTTPServerPrivate {} x9; unsigned char x10[16]; float x11; unsigned char x12; int x13; unsigned char x14; unsigned char x15; struct OpaqueAPReceiverSystemInfo {} *x16; unsigned char x17; unsigned char x18; struct __CFDictionary {} *x19; struct __CFDictionary {} *x20; struct MediaControlServerPrivate {} *x21; struct __CFDictionary {} *x22; unsigned int x23; int x24; unsigned int x25; struct APReceiverSessionManagerOpaque {} *x26; struct OpaqueFigValeria {} *x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; }*)arg1;
- (void)invalidate;
- (void)postEvent:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)slideshowRequestAssetWithInfo:(id)arg1 sessionUUID:(const char *)arg2 completion:(id /* block */)arg3;

@end