//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImage, UIImageView, UIView;

@interface _NTKCPhotoListCell : UICollectionViewCell
{
    UIView *_selectionOverlayView;
    UIImageView *_selectionBadge;
    UIView *_highlightOverlayView;
    UIView *_content;
    UIImageView *_contentImageView;
    CGRect _crop;
}

+ (id)reuseIdentifier;
@property(nonatomic) CGRect crop; // @synthesize crop=_crop;
// - (void).cxx_destruct;
@property(retain, nonatomic) UIImage *photo;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

