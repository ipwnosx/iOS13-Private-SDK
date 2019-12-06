//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCResponseMediaRemoteControllerChaining-Protocol.h>

@class MPCPlayerPath, MPMiddlewareChain, MPModelGenericObject, NSIndexPath;

@protocol MPCPlayerSessionResponseBuilder <MPCResponseMediaRemoteControllerChaining>

@optional
- (MPModelGenericObject *)sessionMetadataObject:(MPModelGenericObject *)arg1 atIndexPath:(NSIndexPath *)arg2 chain:(MPMiddlewareChain *)arg3;
- (MPCPlayerPath *)sessionPlayerPath:(MPCPlayerPath *)arg1 atIndex:(long long)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)sessionNumberOfSessions:(long long)arg1 forPlayerPathAtIndex:(long long)arg2 chain:(MPMiddlewareChain *)arg3;
- (long long)sessionNumberOfPlayerPaths:(long long)arg1 chain:(MPMiddlewareChain *)arg2;
@end

