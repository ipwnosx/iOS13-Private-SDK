//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface NUKeyframeSequence : NSObject
{
    NSUInteger _count;
//     CDStruct_1b6d18a9 _times;
    BOOL _ownsTimes;
    long long _interpolation;
}

@property(readonly, nonatomic) long long interpolation; // @synthesize interpolation=_interpolation;
- (id)sparseSequence;
// - (MISSING_TYPE *)interpolantAtTime:(CDStruct_1b6d18a9)arg1;
// - (CDStruct_1b6d18a9)timeOfKeyframeAtIndex:(long long)arg1;
// - (long long)indexOfKeyframeAtOrBeforeTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (void)dealloc;
- (id)initWithKeyframeSequence:(id)arg1;
// - (id)initWithInterpolation:(long long)arg1 count:(NSUInteger)arg2 times:(CDStruct_1b6d18a9 )arg3;
- (id)init;

@end

