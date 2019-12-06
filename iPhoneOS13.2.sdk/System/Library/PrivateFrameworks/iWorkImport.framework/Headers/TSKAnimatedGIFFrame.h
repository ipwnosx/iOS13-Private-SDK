//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKAnimatedGIFFrame : NSObject
{
    CGImageSource mSource;
    CGImageRef mPreloadedImage;
    NSUInteger mIndex;
    double mTime;
}

@property(readonly, nonatomic) double time; // @synthesize time=mTime;
@property(readonly, nonatomic) NSUInteger index; // @synthesize index=mIndex;
@property(readonly, nonatomic) CGImageRef image;
- (id)description;
- (void)dealloc;
- (id)initWithSource:(CGImageSource )arg1 index:(NSUInteger)arg2 time:(double)arg3 preloadImage:(BOOL)arg4;

@end

