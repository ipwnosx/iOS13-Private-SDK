//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol AVTCacheableResource, AVTCacheableResourceScope, AVTCachedResource;

@protocol AVTResourceCache <NSObject>
- (id <AVTCachedResource>)resourceForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2 cacheMissHandler:(id <AVTCachedResource> (^)(id <AVTCacheableResource>, id <AVTCacheableResourceScope>))arg3;
- (id <AVTCachedResource>)resourceForItem:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2;

@optional
- (void)clearCache;
- (void)evictResourceFromCache:(id <AVTCacheableResource>)arg1 scope:(id <AVTCacheableResourceScope>)arg2;
@end

