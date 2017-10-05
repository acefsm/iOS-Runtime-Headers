/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {
    NSObject<OS_dispatch_data> * _leftoverData;
    long long  _offset;
    <TSUReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithReadChannel:(id)arg1;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;

@end