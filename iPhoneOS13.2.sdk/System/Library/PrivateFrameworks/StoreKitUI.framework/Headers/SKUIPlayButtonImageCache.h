//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, UIImage;

@interface SKUIPlayButtonImageCache : NSObject
{
//    struct os_unfair_lock_s _imageLock;
    NSBundle *_bundle;
    NSString *_playImageName;
    UIImage *_playImage;
    NSString *_pauseImageName;
    UIImage *_pauseImage;
    NSString *_stopImageName;
    UIImage *_stopImage;
}

+ (id)imageCacheForStyle:(long long)arg1;
// - (void).cxx_destruct;
- (void)preloadImages;
@property(readonly) UIImage *stopImage;
@property(readonly) UIImage *pauseImage;
@property(readonly) UIImage *playImage;
- (id)initWithStyle:(long long)arg1;

@end

