//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTInMemoryResourceCache.h>

#import <AvatarUI/AVTImageCache-Protocol.h>

@interface AVTInMemoryImageCache : AVTInMemoryResourceCache <AVTImageCache>
{
}

- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)initWithLockProvider:(CDUnknownBlockType)arg1 logger:(id)arg2;

@end

