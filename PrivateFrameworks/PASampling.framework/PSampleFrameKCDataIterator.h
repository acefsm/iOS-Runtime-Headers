/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PSampleFrameKCDataIterator : NSObject <PASampleFrameIterator> {
    bool  _hideKernelFrames;
    bool  _hideUserFrames;
    PASampleKernelFrame * _kernel;
    PASampleUserFrame * _user;
    unsigned long long  continuation;
    bool  isUserStackTruncated;
    const struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; } * kernel32Frames;
    const unsigned int * kernel32LRs;
    const struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; } * kernel64Frames;
    const unsigned long long * kernel64LRs;
    int  numKernel32Frames;
    int  numKernel32LRs;
    int  numKernel64Frames;
    int  numKernel64LRs;
    int  numUser32Frames;
    int  numUser32LRs;
    int  numUser64Frames;
    int  numUser64LRs;
    const struct stack_snapshot_frame32 { unsigned int x1; unsigned int x2; } * user32Frames;
    const unsigned int * user32LRs;
    const struct stack_snapshot_frame64 { unsigned long long x1; unsigned long long x2; } * user64Frames;
    const unsigned long long * user64LRs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clear;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (bool)hasStack;
- (bool)hasUserStack;
- (void)iterateFrames:(id /* block */)arg1;

@end
