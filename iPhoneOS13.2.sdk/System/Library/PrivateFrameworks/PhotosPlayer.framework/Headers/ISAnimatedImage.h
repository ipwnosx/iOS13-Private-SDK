//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISFrameCache;

@interface ISAnimatedImage : NSObject
{
    CGImageSource _imageSource;
    double _frameDelayTimes;
    NSUInteger _frameCount;
    NSUInteger _loopCount;
    double _duration;
    ISFrameCache *_frameCache;
    CGSize _pixelSize;
}

@property(readonly, nonatomic) ISFrameCache *frameCache; // @synthesize frameCache=_frameCache;
@property(readonly, nonatomic) CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSUInteger loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) NSUInteger frameCount; // @synthesize frameCount=_frameCount;
// - (void).cxx_destruct;
- (void)_preloadDelayTimes;
@property(nonatomic) long long cacheStrategy;
- (double)frameDelayAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithImageSource:(CGImageSource )arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3;
- (id)initWithImageSource:(CGImageSource )arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(CGImageSource )arg1;
- (id)initWithData:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

