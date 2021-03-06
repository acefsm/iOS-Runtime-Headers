/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceSnapshotter : NSObject {
    NTKDelayedBlock * _hideSnapshotWindowBlock;
    _NTKDFaceSnapshottingWindow * _snapshotWindow;
}

- (void).cxx_destruct;
- (void)_hideSnapshotWindow;
- (id)_mainQueue_takeSnapshotOfFace:(id)arg1 snapshotUIOnly:(bool)arg2 unadornedContent:(bool)arg3 forceLockedUI:(bool)arg4 hasBlankComplication:(bool*)arg5;
- (void)_showSnapshotWindow;
- (id)createFace:(id)arg1 snapshotUIOnly:(bool)arg2 unadornedContent:(bool)arg3 forceLockedUI:(bool)arg4;
- (void)provideSnapshotOfFace:(id)arg1 completion:(id /* block */)arg2;
- (id)takeSnapshotOfFace:(id)arg1 snapshotUIOnly:(bool)arg2 unadornedContent:(bool)arg3 forceLockedUI:(bool)arg4 hasBlankComplication:(bool*)arg5;

@end
