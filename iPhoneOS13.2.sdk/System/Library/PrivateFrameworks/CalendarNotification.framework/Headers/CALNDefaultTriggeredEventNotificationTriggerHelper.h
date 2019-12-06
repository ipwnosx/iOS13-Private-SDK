//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTriggeredEventNotificationTriggerHelper-Protocol.h>

@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper>
{
    id <CALNTravelAdvisoryAuthority> _travelAdvisoryAuthority;
    id <CalDateProvider> _dateProvider;
}

@property(readonly, nonatomic) id <CalDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <CALNTravelAdvisoryAuthority> travelAdvisoryAuthority; // @synthesize travelAdvisoryAuthority=_travelAdvisoryAuthority;
// - (void).cxx_destruct;
- (BOOL)_exceededMaximumTravelTimeThresholdForHypothesis:(id)arg1;
- (BOOL)_eventWillEndBeforeUserArrivesForHypothesis:(id)arg1 eventEndDate:(id)arg2;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)arg1 oldNotificationData:(id)arg2;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (BOOL)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4 hasExistingTravelAdvice:(BOOL)arg5 satisfiesMinimumTravelTimeThreshold:(BOOL)arg6;
- (BOOL)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (BOOL)shouldTriggerForSourceClientIdentifier:(id)arg1 trigger:(NSUInteger)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4;
- (id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2;

@end

