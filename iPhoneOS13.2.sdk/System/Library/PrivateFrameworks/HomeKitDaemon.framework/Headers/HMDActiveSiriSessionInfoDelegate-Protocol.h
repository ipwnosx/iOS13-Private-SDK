//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDActiveSiriSessionInfo, NSData, NSNumber;

@protocol HMDActiveSiriSessionInfoDelegate
- (void)activeSiriSession:(HMDActiveSiriSessionInfo *)arg1 didCreateAudioFrame:(NSData *)arg2 sequenceNumber:(NSNumber *)arg3 gain:(NSNumber *)arg4;
- (void)activeSiriSessionDidStop:(HMDActiveSiriSessionInfo *)arg1;
@end

