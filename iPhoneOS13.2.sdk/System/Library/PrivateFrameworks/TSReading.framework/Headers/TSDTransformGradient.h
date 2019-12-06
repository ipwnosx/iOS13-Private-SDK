//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDGradient.h>

#import <TSReading/TSDMixing-Protocol.h>

@interface TSDTransformGradient : TSDGradient <TSDMixing>
{
    CGPoint mStart;
    CGPoint mEnd;
    CGSize mBaseNaturalSize;
    CGAffineTransform mTransformBeforeUpgrade;
}

@property(nonatomic) CGSize baseNaturalSize; // @synthesize baseNaturalSize=mBaseNaturalSize;
@property(nonatomic) CGPoint endPoint; // @synthesize endPoint=mEnd;
@property(nonatomic) CGPoint startPoint; // @synthesize startPoint=mStart;
- (void)p_drawQuartzShadingInContext:(CGContextRef )arg1 withGradientNaturalSize:(CGSize)arg2 baseNaturalSize:(CGSize)arg3 start:(CGPoint)arg4 end:(CGPoint)arg5;
- (CGPoint)p_scalePoint:(CGPoint)arg1 fromShapeWithNaturalSize:(CGSize)arg2;
- (CGPoint)p_scalePoint:(CGPoint)arg1 toShapeWithNaturalSize:(CGSize)arg2;
- (void)p_setDefaultValues;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (double)gradientAngleInDegrees;
- (CGSize)baseNaturalSizeForBounds:(CGRect)arg1;
- (CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (CGAffineTransform)transformForSize:(CGSize)arg1;
- (void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef )arg3 isPDF:(BOOL)arg4;
- (void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef )arg2;
- (void)paintRect:(CGRect)arg1 inContext:(CGContextRef )arg2;
- (void)paintRect:(CGRect)arg1 inContext:(CGContextRef )arg2 atAngle:(double)arg3;
- (CGPoint)normalizedPointForSize:(CGSize)arg1 endPoint:(BOOL)arg2;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (BOOL)isEqualIgnoringTransform:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (NSUInteger)hash;
- (id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(CGRect)arg3;
- (id)initWithGradientStops:(id)arg1 type:(NSUInteger)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(NSUInteger)arg3;

@end

