//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICDelegationConsumerNetService, NSInputStream, NSOutputStream;

@protocol ICDelegationConsumerNetServiceDelegate <NSObject>

@optional
- (void)delegationConsumerNetService:(ICDelegationConsumerNetService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
@end

