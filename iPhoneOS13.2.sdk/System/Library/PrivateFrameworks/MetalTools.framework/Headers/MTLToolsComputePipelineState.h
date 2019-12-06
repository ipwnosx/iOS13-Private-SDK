//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLComputePipelineStateSPI-Protocol.h>

@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice, MTLFunction;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI>
{
    id <MTLFunction> _function;
}

@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) NSUInteger uniqueIdentifier;
@property(nonatomic) NSUInteger resourceIndex;
// - (NSUInteger)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@property(readonly) NSUInteger staticThreadgroupMemoryLength;
@property(readonly) NSUInteger threadExecutionWidth;
@property(readonly) NSUInteger maxTotalThreadsPerThreadgroup;
@property(readonly) BOOL supportIndirectCommandBuffers;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;

@end

