//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSPointerArray, PXLayoutPerformerOutput, PXRoundedCornerOverlayView, UIColor;

@interface PXCollageView : UIView
{
    double _spacing;
    long long _numberOfItems;
    double _cornerRadius;
    UIColor *_cornerBackgroundColor;
    double _imageCornerRadius;
    PXLayoutPerformerOutput *_layoutOutput;
    NSArray *__imageViews;
    NSPointerArray *__imageSizes;
    PXRoundedCornerOverlayView *__roundedCornerOverlayView;
}

+ (long long)maximumNumberOfItems;
@property(retain, nonatomic) PXRoundedCornerOverlayView *_roundedCornerOverlayView; // @synthesize _roundedCornerOverlayView=__roundedCornerOverlayView;
@property(readonly, nonatomic) NSPointerArray *_imageSizes; // @synthesize _imageSizes=__imageSizes;
@property(readonly, nonatomic) NSArray *_imageViews; // @synthesize _imageViews=__imageViews;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput; // @synthesize layoutOutput=_layoutOutput;
@property(nonatomic) double imageCornerRadius; // @synthesize imageCornerRadius=_imageCornerRadius;
@property(copy, nonatomic) UIColor *cornerBackgroundColor; // @synthesize cornerBackgroundColor=_cornerBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
// - (void).cxx_destruct;
- (void)_updateRoundedCornerOverlayView;
- (void)_updateImageViews;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(CGSize)arg1 forItemAtIndex:(long long)arg2;
- (CGSize)imageSizeForItemAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

