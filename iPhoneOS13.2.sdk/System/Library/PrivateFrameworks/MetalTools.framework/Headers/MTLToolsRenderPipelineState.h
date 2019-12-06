//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLRenderPipelineStateSPI-Protocol.h>

@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice;

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>
{
}

@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property(readonly) NSUInteger uniqueIdentifier;
@property(nonatomic) NSUInteger resourceIndex;
// - (NSUInteger)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@property(readonly) NSUInteger imageblockSampleLength;
- (id)newFragmentShaderDebugInfo;
- (id)newVertexShaderDebugInfo;
@property(readonly) BOOL supportIndirectCommandBuffers;
@property(readonly) BOOL threadgroupSizeMatchesTileSize;
@property(readonly) NSUInteger maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;

@end

