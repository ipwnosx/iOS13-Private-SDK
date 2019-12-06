//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLSerializer : NSObject
{
    id <MTLDevice> _device;
    NSObject<OS_dispatch_queue> *_serialQueue;
//    struct atomic<unsigned int> _resourceIndex;
//    struct atomic<unsigned int> _depthStencilIndex;
//    struct atomic<unsigned int> _samplerIndex;
//    struct atomic<unsigned int> _libraryIndex;
//    struct atomic<unsigned int> _functionIndex;
//    struct atomic<unsigned int> _computePipelineIndex;
//    struct atomic<unsigned int> _renderPipelineIndex;
//    struct atomic<unsigned int> _fences;
//    struct atomic<unsigned int> _argumentBufferLayoutIndex;
//    struct atomic<unsigned int> _argumentEncoderIndex;
//    struct atomic<unsigned int> _heapIndex;
//    struct atomic<unsigned int> _eventIndex;
//    struct atomic<unsigned int> _commandQueueIndex;
//    struct MTLSerializerIndexGenerator _commandBufferIndex;
//    struct MTLSerializerIndexGenerator _eventNotifications;
    BOOL _deserializerGeneratesResourceRefs;
    NSUInteger _reflectionSerializationVersion;
}

@property NSUInteger reflectionSerializationVersion; // @synthesize reflectionSerializationVersion=_reflectionSerializationVersion;
@property(readonly, nonatomic) BOOL deserializerGeneratesResourceRefs; // @synthesize deserializerGeneratesResourceRefs=_deserializerGeneratesResourceRefs;
- (const char )payloadFromReplyData:(const char )arg1 replyDataSize:(NSUInteger)arg2;
// - (unsigned int)computePipelineWithReplyData:(const void *)arg1 replyDataSize:(NSUInteger)arg2 pipelineInfo:(CDStruct_868f45a5 )arg3 errorMessage:(id )arg4;
- (unsigned int)handleNewObjectReplyData:(const void *)arg1 replyDataSize:(NSUInteger)arg2;
- (unsigned int)handleNewObjectReplyData:(const void *)arg1 replyDataSize:(NSUInteger)arg2 errorMessage:(id )arg3;
- (unsigned int)newHeapWithDescriptor:(id)arg1 allocator:(id)arg2;
- (unsigned int)newSamplerStateWithDescriptor:(id)arg1 allocator:(id)arg2;
- (unsigned int)newDepthStencilStateWithDescriptor:(id)arg1 allocator:(id)arg2;
- (unsigned int)newTextureWithDescriptor:(id)arg1 allocator:(id)arg2;
- (unsigned int)newIOSurfaceTextureWithDescriptor:(id)arg1 plane:(NSUInteger)arg2 allocator:(id)arg3;
- (unsigned int)newComputePipelineStateWithSerializedDescriptor:(id)arg1 allocator:(id)arg2;
- (unsigned int)newRenderPipelineStateWithSerializedDescriptor:(id)arg1 allocator:(id)arg2;
- (unsigned int)newFunctionWithIR:(id)arg1;
- (unsigned int)newFunctionWithLibrary:(id)arg1 functionName:(id)arg2 allocator:(id)arg3;
- (unsigned int)newTiledTextureWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 allocator:(id)arg5;
- (unsigned int)newTextureWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 allocator:(id)arg5;
- (void)doesAliasResources:(const id )arg1 count:(NSUInteger)arg2 all:(BOOL)arg3 resource:(id)arg4 allocator:(id)arg5;
- (void)makeAliasableResource:(id)arg1 allocator:(id)arg2;
- (void)heapBufferSizeAndAlignWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 allocator:(id)arg3;
- (void)heapTextureSizeAndAlignWithDescriptor:(id)arg1 allocator:(id)arg2;
- (void)argumentEncoderSetSamplerStates:(const id )arg1 withRange:(NSRange *)arg2 encoderRef:(unsigned int)arg3 allocator:(id)arg4;
- (void)argumentEncoderSetTextures:(const id )arg1 withRange:(NSRange *)arg2 encoderRef:(unsigned int)arg3 allocator:(id)arg4;
- (void)setSignaledValue:(NSUInteger)arg1 eventRef:(unsigned int)arg2 allocator:(id)arg3;
- (unsigned int)notifyListenerForEventRef:(unsigned int)arg1 atValue:(NSUInteger)arg2 allocator:(id)arg3;
- (void)argumentEncoderSetBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange *)arg3 encoderRef:(unsigned int)arg4 allocator:(id)arg5;
- (void)argumentEncoderSetArgumentBuffer:(id)arg1 offset:(NSUInteger)arg2 encoderRef:(unsigned int)arg3 allocator:(id)arg4;
- (void)maxAvailableSizeWithAlignment:(NSUInteger)arg1 heap:(id)arg2 allocator:(id)arg3;
- (void)getComputeInfoWithAllocator:(id)arg1;
- (void)minimumTextureBufferAlignmentForPixelFormat:(NSUInteger)arg1 allocator:(id)arg2;
- (void)minimumLinearTextureAlignmentForPixelFormat:(NSUInteger)arg1 allocator:(id)arg2;
- (void)sizeInfoForHeap:(id)arg1 allocator:(id)arg2;
- (void)argumentEncoderConstantAtIndex:(NSUInteger)arg1 encoderRef:(unsigned int)arg2 bufferRef:(unsigned int)arg3 allocator:(id)arg4;
- (void)argumentBufferLayoutConstantAtIndex:(NSUInteger)arg1 layoutRef:(unsigned int)arg2 allocator:(id)arg3;
- (unsigned int)newArgumentEncoderWithLayout:(unsigned int)arg1 allocator:(id)arg2;
- (unsigned int)newArgumentBufferLayoutWithStructType:(id)arg1 allocator:(id)arg2;
- (unsigned int)newSharedEventWithAllocator:(id)arg1;
- (unsigned int)newFenceWithAllocator:(id)arg1;
// - (unsigned int)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(NSRange *)arg3 slices:(NSRange *)arg4 swizzle:(CDStruct_a06f635e)arg5 baseTexture:(id)arg6 allocator:(id)arg7;
- (unsigned int)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(NSRange *)arg3 slices:(NSRange *)arg4 baseTexture:(id)arg5 allocator:(id)arg6;
- (unsigned int)newBufferWithLength:(NSUInteger)arg1 options:(NSUInteger)arg2 heap:(id)arg3 offset:(NSUInteger)arg4 useOffset:(BOOL)arg5 allocator:(id)arg6;
- (unsigned int)newTextureWithDescriptor:(id)arg1 heap:(id)arg2 offset:(NSUInteger)arg3 useOffset:(BOOL)arg4 allocator:(id)arg5;
- (unsigned int)newTextureViewWithPixelFormat:(NSUInteger)arg1 baseTexture:(id)arg2 allocator:(id)arg3;
// - (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 withBytes:(const void *)arg4 bytesPerRow:(NSUInteger)arg5 bytesPerImage:(NSUInteger)arg6 texture:(id)arg7 allocator:(id)arg8;
// - (id)getBytesFromRegion:(CDStruct_caaed6bc)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 mipmapLevel:(NSUInteger)arg4 slice:(NSUInteger)arg5 texture:(id)arg6 outDataSize:(NSUInteger )arg7;
// - (void)copyImageBytesFromSource:(char )arg1 toDestination:(char )arg2 dataSize:(NSUInteger)arg3 region:(CDStruct_caaed6bc)arg4 bytesPerRow:(NSUInteger)arg5 bytesPerImage:(NSUInteger)arg6 mipmapLevel:(NSUInteger)arg7 slice:(NSUInteger)arg8 texture:(id)arg9;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (void)releaseNotificationRef:(unsigned int)arg1;
- (unsigned int)newNotificationRef;
- (void)releaseCommandBufferRef:(unsigned int)arg1;
- (unsigned int)newCommandBufferRef;
- (void)deleteCommandQueueRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseCommandQueueRef:(unsigned int)arg1;
- (unsigned int)newCommandQueueRef;
- (void)deleteEventRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseEventRef:(unsigned int)arg1;
- (unsigned int)newEventRef;
- (void)deleteHeapRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseHeapRef:(unsigned int)arg1;
- (unsigned int)newHeapRef;
- (void)deleteArgumentEncoderRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseArgumentEncoderRef:(unsigned int)arg1;
- (unsigned int)newArgumentEncoderRef;
- (void)deleteArgumentBufferLayoutRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseArgumentBufferLayoutRef:(unsigned int)arg1;
- (unsigned int)newArgumentBufferLayoutRef;
- (void)deleteFenceRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseFenceRef:(unsigned int)arg1;
- (unsigned int)newFenceRef;
- (void)deleteRenderPipelineStateRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseRenderPipelineStateRef:(unsigned int)arg1;
- (unsigned int)newRenderPipelineStateRef;
- (void)deleteComputePipelineStateRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseComputePipelineStateRef:(unsigned int)arg1;
- (unsigned int)newComputePipelineStateRef;
- (void)deleteFunctionRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseFunctionRef:(unsigned int)arg1;
- (unsigned int)newFunctionRef;
- (void)deleteLibraryRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseLibraryRef:(unsigned int)arg1;
- (unsigned int)newLibraryRef;
- (void)deleteSamplerStateRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseSamplerStateRef:(unsigned int)arg1;
- (unsigned int)newSamplerStateRef;
- (void)deleteDepthStencilStateRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseDepthStencilStateRef:(unsigned int)arg1;
- (unsigned int)newDepthStencilStateRef;
- (void)deleteTextureRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseTextureRef:(unsigned int)arg1;
- (unsigned int)newTextureRef;
- (void)deleteBufferRef:(unsigned int)arg1 allocator:(id)arg2;
- (void)releaseBufferRef:(unsigned int)arg1;
- (unsigned int)newBufferRef;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 deserializerGeneratesResourceRefs:(BOOL)arg2;

@end

