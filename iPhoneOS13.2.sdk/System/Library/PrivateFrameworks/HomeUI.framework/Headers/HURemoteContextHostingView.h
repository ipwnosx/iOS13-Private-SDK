//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HURemoteContextHostingView : UIView
{
    UIView *_contentView;
    UIView *_destinationOutContainerView;
    UIView *_destinationOutView;
    UIView *_destinationOverView;
}

@property(readonly, nonatomic) UIView *destinationOverView; // @synthesize destinationOverView=_destinationOverView;
@property(readonly, nonatomic) UIView *destinationOutView; // @synthesize destinationOutView=_destinationOutView;
@property(readonly, nonatomic) UIView *destinationOutContainerView; // @synthesize destinationOutContainerView=_destinationOutContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (double)_cornerRadius;
@property(nonatomic) NSUInteger maskedCorners;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithContentView:(id)arg1;

@end

