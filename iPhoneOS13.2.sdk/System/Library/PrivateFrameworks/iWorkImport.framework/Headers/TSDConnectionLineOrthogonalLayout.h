//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDConnectionLineAbstractLayout.h>

__attribute__((visibility("hidden")))
@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout
{
}

- (CGPoint)axisSnapPoint:(CGPoint)arg1 toXs:(vector_b67dfe3a)arg2 toYs:(vector_b67dfe3a)arg3 withThreshold:(double)arg4;
- (BOOL)canEndpointsCoincide;
- (CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint [3])arg3;
- (CGRect)orthoRectOfLayout:(id)arg1 outset:(double)arg2;

@end

