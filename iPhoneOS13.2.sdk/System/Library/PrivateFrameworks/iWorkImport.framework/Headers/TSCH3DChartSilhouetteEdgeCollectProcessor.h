//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DResource, TSCH3Dvec3DataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor
{
//     struct EdgeDetectionParameters mEdgeDetectionParameters;
    TSCH3DResource *mVertices;
    TSCH3Dvec3DataBuffer *mEdges;
}

@property(readonly, nonatomic) TSCH3Dvec3DataBuffer *edges; // @synthesize edges=mEdges;
@property(retain, nonatomic) TSCH3DResource *vertices; // @synthesize vertices=mVertices;
- (id).cxx_construct;
- (void)submit:(id)arg1;
// - (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs )arg3;
- (id)matrix;
- (void)dealloc;
// - (id)initWithEdgeDetectionParameters:(const struct EdgeDetectionParameters )arg1;

@end

