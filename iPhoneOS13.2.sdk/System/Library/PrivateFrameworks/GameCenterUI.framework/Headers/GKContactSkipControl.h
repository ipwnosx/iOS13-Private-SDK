//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSMutableDictionary, NSString, UIView;

@interface GKContactSkipControl : UIControl
{
    NSArray *_values;
    NSString *_lastSelectedValue;
    NSArray *_buttons;
    UIView *_buttonView;
    UIView *_centeringView;
    NSMutableDictionary *_buttonsToTitles;
}

@property(retain, nonatomic) NSMutableDictionary *buttonsToTitles; // @synthesize buttonsToTitles=_buttonsToTitles;
@property(retain, nonatomic) UIView *centeringView; // @synthesize centeringView=_centeringView;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSString *lastSelectedValue; // @synthesize lastSelectedValue=_lastSelectedValue;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
// - (void).cxx_destruct;
- (void)valueSelected:(id)arg1;
- (void)determineButtonFromGesture:(id)arg1;
- (void)setupValueButtons;
- (long long)valueButtonCountThatFitsHeight:(double)arg1;
- (id)nextTitleFollowingValue:(id)arg1;
- (id)compactPhoneValues:(long long)arg1;
- (void)setupButtonView;
- (void)adjustForTraitCollection:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(CGRect)arg1;

@end

