/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageTable : NSObject <PLThumbPersistenceManager> {
    NSMutableArray * _allSegments;
    bool  _dying;
    long long  _entryCount;
    int  _entryLength;
    int  _fid;
    long long  _fileLength;
    int  _imageLength;
    int  _imageRowBytes;
    NSString * _path;
    bool  _readOnly;
    long long  _segmentCount;
    unsigned long long  _segmentLength;
    int  _sideLength;
    bool  _squareCropped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

+ (void)releaseSegmentCache;

- (void)_addEntriesIfNecessaryForIndex:(long long)arg1;
- (bool)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2;
- (id)_debugDescription;
- (int)_fileDescriptor;
- (void)_flushEntryAtAddress:(void*)arg1;
- (void)_flushEntryAtAddress:(void*)arg1 count:(int)arg2;
- (void)_releaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(long long)arg1;
- (void)_reloadSegmentAtIndex:(long long)arg1;
- (id)_segmentAtIndex:(long long)arg1;
- (unsigned long long)_segmentLength;
- (void)_setEntryCount:(long long)arg1;
- (void)_updateSegmentCount;
- (void)_verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (struct CGImage { }*)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3;
- (id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(bool)arg2;
- (void)dealloc;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (long long)entryCount;
- (void)finishEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 sourceImageSize:(struct CGSize { double x1; double x2; })arg3 assetUUID:(id)arg4;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithPath:(id)arg1 readOnly:(bool)arg2 sideLengthInPixels:(int)arg3 squareCropped:(bool)arg4;
- (bool)isReadOnly;
- (id)path;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (void)touchEntriesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)usesThumbIdentifiers;
- (bool)validateData:(id)arg1 withToken:(id)arg2;

@end
