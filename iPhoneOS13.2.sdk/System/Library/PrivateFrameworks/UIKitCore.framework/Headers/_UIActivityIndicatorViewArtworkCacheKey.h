//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <NSCopying>
{
    long long _style;
    double _width;
    long long _spokeCount;
    long long _spokeFrameRatio;
    CGSize _shadowOffset;
    CGColorRef _color;
    CGColorRef _shadowColor;
}

- (void)dealloc;
- (BOOL)isEqualToCacheKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithStyle:(long long)arg1 width:(double)arg2 spokeCount:(long long)arg3 spokeFrameRatio:(long long)arg4 shadowOffset:(CGSize)arg5 color:(CGColorRef)arg6 shadowColor:(CGColorRef)arg7;

@end

