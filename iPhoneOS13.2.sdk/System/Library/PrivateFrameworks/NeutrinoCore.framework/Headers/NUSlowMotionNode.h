//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUTransformNode.h>

@class NUGeometryTransform;

@interface NUSlowMotionNode : NUTransformNode
{
    float _rate;
    NUGeometryTransform *_geomTransform;
//     CDStruct_e83c9415 _range;
}

@property(readonly) float rate; // @synthesize rate=_rate;
// @property(readonly) CDStruct_e83c9415 range; // @synthesize range=_range;
@property(readonly) NUGeometryTransform *geomTransform; // @synthesize geomTransform=_geomTransform;
// - (void).cxx_destruct;
- (id)_evaluateAudioMix:(out id )arg1;
- (BOOL)requiresAudioMix;
- (id)_evaluateVideo:(out id )arg1;
- (id)_evaluateVideoComposition:(out id )arg1;
- (BOOL)requiresVideoComposition;
- (id)_evaluateImage:(out id )arg1;
- (id)resolvedNodeWithCachedInputs:(NSDictionary )arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id )arg4;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_transformWithError:(out id )arg1;
// - (id)initWithTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2 input:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(NSDictionary )arg2;

@end

