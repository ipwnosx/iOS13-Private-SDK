//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImage, UIImageView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryListItemView : UIView
{
    VUILabel *_titleLabel;
    UIImage *_itemImage;
    UIImageView *_listImageView;
}

@property(retain, nonatomic) UIImageView *listImageView; // @synthesize listImageView=_listImageView;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;

@end

