//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardTransactionMapItem, PKTransactionMapView, UIActivityIndicatorView, UIImageView, UILabel;

@interface PKPaymentTransactionMapCollectionViewCell : PKDashboardCollectionViewCell
{
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinner;
    BOOL _showDisclosureIndicator;
    BOOL _showSpinner;
    PKDashboardTransactionMapItem *_item;
    PKTransactionMapView *_mapView;
    UILabel *_titleLabel;
}

@property(nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property(nonatomic) BOOL showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) PKTransactionMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) PKDashboardTransactionMapItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (double)maxWidthForTransactionCellInWidth:(double)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)prepareForReuse;
- (void)_updateSpinnerAndDisclosureIndicator;
- (id)initWithFrame:(CGRect)arg1;

@end

