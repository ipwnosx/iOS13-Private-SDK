//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HealthUI/MKMapViewDelegate-Protocol.h>

@class MKMapView;

@interface HKMapRouteTableViewCell : UITableViewCell <MKMapViewDelegate>
{
    MKMapView *_mapView;
}

+ (id)defaultReuseIdentifier;
@property(retain) MKMapView *mapView; // @synthesize mapView=_mapView;
// - (void).cxx_destruct;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setUpConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

