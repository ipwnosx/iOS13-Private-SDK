//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDPathIntersection : NSObject
{
    long long mSegment;
    long long mSegmentB;
    double mT;
    double mTB;
    CGPoint mPoint;
}

@property(readonly, nonatomic) double tB; // @synthesize tB=mTB;
@property(readonly, nonatomic) long long segmentB; // @synthesize segmentB=mSegmentB;
@property(nonatomic) CGPoint point; // @synthesize point=mPoint;
@property(readonly, nonatomic) double t; // @synthesize t=mT;
@property(readonly, nonatomic) long long segment; // @synthesize segment=mSegment;
- (long long)compareT:(id)arg1;
- (long long)compareSegmentAndT:(id)arg1;
- (id)description;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(CGPoint)arg5;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(CGPoint)arg3;

@end

