//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface IPARegion : NSObject <NSCopying, NSMutableCopying>
{
//    struct Region _imp;
}

+ (id)regionWithRegion:(id)arg1;
+ (id)regionWithRectArray:(id)arg1;
+ (id)regionWithRect:(CGRect)arg1;
+ (id)region;
- (double)area;
- (BOOL)includesRegion:(id)arg1;
- (BOOL)includesRect:(CGRect)arg1;
- (BOOL)intersectsRegion:(id)arg1;
- (BOOL)intersectsRect:(CGRect)arg1;
- (CGRect)bounds;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (BOOL)isEqualToRegion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEmpty;
- (NSUInteger)count;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRectArray:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (id)initWithRect:(CGRect)arg1;
- (id)init;
- (id)regionByFlippingInRect:(CGRect)arg1;
- (id)regionByApplyingAffineTransform:(CGAffineTransform)arg1;
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(CGSize)arg2;
- (id)regionByRoundingDown;
- (id)regionByRoundingUp;
- (id)regionByShrinkingBy:(CGPoint)arg1 inRect:(CGRect)arg2;
- (id)regionByShrinkingBy:(CGPoint)arg1;
- (id)regionByGrowingBy:(CGPoint)arg1 inRect:(CGRect)arg2;
- (id)regionByGrowingBy:(CGPoint)arg1;
- (id)regionByTranslatingBy:(CGPoint)arg1;
- (id)regionByScalingBy:(CGPoint)arg1;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByExcludingRect:(CGRect)arg1;
- (id)regionByClippingToRectArray:(id)arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByClippingToRect:(CGRect)arg1;
- (id)regionByRemovingRectArray:(id)arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByRemovingRect:(CGRect)arg1;
- (id)regionByAddingRectArray:(id)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByAddingRect:(CGRect)arg1;

@end

