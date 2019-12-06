//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLRenderPipelineState-Protocol.h>

@class MTLDebugInstrumentationData, NSData;

@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState>
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property(readonly) NSUInteger uniqueIdentifier;
- (NSData *)newFragmentShaderDebugInfo;
- (NSData *)newVertexShaderDebugInfo;

@optional
@property(nonatomic) NSUInteger resourceIndex;
@end

