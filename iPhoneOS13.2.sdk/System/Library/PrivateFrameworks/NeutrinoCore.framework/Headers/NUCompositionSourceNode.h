//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class NUComposition, NURenderPipeline;

@interface NUCompositionSourceNode : NUSourceNode
{
    NURenderPipeline *_renderPipeline;
    NUComposition *_composition;
//     CDStruct_d58201db _pixelSize;
}

// - (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id )arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id )arg2;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id )arg5;
- (id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id )arg2;
// - (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (BOOL)load:(out id )arg1;
- (id)_evaluateImage:(out id )arg1;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3;

@end

