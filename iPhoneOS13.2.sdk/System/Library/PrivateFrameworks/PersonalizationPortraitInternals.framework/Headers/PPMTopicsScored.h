//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface PPMTopicsScored : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
// - (void)trackEventWithScalar:(NSUInteger)arg1 bundleId:(id)arg2 resultSizeLog10:(NSUInteger)arg3 limitHit:(struct PPMTypeSafeBool_)arg4 timeSpec:(struct PPMTypeSafeBool_)arg5 timeLimited:(struct PPMTypeSafeBool_)arg6 exclusionSpec:(struct PPMTypeSafeBool_)arg7 error:(struct PPMTypeSafeBool_)arg8;
- (id)init;

@end

