//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDHTTPClientMessageTransport, NSDictionary, NSError;

@protocol HMDHTTPClientMessageTransportDelegate <NSObject>
- (void)client:(HMDHTTPClientMessageTransport *)arg1 didReceiveMessage:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)client:(HMDHTTPClientMessageTransport *)arg1 didStopWithError:(NSError *)arg2;
@end

