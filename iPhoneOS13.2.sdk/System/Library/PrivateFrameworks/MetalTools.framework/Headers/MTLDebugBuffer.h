//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsBuffer.h>

@class MTLDebugDevice, MTLDebugResource, MTLDebugResourceAccessTracker, MTLIndirectCommandBufferDescriptor, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer
{
    MTLDebugResource *_common;
    NSUInteger _length;
    MTLDebugResourceAccessTracker *_resourceAccessTracker;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    BOOL _purgeableStateHasBeenSet;
    BOOL _isContentsPointerExposed;
    BOOL _isContentExposedToCPU;
    unsigned int _maxIndirectCommandCount;
    unsigned int _checksum;
    const void *_pointer;
    NSUInteger _purgeableState;
    MTLIndirectCommandBufferDescriptor *_indirectCommandBufferDescriptor;
}

@property(nonatomic) BOOL isContentExposedToCPU; // @synthesize isContentExposedToCPU=_isContentExposedToCPU;
@property(nonatomic) unsigned int checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) BOOL isContentsPointerExposed; // @synthesize isContentsPointerExposed=_isContentsPointerExposed;
@property(readonly, nonatomic) unsigned int maxIndirectCommandCount; // @synthesize maxIndirectCommandCount=_maxIndirectCommandCount;
@property(readonly, nonatomic) MTLIndirectCommandBufferDescriptor *indirectCommandBufferDescriptor; // @synthesize indirectCommandBufferDescriptor=_indirectCommandBufferDescriptor;
@property(readonly, nonatomic) BOOL purgeableStateHasBeenSet; // @synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet;
@property(readonly, nonatomic) NSUInteger purgeableState; // @synthesize purgeableState=_purgeableState;
@property(readonly, nonatomic) const void *pointer; // @synthesize pointer=_pointer;
@property(readonly, nonatomic) MTLDebugResource *common; // @synthesize common=_common;
- (void)blitManagedToShared;
- (void)blitManagedToPrivate;
- (void)accessedByCPU;
- (void)accessedByGPU;
@property(readonly, nonatomic) BOOL resourceTrackingEnabled; // @dynamic resourceTrackingEnabled;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(id)arg1 range:(NSRange *)arg2;
- (id)copyDebugMarkers;
- (void )contents;
- (void)didModifyRange:(NSRange *)arg1;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 bytesPerImage:(NSUInteger)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3;
- (id)description;
@property(readonly, nonatomic) unsigned int resourceUsage; // @dynamic resourceUsage;
- (BOOL)doesAliasAnyResources:(const id )arg1 count:(NSUInteger)arg2;
- (BOOL)doesAliasAllResources:(const id )arg1 count:(NSUInteger)arg2;
- (void)makeAliasable;
- (BOOL)doesAliasResource:(id)arg1;
- (id)heap;
- (NSUInteger)resourceIndex;
- (void)setResourceIndex:(NSUInteger)arg1;
- (void)dealloc;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCount:(NSUInteger)arg3 device:(id)arg4 options:(NSUInteger)arg5;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void *)arg3 options:(NSUInteger)arg4;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(NSUInteger)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(NSUInteger)arg3;
- (NSUInteger)length;

@end

