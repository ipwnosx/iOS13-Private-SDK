//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTIntentAlarm, MTToggleAlarmIntent;

@protocol MTToggleAlarmIntentHandling <NSObject>
- (void)provideAlarmOptionsForToggleAlarm:(MTToggleAlarmIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)resolveAlarmForToggleAlarm:(MTToggleAlarmIntent *)arg1 withCompletion:(void (^)(MTIntentAlarmResolutionResult *))arg2;
- (void)resolveStateForToggleAlarm:(MTToggleAlarmIntent *)arg1 withCompletion:(void (^)(MTAlarmStateResolutionResult *))arg2;
- (void)resolveOperationForToggleAlarm:(MTToggleAlarmIntent *)arg1 withCompletion:(void (^)(MTAlarmOperationResolutionResult *))arg2;
- (void)handleToggleAlarm:(MTToggleAlarmIntent *)arg1 completion:(void (^)(MTToggleAlarmIntentResponse *))arg2;

@optional
- (MTIntentAlarm *)defaultAlarmForToggleAlarm:(MTToggleAlarmIntent *)arg1;
- (void)confirmToggleAlarm:(MTToggleAlarmIntent *)arg1 completion:(void (^)(MTToggleAlarmIntentResponse *))arg2;
@end

