//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHStrokeGroupBaselineVisualization : CHStrokeGroupBasedVisualization
{
}

- (CGRect)_labelBoundsForAnchorPoint:(CGPoint)arg1;
- (CGAffineTransform)_orientationTransformForStrokeBounds:(CGRect)arg1 atWritingDirectionIndex:(long long)arg2 inGroup:(id)arg3;
- (void)_getOrientedBounds:(CGRect )arg1 length:(double )arg2 forStroke:(id)arg3 atWritingDirectionIndex:(long long)arg4 inGroup:(id)arg5;
- (CGPathRef)_newBaselinePathForStrokeGroup:(id)arg1 outFirstPoint:(CGPoint )arg2 strokeProvider:(id)arg3;
- (void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef )arg2 viewBounds:(CGRect)arg3;
- (CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (long long)layeringPriority;

@end

