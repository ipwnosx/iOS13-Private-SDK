//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HomeUI/HUControlView-Protocol.h>

@class NSString, UISlider;
@protocol HUControlViewDelegate;

@interface HUSimpleSliderControlView : UIView <HUControlView>
{
    NSString *_identifier;
    id <HUControlViewDelegate> _delegate;
    UISlider *_slider;
}

+ (Class)valueClass;
@property(readonly, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)_sliderValueChanged:(id)arg1;
- (void)_sliderTouchUp:(id)arg1;
- (void)_sliderTouchDown:(id)arg1;
@property(nonatomic, getter=isDisabled) BOOL disabled;
@property(retain, nonatomic) id value;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
@property(nonatomic) float maxValue;
@property(nonatomic) float minValue;
- (id)initWithFrame:(CGRect)arg1;

@end

