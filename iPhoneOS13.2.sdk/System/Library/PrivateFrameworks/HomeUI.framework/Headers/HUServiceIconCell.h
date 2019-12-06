//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUIconView;
@protocol HFIconDescriptor;

@interface HUServiceIconCell : UICollectionViewCell
{
    BOOL _hasConfiguredConstraints;
    id <HFIconDescriptor> _iconDescriptor;
    HUIconView *_iconView;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL hasConfiguredConstraints; // @synthesize hasConfiguredConstraints=_hasConfiguredConstraints;
@property(readonly, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
// - (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)updateConstraints;
- (void)setSelected:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

