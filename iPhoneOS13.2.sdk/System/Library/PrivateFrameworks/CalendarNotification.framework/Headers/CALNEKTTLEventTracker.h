//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTTLEventTracker-Protocol.h>

@interface CALNEKTTLEventTracker : NSObject <CALNTTLEventTracker>
{
}

+ (id)sharedInstance;
- (void)trackEventFiredTTLAlertWithAlertType:(NSUInteger)arg1 transportType:(NSUInteger)arg2 etaType:(NSUInteger)arg3 travelState:(NSUInteger)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6;
- (void)trackDirectionsEngagedForTTLAlertWithAlertType:(NSUInteger)arg1 transportType:(NSUInteger)arg2 etaType:(NSUInteger)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5;

@end

