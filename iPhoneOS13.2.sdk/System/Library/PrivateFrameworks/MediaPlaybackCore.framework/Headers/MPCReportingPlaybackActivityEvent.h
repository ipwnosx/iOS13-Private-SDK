//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCReportingEvent-Protocol.h>

@class NSString, SSVPlayActivityEvent;

@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent>
{
    BOOL _shouldReportToStore;
    SSVPlayActivityEvent *_playActivityEvent;
}

@property(nonatomic) BOOL shouldReportToStore; // @synthesize shouldReportToStore=_shouldReportToStore;
@property(copy, nonatomic) SSVPlayActivityEvent *playActivityEvent; // @synthesize playActivityEvent=_playActivityEvent;
// - (void).cxx_destruct;
- (NSUInteger)reportingEventType;
- (BOOL)isValidReportingEvent;
@property(readonly, copy) NSString *description;

@end

