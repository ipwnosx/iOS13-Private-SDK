//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKAnnotationRendererUtilities : NSObject
{
}

+ (CGPathRef)newStandardStrokedBorderPathWithPath:(CGPathRef)arg1 withStrokeWidth:(double)arg2;
+ (void)setStandardLineDashInContext:(CGContextRef )arg1 forLineWidth:(double)arg2;
+ (void)setStandardLineStateInContext:(CGContextRef )arg1 forLineWidth:(double)arg2;
+ (void)endShadowInContext:(CGContextRef )arg1;
+ (void)beginShadowInContext:(CGContextRef )arg1 forAnnotation:(id)arg2;
+ (CGRect)outsetRectForShadow:(CGRect)arg1 onAnnotation:(id)arg2;
+ (CGPoint)_shadowDirectionForAnnotation:(id)arg1;

@end

