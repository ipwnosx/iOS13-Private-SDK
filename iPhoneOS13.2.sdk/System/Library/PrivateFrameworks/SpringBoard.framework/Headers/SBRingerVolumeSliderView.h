//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface SBRingerVolumeSliderView : UIView
{
    double _value;
    UIView *_backgroundView;
    UIView *_fillView;
}

@property(retain, nonatomic) UIView *fillView; // @synthesize fillView=_fillView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

