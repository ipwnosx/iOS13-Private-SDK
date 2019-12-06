//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@interface _UIReflectingView : UIView
{
    UIView *_containerView;
    UIView *_gradientView;
    double _reflectionAlpha;
}

@property(readonly, retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
// - (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
@property(nonatomic) double reflectionFraction;
@property(nonatomic) double reflectionAlpha;
- (void)_updateGradientColors;
- (id)initWithFrame:(CGRect)arg1;
- (id)_gradientLayer;

@end

