//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CATMessage, CATTransport, NSError;

@protocol CATTransportDelegate <NSObject>

@optional
- (void)transportDidInvalidate:(CATTransport *)arg1;
- (void)transport:(CATTransport *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)transport:(CATTransport *)arg1 didReceiveMessage:(CATMessage *)arg2;
- (void)transport:(CATTransport *)arg1 didFailToSendMessage:(CATMessage *)arg2 error:(NSError *)arg3;
- (void)transport:(CATTransport *)arg1 didSendMessage:(CATMessage *)arg2;
- (void)transportDidResume:(CATTransport *)arg1;
- (void)transportDidConnect:(CATTransport *)arg1;
@end

