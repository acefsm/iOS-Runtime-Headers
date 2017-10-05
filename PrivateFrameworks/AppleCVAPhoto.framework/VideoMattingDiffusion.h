/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface VideoMattingDiffusion : NSObject {
    <MTLComputePipelineState> * _createDiffusionMapLaplacianKernel;
    <MTLComputePipelineState> * _createEdgeLaplacianKernel;
    <MTLBuffer> * _davidConfig;
    <MTLDevice> * _device;
    <MTLBuffer> * _edgeLaplacianConfig;
    float  _edgeVariance;
    unsigned long long  _height;
    <MTLBuffer> * _jacobiConfig;
    <MTLTexture> * _laplacian;
    <MTLComputePipelineState> * _laplacianDavidKernel;
    <MTLComputePipelineState> * _laplacianJacobiKernel;
    <MTLLibrary> * _library;
    <MTLTexture> * _tmpOut16;
    <MTLTexture> * _tmpOut32;
    unsigned long long  _width;
}

- (void).cxx_destruct;
- (void)encodeDavidIterationToCommandBufferInternal:(id)arg1 priorTexture:(id)arg2 confidenceTexture:(id)arg3 sourceTexture:(id)arg4 destinationTexture:(id)arg5;
- (void)encodeDiffusionMapLaplacianToCommandBuffer:(id)arg1 diffusionMapTexture:(id)arg2 outputLaplacian:(id)arg3;
- (void)encodeEdgeLaplacianToCommandBuffer:(id)arg1 colorTexture:(id)arg2 outputLaplacian:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 priorTexture:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 diffusionMapTexture:(id)arg5 confidenceTexture:(id)arg6 iterations:(unsigned int)arg7;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 colorTexture:(id)arg4 iterations:(unsigned int)arg5;
- (void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)initWithDevice:(id)arg1 library:(id)arg2 bufferWidth:(unsigned long long)arg3 bufferHeight:(unsigned long long)arg4 edgeVariance:(float)arg5 stepSize:(float)arg6;

@end