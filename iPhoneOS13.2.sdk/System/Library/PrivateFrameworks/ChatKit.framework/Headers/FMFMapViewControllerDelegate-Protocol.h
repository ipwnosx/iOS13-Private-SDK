//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContact, FMFHandle, FMFMapViewController, UIView;
@protocol MKAnnotation;

@protocol FMFMapViewControllerDelegate <NSObject>

@optional
- (CNContact *)annotationContactForHandle:(FMFHandle *)arg1;
- (void )annotationABRecordForHandle:(FMFHandle *)arg1;
- (UIView *)titleViewForSelectedHandle;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didReceiveLocation:(id <MKAnnotation>)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didDeselectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didSelectHandle:(FMFHandle *)arg2;
- (BOOL)canSelectAnnotation:(id <MKAnnotation>)arg1;
@end

