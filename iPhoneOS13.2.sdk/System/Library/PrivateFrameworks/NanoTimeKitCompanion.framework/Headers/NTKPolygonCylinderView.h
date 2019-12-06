//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class _NTKPolygonCylinderTransformView;

@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView>
{
    _NTKPolygonCylinderTransformView *_transformView;
    double _rotationAngle;
}

// - (void).cxx_destruct;
- (void)_updateTransform;
- (void)_informFaceViewsOfRotation;
- (void)_setRotationAngle:(double)arg1;
- (double)_rotationAngleForFaceIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(NSUInteger)arg2 toSideAtIndex:(NSUInteger)arg3;
- (void)transitionToSideAtIndex:(NSUInteger)arg1;
- (void)enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)viewForSideAtIndex:(NSUInteger)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) NSUInteger numberOfVisibleSides;
@property(nonatomic) NSUInteger numberOfSides;
- (id)init;

@end

