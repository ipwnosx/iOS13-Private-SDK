//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class ACAccount;

@interface HMDRemoteLoginInitiatorCompanionAuthentication : HMDRemoteLoginInitiatorAuthentication
{
    ACAccount *_account;
}

+ (id)logCategory;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (void)_authenticate;
- (void)authenticate;
- (int)loginType;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;

@end

