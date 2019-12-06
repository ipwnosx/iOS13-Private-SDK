//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PFSlowMotionTimeRangeMapper : NSObject
{
    NSMutableArray *_originalLengths;
    NSMutableArray *_scaledLengths;
    NSMutableArray *_scaledRegions;
}

// - (void).cxx_destruct;
- (void)enumerateScaledRegionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;
- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;
- (float)originalTimeForScaledTime:(float)arg1;
- (float)scaledTimeForOriginalTime:(float)arg1;
- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;
- (id)init;

@end

