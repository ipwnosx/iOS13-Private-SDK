//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;

@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication
{
    id <HMDRemoteLoginInitiatorAuthenticationDelegate> _delegate;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak id <HMDRemoteLoginInitiatorAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2;
- (int)loginType;
- (void)authenticate;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;

@end

