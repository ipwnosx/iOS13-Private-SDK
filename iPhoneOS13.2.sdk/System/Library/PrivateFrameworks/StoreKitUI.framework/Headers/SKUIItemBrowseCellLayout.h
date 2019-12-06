//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, _SKUIItemBrowseCellContentView;

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout
{
    _SKUIItemBrowseCellContentView *_cellContentView;
    CGSize _imageBoundingSize;
    BOOL _largeSpacing;
    long long _numberOfUserRatings;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    double _userRating;
}

@property(nonatomic) double userRating; // @synthesize userRating=_userRating;
@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(nonatomic, getter=isLargeSpacing) BOOL largeSpacing; // @synthesize largeSpacing=_largeSpacing;
@property(nonatomic) CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
// - (void).cxx_destruct;
- (void)_reloadUserRatingViews;
- (void)_initSKUIItemBrowseCellLayout;
- (id)_decimalNumberFormatter;
- (void)setIconImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)layoutForItemOfferChange;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *indexNumberString;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *category;
- (id)initWithTableViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end

