//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMClient/_TtC8FMClient7Session.h>

#import <FMClient/_TtP8FMClient21ServerSessionProtocol_-Protocol.h>

@interface _TtC8FMClient7Session (FMClient) <_TtP8FMClient21ServerSessionProtocol_>
- (void)playSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deviceSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverNearbyDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateCacheWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)voiceAssistantSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

