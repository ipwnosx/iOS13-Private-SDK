//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@class NSObject, NUVideoSourceNode;
@protocol OS_dispatch_queue;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode
{
    NSObject<OS_dispatch_queue> *_queue;
    NUVideoSourceNode *_videoSourceNode;
//     CDStruct_1b6d18a9 _frameTime;
//     struct __CVBuffer _pixelBuffer;
}

// - (void).cxx_destruct;
// - (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long )arg2 error:(out id )arg3;
// - (struct __CVBuffer )_pixelBuffer:(out id )arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
// - (id)initWithVideoSource:(id)arg1 time:(CDStruct_1b6d18a9)arg2 settings:(id)arg3 orientation:(long long)arg4;

@end

