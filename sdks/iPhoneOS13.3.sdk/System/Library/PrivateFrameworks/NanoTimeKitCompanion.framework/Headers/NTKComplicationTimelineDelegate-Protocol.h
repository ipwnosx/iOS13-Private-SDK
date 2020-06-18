//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NTKComplicationTimeline;
@protocol CLKTimelineEntry;

#ifndef NTKComplicationTimelineDelegate_Protocol
#define NTKComplicationTimelineDelegate_Protocol

@protocol NTKComplicationTimelineDelegate <NSObject>
- (void)entriesDidChangeInTimeline:(NTKComplicationTimeline *)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)timeTravelEntryDidChangeFrom:(id <CLKTimelineEntry>)arg1 to:(id <CLKTimelineEntry>)arg2;
- (void)nowEntryDidChangeFrom:(id <CLKTimelineEntry>)arg1 to:(id <CLKTimelineEntry>)arg2;
@end

#endif

