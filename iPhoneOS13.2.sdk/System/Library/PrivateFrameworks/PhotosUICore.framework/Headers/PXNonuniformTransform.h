//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol UICoordinateSpace;

@interface PXNonuniformTransform : NSObject <NSCopying>
{
    CGRect _sourceRect;
    CGRect _targetRect;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    double _minimumScale;
    double _maximumScale;
}

+ (id)horizontallyDominantTransformWithSourceRect:(CGRect)arg1 targetRect:(CGRect)arg2 coordinateSpace:(id)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
+ (id)identityTransform;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)inverseTransform;
- (double)_adjustedZoomScale:(double)arg1;
- (CGAffineTransform)affineTransformForRect:(CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)init;

@end

