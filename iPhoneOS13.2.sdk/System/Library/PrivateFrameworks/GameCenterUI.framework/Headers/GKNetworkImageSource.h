//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource
{
    NSMutableDictionary *_loadingGroups;
}

@property(retain, nonatomic) NSMutableDictionary *loadingGroups; // @synthesize loadingGroups=_loadingGroups;
- (void)loadImageForURLString:(id)arg1 loader:(id /* block */)arg2 reference:(id)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)loadAndCacheAvatarFromGamedForURLString:(id)arg1 useUIImage:(_Bool)arg2 cacheSubdirectory:(id)arg3 reference:(id)arg4 queue:(id)arg5 handler:(id /* block */)arg6;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (_Bool)imageNeedsRefresh:(id)arg1;

@end
