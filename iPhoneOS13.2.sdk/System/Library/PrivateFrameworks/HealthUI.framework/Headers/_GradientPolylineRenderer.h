//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKOverlayPathRenderer.h>

@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer
{
    HKRouteMapGenerator *_generator;
}

// - (void).cxx_destruct;
// - (BOOL)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;
// - (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(CGContextRef )arg3;
// - (CDStruct_c3b9c2ee)_originMapPoint;
- (id)initWithOverlay:(id)arg1 locationReadings:(id)arg2;

@end

