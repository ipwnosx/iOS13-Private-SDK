//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPass, PKPassSnapshotter, UIImageView, UILabel;

@interface PKPassValueAddedServiceInfoView : UIView
{
    long long _style;
    PKPass *_pass;
    PKPassSnapshotter *_snapshotter;
    UILabel *_labelView;
    UIImageView *_snapshotView;
    UILabel *_statusView;
}

@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (double)_baselineDistance;
- (id)_statusFont;
- (id)_labelFont;
- (id)_statusAttributedStringForStyle:(long long)arg1;
- (id)_labelAttributedStringForString:(id)arg1;
- (CGSize)_snapshotSize;
- (void)setPass:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setStyle:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_calculateViewMetricsForWidth:(double)arg1 labelSize:(CGSize )arg2 statusSize:(CGSize )arg3 baselineAdjustment:(double )arg4;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

