//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTHLSItem.h>

@interface MTHLSRollItem : MTHLSItem
{
    NSUInteger _duration;
}

@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
- (BOOL)containsOverallPosition:(NSUInteger)arg1;
- (NSUInteger)endOverallPosition;
- (id)initWithStartOverallPosition:(NSUInteger)arg1 duration:(NSUInteger)arg2 metricsData:(id)arg3;

@end

