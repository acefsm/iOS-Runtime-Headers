/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderContext : NSObject {
    NSPointerArray * _jobs;
    NURenderNode * _lastPrepareNode;
    NURenderNode * _lastRenderNode;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) long long jobCount;
@property (readonly) NSArray *jobs;
@property (retain) NURenderNode *lastPrepareNode;
@property (retain) NURenderNode *lastRenderNode;

- (void).cxx_destruct;
- (void)_cancelAllJobs;
- (void)_jobFinished:(id)arg1;
- (void)_removeJob:(id)arg1;
- (void)addJob:(id)arg1;
- (void)cancelAllJobs;
- (void)cancelAllRequests;
- (id)init;
- (long long)jobCount;
- (id)jobs;
- (id)lastPrepareNode;
- (id)lastRenderNode;
- (void)removeJob:(id)arg1;
- (void)setLastPrepareNode:(id)arg1;
- (void)setLastRenderNode:(id)arg1;

@end
