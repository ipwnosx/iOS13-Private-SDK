//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
{
}

+ (id)sharedPowerLogger;
- (void)reportIncomingLoxyMessage:(id)arg1;
- (void)reportIncomingCloudPush:(id)arg1;
- (void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2;
- (void)reportIncomingIPEvent:(id)arg1;
- (void)reportIncomingAdvertisementChange:(id)arg1;
- (void)reportConnection:(id)arg1 linkType:(long long)arg2;
- (id)linkTypeDescription:(long long)arg1;

@end

