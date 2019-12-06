//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/HMIMotionDetection.h>

@interface HMIDenseOpticalFlowMotionDetection : HMIMotionDetection
{
//     struct __CVBuffer _pixelBufferUV;
    CGSize _size;
}

@property(readonly) CGSize size; // @synthesize size=_size;
// @property struct __CVBuffer pixelBufferUV; // @synthesize pixelBufferUV=_pixelBufferUV;
- (id)classPaddingMap;
- (id)classMotionScoreMap;
- (float)scoreForSubBoundingBox:(CGRect)arg1 forMetric:(long long)arg2;
- (BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
// - (id)initWithBoundingBox:(CGRect)arg1 size:(CGSize)arg2 pixelBufferUV:(struct __CVBuffer )arg3;

@end

