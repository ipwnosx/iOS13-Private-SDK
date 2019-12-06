//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponentsFormatter, NSString;

@interface IMDTaskProgress : NSObject
{
    NSUInteger _lastPercentComplete;
    double _startTime;
    NSDateComponentsFormatter *_intervalFormatter;
    NSString *_taskName;
    NSUInteger _totalCount;
}

@property(readonly, nonatomic) NSUInteger totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void)updateWithCompletedCount:(NSUInteger)arg1;
- (void)startTrackingTime;
- (void)dealloc;
- (id)initWithTaskName:(id)arg1 totalCount:(NSUInteger)arg2;

@end

