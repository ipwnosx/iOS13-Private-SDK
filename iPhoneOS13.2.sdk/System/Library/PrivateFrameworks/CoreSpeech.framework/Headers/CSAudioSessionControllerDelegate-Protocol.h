//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSAudioSessionController, NSDictionary;

@protocol CSAudioSessionControllerDelegate <NSObject>

@optional
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionOwnerLostNotification:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(NSDictionary *)arg2;
@end

