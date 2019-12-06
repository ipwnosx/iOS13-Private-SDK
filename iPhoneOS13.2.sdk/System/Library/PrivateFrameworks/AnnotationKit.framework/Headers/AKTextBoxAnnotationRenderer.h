//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKTextBoxAnnotationRenderer : AKAnnotationRenderer
{
}

+ (BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2;
+ (BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef )arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (CGPathRef)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2;
+ (CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(CGRect)arg2;
+ (CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3;
+ (CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;

@end

