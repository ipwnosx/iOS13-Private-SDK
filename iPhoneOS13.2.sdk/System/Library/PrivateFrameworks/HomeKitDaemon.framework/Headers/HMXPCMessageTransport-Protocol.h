//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMFMessage;

@protocol HMXPCMessageTransport <NSObject>
- (void)handleMessage:(HMFMessage *)arg1 responseHandler:(void (^)(NSError *, NSDictionary *))arg2;
- (void)handleMessage:(HMFMessage *)arg1;
@end

