//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDPathSource.h>

#import <TSReading/TSDMixing-Protocol.h>

@class TSDBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing>
{
    TSDBezierPath *mPath;
    BOOL mIsRectangular;
    CGSize mNaturalSize;
}

+ (id)pathSourceWithBezierPath:(id)arg1;
@property(nonatomic) CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;
- (void)p_setBezierPath:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (BOOL)isCircular;
- (BOOL)isRectangularForever;
- (BOOL)isRectangular;
- (id)bezierPathWithoutFlips;
- (CGAffineTransform)transformToNaturalSize;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNaturalSize:(CGSize)arg1;
- (id)initWithBezierPath:(id)arg1;

@end

