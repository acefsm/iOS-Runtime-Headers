/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureUploader : NSObject {
    <MTLBlitCommandEncoder> * _blit;
    <MTLCommandBuffer> * _commandBuffer;
    <MTLDevice> * _device;
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _notifyQueue;
}

- (void)copyBytes:(const void*)arg1 toTexture:(id)arg2 bitsPerPixel:(unsigned long long)arg3 pixelComponents:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg7 slice:(unsigned long long)arg8 level:(unsigned long long)arg9 flipVertically:(bool)arg10;
- (void)copyTexture:(id)arg1 toTexture:(id)arg2;
- (void)dealloc;
- (void)finishWithCompletionHandler:(id /* block */)arg1;
- (void)generateMipmapsForTexture:(id)arg1;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 notifyQueue:(id)arg3;
- (id)newTextureWithData:(id)arg1 options:(id)arg2;

@end
