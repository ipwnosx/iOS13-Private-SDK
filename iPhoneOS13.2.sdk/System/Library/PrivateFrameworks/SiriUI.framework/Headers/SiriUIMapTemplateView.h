//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

#import <SiriUI/MKMapViewDelegate-Protocol.h>

@class CLGeocoder, CLPlacemark, MKMapView, MKPinAnnotationView, UIButton, UILabel, UITapGestureRecognizer;
@protocol SiriUIMapTemplateViewDelegate;

@interface SiriUIMapTemplateView : SiriUIBaseTemplateView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    UILabel *_footnoteDescriptorLabel;
    UILabel *_footnoteLabel;
    MKPinAnnotationView *_pinAnnotationView;
    UIButton *_mapButton;
    CLPlacemark *_currentPlacemark;
    CLGeocoder *_geocoder;
    BOOL _needsToNotifyDelegateOfLocationUpdate;
    UITapGestureRecognizer *_tapRecognizer;
    id <SiriUIMapTemplateViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIMapTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleTapGesture:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)_mapButtonPressed:(id)arg1;
- (id)_configuredLabel;
- (id)_configuredFootnoteLabel;
- (id)_configuredFootnoteDescriptorLabel;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1;
- (void)prepareForDismissal;
- (void)layoutSubviews;
- (double)desiredHeight;
- (void)reloadData;
- (id)initWithDataSource:(id)arg1;

@end

