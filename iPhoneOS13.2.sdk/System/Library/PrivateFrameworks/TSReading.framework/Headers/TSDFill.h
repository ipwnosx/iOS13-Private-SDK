//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDPathPainter-Protocol.h>
#import <TSReading/TSSThemeAsset-Protocol.h>

@interface TSDFill : NSObject <TSDPathPainter, TSSThemeAsset>
{
    int mInterest;
}

- (int)fillType;
- (void)i_flushCaches;
- (void)removeInterest;
- (void)addInterest;
- (id)referenceColor;
- (BOOL)drawsInOneStep;
- (BOOL)isClear;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (BOOL)canApplyToCAShapeLayer;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (BOOL)shouldBeReappliedToCALayer:(id)arg1;
- (BOOL)canApplyToCALayerByAddingSublayers;
- (BOOL)canApplyToCALayer;
- (BOOL)isThemeEquivalent:(id)arg1;
- (void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef )arg2;
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef )arg2;
- (void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef )arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(CGRect)arg1 inContext:(CGContextRef )arg2;

@end

