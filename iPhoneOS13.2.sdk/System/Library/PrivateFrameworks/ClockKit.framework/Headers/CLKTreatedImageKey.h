//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIImage;

@interface CLKTreatedImageKey : NSObject <NSCopying>
{
    UIImage *_rawImage;
    long long _scaleMode;
    double _scale;
    long long _maskMode;
    double _cornerRadius;
    CGSize _maxSize;
}

+ (id)keyWithRawImage:(id)arg1 maxSize:(CGSize)arg2 cornerRadius:(double)arg3;
+ (id)keyWithRawImage:(id)arg1 maxSize:(CGSize)arg2 maskMode:(long long)arg3;
+ (id)keyWithRawImage:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3;
+ (id)keyWithRawImage:(id)arg1 scale:(double)arg2 maskMode:(long long)arg3;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) long long maskMode; // @synthesize maskMode=_maskMode;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(readonly, nonatomic) UIImage *rawImage; // @synthesize rawImage=_rawImage;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

