//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, VideoAttributes;

@protocol VCRemoteVideoManagerDelegate <NSObject>
- (void)connectionDidChangeWithLocalInterfaceType:(NSString *)arg1 remoteInterfaceType:(NSString *)arg2 streamToken:(long long)arg3;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteVideoDidSuspend:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(VideoAttributes *)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(VideoAttributes *)arg1 streamToken:(long long)arg2;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;

@optional
- (void)remoteVideoServerDidDie;
@end

