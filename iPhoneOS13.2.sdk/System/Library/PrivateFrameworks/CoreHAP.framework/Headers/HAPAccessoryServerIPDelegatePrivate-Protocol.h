//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerDelegatePrivate-Protocol.h>

@class HAPAccessoryServerIP, NSData;

@protocol HAPAccessoryServerIPDelegatePrivate <HAPAccessoryServerDelegatePrivate>
- (void)accessoryServerIP:(HAPAccessoryServerIP *)arg1 willSendHTTPHeaders:(NSData *)arg2 httpBody:(NSData *)arg3;
- (void)accessoryServerIP:(HAPAccessoryServerIP *)arg1 didReceiveHTTPHeaders:(NSData *)arg2 httpBody:(NSData *)arg3;
@end

