//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDBehaviorSettings, DNDBypassSettings, DNDScheduleSettings;

@protocol DNDRemoteServiceClientSettingsProtocol <NSObject>
- (void)deliverUpdatedScheduleSettings:(DNDScheduleSettings *)arg1;
- (void)deliverUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg1;
- (void)deliverUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg1;
@end

