//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLCountersTraceCommandEncoder.h>

__attribute__((visibility("hidden")))
@interface MTLCountersTraceRenderCommandEncoder : MTLCountersTraceCommandEncoder
{
}

- (void)memoryBarrierWithResources:(const id )arg1 count:(NSUInteger)arg2 afterStages:(NSUInteger)arg3 beforeStages:(NSUInteger)arg4;
- (void)memoryBarrierWithScope:(NSUInteger)arg1 afterStages:(NSUInteger)arg2 beforeStages:(NSUInteger)arg3;
- (void)useResources:(const id )arg1 count:(NSUInteger)arg2 usage:(NSUInteger)arg3 stages:(NSUInteger)arg4;
- (void)useResources:(const id )arg1 count:(NSUInteger)arg2 usage:(NSUInteger)arg3;
- (void)useResource:(id)arg1 usage:(NSUInteger)arg2 stages:(NSUInteger)arg3;
- (void)useResource:(id)arg1 usage:(NSUInteger)arg2;
- (void)useHeaps:(const id )arg1 count:(NSUInteger)arg2 stages:(NSUInteger)arg3;
- (void)useHeaps:(const id )arg1 count:(NSUInteger)arg2;
- (void)useHeap:(id)arg1 stages:(NSUInteger)arg2;
- (void)useHeap:(id)arg1;
- (void)waitForFence:(id)arg1 beforeStages:(NSUInteger)arg2;
- (void)updateFence:(id)arg1 afterStages:(NSUInteger)arg2;
- (void)setStencilStoreAction:(NSUInteger)arg1;
- (void)setDepthStoreAction:(NSUInteger)arg1;
- (void)setColorStoreAction:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setScissorRects:(const CDStruct_5f3a0cd7 )arg1 count:(NSUInteger)arg2;
- (void)setViewports:(const CDStruct_8727d297 )arg1 count:(NSUInteger)arg2;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setTessellationFactorBuffer:(id)arg1 offset:(NSUInteger)arg2 instanceStride:(NSUInteger)arg3;
- (void)setVisibilityResultMode:(NSUInteger)arg1 offset:(NSUInteger)arg2;
- (void)setViewport:(CDStruct_8727d297)arg1;
- (void)setVertexTextures:(const id )arg1 withRange:(NSRange)arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setVertexSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(NSRange)arg4;
- (void)setVertexSamplerStates:(const id )arg1 withRange:(NSRange)arg2;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setVertexSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setVertexBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setVertexBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange)arg3;
- (void)setVertexBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setTriangleFillMode:(NSUInteger)arg1;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setScissorRect:(CDStruct_5f3a0cd7)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (void)setFrontFacingWinding:(NSUInteger)arg1;
- (void)setFragmentTextures:(const id )arg1 withRange:(NSRange)arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(NSRange)arg4;
- (void)setFragmentSamplerStates:(const id )arg1 withRange:(NSRange)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setFragmentBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange)arg3;
- (void)setFragmentBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setDepthStencilState:(id)arg1;
- (void)setDepthClipMode:(NSUInteger)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setCullMode:(NSUInteger)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)drawIndexedPatches:(NSUInteger)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(NSUInteger)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(NSUInteger)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(NSUInteger)arg7;
- (void)drawPatches:(NSUInteger)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5;
- (void)drawIndexedPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(NSUInteger)arg7 instanceCount:(NSUInteger)arg8 baseInstance:(NSUInteger)arg9;
- (void)drawPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseInstance:(NSUInteger)arg7;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(NSUInteger)arg6;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseVertex:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5;
- (void)drawPrimitives:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4 baseInstance:(NSUInteger)arg5;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3;
- (id)init:(struct BinaryBuffer )arg1;

@end

