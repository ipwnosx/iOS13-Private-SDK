//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKChallenge, GKPlayer;

@protocol GKChallengeEventHandlerUIDelegate <NSObject>

@optional
- (void)showLocallyCompletedBannerForIssuingPlayer:(GKPlayer *)arg1 challenge:(GKChallenge *)arg2 handler:(void (^)(void))arg3;
- (void)showRemotelyCompletedBannerForReceivingPlayer:(GKPlayer *)arg1 challenge:(GKChallenge *)arg2 handler:(void (^)(void))arg3;
- (void)showReceivedBannerForIssuingPlayer:(GKPlayer *)arg1 challenge:(GKChallenge *)arg2 handler:(void (^)(void))arg3;
@end

