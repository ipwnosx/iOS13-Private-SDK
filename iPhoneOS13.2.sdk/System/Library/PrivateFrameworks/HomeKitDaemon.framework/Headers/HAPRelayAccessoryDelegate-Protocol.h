//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HAPAccessoryDelegate-Protocol.h>

@class HAPRelayAccessory, NSData, NSError, NSString;

@protocol HAPRelayAccessoryDelegate <HAPAccessoryDelegate>
- (void)accessory:(HAPRelayAccessory *)arg1 didPairRelayWithError:(NSError *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didActivateRelayWithError:(NSError *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateRelayState:(NSUInteger)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateRelayEnabled:(BOOL)arg2;

@optional
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateAccessoryAccessToken:(NSData *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateAccessoryIdentifier:(NSString *)arg2;
@end

