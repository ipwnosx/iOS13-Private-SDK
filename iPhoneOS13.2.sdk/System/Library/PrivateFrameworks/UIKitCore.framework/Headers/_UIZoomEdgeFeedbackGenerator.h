//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIEdgeFeedbackGenerator.h>

@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator
{
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _minimumTemporaryZoomScale;
    double _maximumTemporaryZoomScale;
}

@property(nonatomic) double maximumTemporaryZoomScale; // @synthesize maximumTemporaryZoomScale=_maximumTemporaryZoomScale;
@property(nonatomic) double minimumTemporaryZoomScale; // @synthesize minimumTemporaryZoomScale=_minimumTemporaryZoomScale;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) double minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
- (void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2;
- (void)zoomScaleUpdated:(double)arg1;
- (void)_updateMaximumValue;
- (id)initWithCoordinateSpace:(id)arg1;
- (id)init;

@end

