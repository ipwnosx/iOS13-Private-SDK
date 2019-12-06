//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAbstractScaleNode.h>

@class NSDictionary, NUSourceContainerNode;

@interface NUSubsampleNode : NUAbstractScaleNode
{
    long long _subsampleFactor;
    long long _appliedSubsampleFactor;
    NUSourceContainerNode *_sourceContainer;
    NSDictionary *_pipelineSettings;
    NSDictionary *_sourceOptions;
}

// + (long long)subsampleFactorForScale:(CDStruct_912cb5d2)arg1 additionalScale:(CDStruct_912cb5d2 )arg2;
@property(readonly) NSDictionary *sourceOptions; // @synthesize sourceOptions=_sourceOptions;
@property(readonly) NSDictionary *pipelineSettings; // @synthesize pipelineSettings=_pipelineSettings;
@property(readonly) NUSourceContainerNode *sourceContainer; // @synthesize sourceContainer=_sourceContainer;
@property(readonly) long long appliedSubsampleFactor; // @synthesize appliedSubsampleFactor=_appliedSubsampleFactor;
@property(readonly) long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
// - (void).cxx_destruct;
- (id)_evaluateVideoComposition:(out id )arg1;
- (id)_evaluateVideoProperties:(out id )arg1;
- (id)_evaluateImageProperties:(out id )arg1;
- (id)_evaluateImageGeometry:(out id )arg1;
- (id)_evaluateImage:(out id )arg1;
- (id)debugQuickLookObject;
- (id)_sourceNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id )arg3;
// - (long long)resolveSubsampleFactorForPipelineState:(id)arg1 sourceScale:(CDStruct_912cb5d2)arg2;
- (long long)resolveSubsampleFactorForPipelineState:(id)arg1 error:(out id )arg2;
- (id)initWithSubsampleFactor:(long long)arg1 source:(id)arg2 container:(id)arg3 pipelineSettings:(id)arg4 sourceOptions:(id)arg5;
- (id)initWithPreparedSource:(id)arg1 container:(id)arg2 pipelineSettings:(id)arg3 sourceOptions:(id)arg4;
- (id)initWithInput:(id)arg1 settings:(id)arg2;

@end

