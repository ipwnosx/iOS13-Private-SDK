//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell
{
    UIView *_contentChildView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UIView *contentChildView; // @synthesize contentChildView=_contentChildView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setColoringWithColorScheme:(id)arg1;

@end

