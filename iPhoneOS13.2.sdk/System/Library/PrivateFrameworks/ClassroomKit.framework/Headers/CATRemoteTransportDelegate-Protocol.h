//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CATRemoteConnectionTrustDecision, CATRemoteTransport;

@protocol CATRemoteTransportDelegate <NSObject>

@optional
- (void)transportDidSecure:(CATRemoteTransport *)arg1;
- (void)transport:(CATRemoteTransport *)arg1 encounteredTrustDecisionWhileTryingToSecure:(CATRemoteConnectionTrustDecision *)arg2;
- (void)transportWillSecure:(CATRemoteTransport *)arg1;
@end

