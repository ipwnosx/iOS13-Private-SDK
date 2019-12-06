//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentEvents;
    AXDispatchTimer *_flushEventsTimer;
}

+ (void)setFlushEventsTimerDelay:(double)arg1;
+ (void)flushEvents;
@property(retain, nonatomic) AXDispatchTimer *flushEventsTimer; // @synthesize flushEventsTimer=_flushEventsTimer;
@property(retain, nonatomic) NSMutableArray *recentEvents; // @synthesize recentEvents=_recentEvents;
// - (void).cxx_destruct;
- (double)_elapsedTimeFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (BOOL)isRedirectedEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)_flushEventsIfNecessary;
- (id)init;

@end

