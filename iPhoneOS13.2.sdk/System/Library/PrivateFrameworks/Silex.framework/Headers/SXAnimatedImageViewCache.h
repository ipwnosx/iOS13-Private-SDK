//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, NSOperationQueue, SXAnimatedImage;
@protocol SXAnimatedImageViewCacheDelegate;

@interface SXAnimatedImageViewCache : NSObject
{
    BOOL _cachingEnabled;
//    struct os_unfair_lock_s _lock;
    id <SXAnimatedImageViewCacheDelegate> _delegate;
    SXAnimatedImage *_animatedImage;
    long long _singleImageByteSize;
    NSUInteger _lastRequestedIndex;
    NSOperationQueue *_queue;
    NSUInteger _numberOfCachedImages;
    NSMutableArray *_cachedImages;
    NSMutableIndexSet *_indicesToCache;
    CGSize _size;
}

@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSMutableIndexSet *indicesToCache; // @synthesize indicesToCache=_indicesToCache;
@property(readonly, nonatomic) NSMutableArray *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(nonatomic) NSUInteger numberOfCachedImages; // @synthesize numberOfCachedImages=_numberOfCachedImages;
// property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property NSUInteger lastRequestedIndex; // @synthesize lastRequestedIndex=_lastRequestedIndex;
@property long long singleImageByteSize; // @synthesize singleImageByteSize=_singleImageByteSize;
@property(nonatomic) BOOL cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) __weak SXAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(nonatomic) __weak id <SXAnimatedImageViewCacheDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)decodeImageFromSource:(CGImageSource )arg1 index:(NSUInteger)arg2;
- (void)checkCacheSize;
- (void)cacheNextImage;
- (void)prepareCache;
- (void)restoreCacheSize;
- (void)decreaseCacheSize;
@property(readonly, nonatomic) NSUInteger maxCacheSize;
@property(nonatomic, getter=preloadingSuspended) BOOL suspendPreloading;
- (void)prune;
- (id)imageForFrameIndex:(NSUInteger)arg1;
- (NSUInteger)nearestCachedFrameIndexForFrameIndex:(NSUInteger)arg1;
- (void)prepareImageForFrameIndex:(NSUInteger)arg1;
- (id)initWithImageSize:(CGSize)arg1;

@end

