//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUIconButton;
@protocol HFIconDescriptor;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell
{
    HUIconButton *_iconButton;
}

@property(retain, nonatomic) HUIconButton *iconButton; // @synthesize iconButton=_iconButton;
// - (void).cxx_destruct;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

