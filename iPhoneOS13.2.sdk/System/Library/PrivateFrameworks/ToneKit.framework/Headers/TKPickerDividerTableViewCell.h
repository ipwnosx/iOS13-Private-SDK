//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIView;

@interface TKPickerDividerTableViewCell : UITableViewCell
{
    UIView *_dividerView;
    long long _contentBackdropOverlayBlendMode;
}

@property(nonatomic) long long contentBackdropOverlayBlendMode; // @synthesize contentBackdropOverlayBlendMode=_contentBackdropOverlayBlendMode;
// - (void).cxx_destruct;
- (CGRect)_dividerViewFrame;
- (void)layoutSubviews;
- (void)setSeparatorStyle:(long long)arg1;
@property(retain, nonatomic) UIColor *contentBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

