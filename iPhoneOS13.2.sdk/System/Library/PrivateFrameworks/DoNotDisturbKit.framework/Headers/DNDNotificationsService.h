//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbKit/DNDSettingsUpdateListener-Protocol.h>
#import <DoNotDisturbKit/DNDStateUpdateListener-Protocol.h>
#import <DoNotDisturbKit/UNUserNotificationCenterDelegate-Protocol.h>

@class DNDBehaviorSettings, DNDBypassSettings, DNDModeAssertionService, DNDSettingsService, DNDState, DNDStateModeAssertionMetadata, DNDStateService, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    DNDModeAssertionService *_notificationsAssertionService;
    DNDStateService *_notificationsStateService;
    DNDSettingsService *_notificationsSettingsService;
    BOOL _doNotDisturbActive;
    BOOL _basicActive;
    BOOL _sleepActive;
    BOOL _bedtimeActive;
    BOOL _drivingActive;
    BOOL _workoutActive;
    DNDStateModeAssertionMetadata *_longestAssertionMetadata;
    DNDState *_currentState;
    DNDBehaviorSettings *_currentBehaviorSettings;
    DNDBypassSettings *_currentPhoneCallBypassSettings;
    UNUserNotificationCenter *_notificationsCenter;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(BOOL)arg1 significantTimeChange:(BOOL)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)settingsService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)resume;
- (id)initWithClientIdentifier:(id)arg1;

@end

