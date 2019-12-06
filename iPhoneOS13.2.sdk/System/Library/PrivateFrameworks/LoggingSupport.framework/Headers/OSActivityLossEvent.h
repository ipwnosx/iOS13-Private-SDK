//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityLossEvent : OSActivityEvent
{
    BOOL _saturated;
    unsigned int _count;
    NSUInteger _startMachTimestamp;
    NSUInteger _endMachTimestamp;
}

@property(readonly, nonatomic) BOOL saturated; // @synthesize saturated=_saturated;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) NSUInteger endMachTimestamp; // @synthesize endMachTimestamp=_endMachTimestamp;
@property(readonly, nonatomic) NSUInteger startMachTimestamp; // @synthesize startMachTimestamp=_startMachTimestamp;
- (void)_addProperties:(id)arg1;
//  (id)initWithEntry:(struct os_activity_stream_entry_s )arg1;

@end

