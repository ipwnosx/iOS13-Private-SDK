//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAShapeLayer, NSString, UIImage, UIImageView, _NTKCFaceDetailCollectionCellLabel;

@interface _NTKCFaceDetailCollectionCell : UICollectionViewCell
{
    UIImageView *_imageView;
    CAShapeLayer *_outlineView;
    _NTKCFaceDetailCollectionCellLabel *_label;
    BOOL _active;
    double _outlineOutset;
    UIImage *_image;
    NSString *_text;
    long long _style;
    CGRect _swatchFrame;
}

+ (double)outlineLineWidth;
+ (id)reuseIdentifier;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double outlineOutset; // @synthesize outlineOutset=_outlineOutset;
@property(nonatomic) CGRect swatchFrame; // @synthesize swatchFrame=_swatchFrame;
// - (void).cxx_destruct;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

