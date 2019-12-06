//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDPathSource.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDSmartPathSource-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing>
{
    double mCornerRadius;
    double mTailSize;
    CGPoint mTailPosition;
    CGSize mNaturalSize;
    BOOL mIsTailAtCenter;
}

+ (id)quoteBubbleWithTailPosition:(CGPoint)arg1 tailSize:(double)arg2 naturalSize:(CGSize)arg3;
+ (id)calloutWithCornerRadius:(double)arg1 tailPosition:(CGPoint)arg2 tailSize:(double)arg3 naturalSize:(CGSize)arg4;
- (CGPoint)p_getControlKnobPointForRoundedRect;
- (void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1;
- (id)p_buildPath;
- (id)p_basePath;
- (void)p_getTailPath:(id)arg1 center:(CGPoint )arg2 tailSize:(double )arg3 intersections:(CGPoint [2])arg4;
- (CGPoint)p_adjustedCenterForPath:(id)arg1;
- (void)p_setTailAtCenter:(BOOL)arg1;
- (void)p_setNaturalSize:(CGSize)arg1;
- (void)p_setTailSize:(double)arg1;
- (CGPoint)p_tailPosition;
- (void)p_setTailPosition:(CGPoint)arg1;
- (void)p_setCornerRadius:(double)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (id)interiorWrapPath;
- (id)bezierPathWithoutFlips;
@property(readonly, nonatomic) BOOL isTailAtCenter;
@property(readonly, nonatomic) CGPoint tailCenter;
- (CGSize)naturalSize;
- (void)scaleToNaturalSize:(CGSize)arg1;
- (void)setNaturalSize:(CGSize)arg1;
- (id)valueForSetSelector:(SEL)arg1;
@property(nonatomic) CGPoint tailKnobPosition;
@property(nonatomic) CGPoint tailSizeKnobPosition;
@property(readonly, nonatomic) double maxTailSize;
@property(nonatomic) double tailSize;
@property(readonly, nonatomic) double maxCornerRadius;
@property(nonatomic) double cornerRadius;
- (BOOL)isOval;
- (CGPoint)getControlKnobPosition:(NSUInteger)arg1;
- (NSUInteger)numberOfControlKnobs;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithCornerRadius:(double)arg1 tailPosition:(CGPoint)arg2 tailSize:(double)arg3 naturalSize:(CGSize)arg4 tailAtCenter:(BOOL)arg5;
// - (void)saveToArchive:(struct PathSourceArchive )arg1;
// - (id)initWithArchive:(const struct PathSourceArchive )arg1;

@end

