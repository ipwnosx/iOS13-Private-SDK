//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CTPNRRequestSentInfo, CTXPCServiceSubscriptionContext, NSDictionary;

@protocol CoreTelephonyClientPNRDelegate <NSObject>

@optional
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 pnrSupportChanged:(BOOL)arg2;
- (void)pnrReadyStateNotification:(CTXPCServiceSubscriptionContext *)arg1 regState:(BOOL)arg2;
- (void)pnrResponseReceived:(CTXPCServiceSubscriptionContext *)arg1 pnrRspData:(NSDictionary *)arg2;
- (void)pnrRequestSent:(CTXPCServiceSubscriptionContext *)arg1 pnrReqData:(CTPNRRequestSentInfo *)arg2;
@end

