//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXCollageView, UIImage, UIImageView;

@interface PXBadgedThumbnailView : UIView
{
    BOOL _showBadge;
    UIImage *_badgeImage;
    UIImageView *_placeholderImageView;
    PXCollageView *_collageView;
    UIImageView *_badgeView;
}

@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PXCollageView *collageView; // @synthesize collageView=_collageView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic, getter=shouldShowLikeBadge) BOOL showBadge; // @synthesize showBadge=_showBadge;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
// - (void).cxx_destruct;
- (void)setImageHidden:(BOOL)arg1 forItemAtIndex:(NSUInteger)arg2;
- (id)imageViewForItemAtIndex:(NSUInteger)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(NSUInteger)arg2;
- (BOOL)shouldShowBadge;
@property(nonatomic) long long numberOfItems;
- (void)layoutSubviews;
- (id)initWithplaceholderImageView:(id)arg1;

@end

