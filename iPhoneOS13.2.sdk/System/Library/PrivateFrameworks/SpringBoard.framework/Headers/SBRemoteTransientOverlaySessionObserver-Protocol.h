//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, SBRemoteTransientOverlaySession;

@protocol SBRemoteTransientOverlaySessionObserver <NSObject>

@optional
- (void)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 didInvalidateWithReason:(long long)arg2 error:(NSError *)arg3;
- (void)remoteTransientOverlaySessionDidDeactivate:(SBRemoteTransientOverlaySession *)arg1;
- (void)remoteTransientOverlaySessionDidActivate:(SBRemoteTransientOverlaySession *)arg1;
@end

