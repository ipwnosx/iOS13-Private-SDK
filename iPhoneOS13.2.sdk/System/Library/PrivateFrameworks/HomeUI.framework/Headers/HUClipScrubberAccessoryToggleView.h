//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIButton;

@interface HUClipScrubberAccessoryToggleView : UIView
{
    UIButton *_accessoryButton;
    UIButton *_liveButton;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *liveButton; // @synthesize liveButton=_liveButton;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
// - (void).cxx_destruct;
- (void)displayWithoutBackgroundVisualEffects;
- (void)displayForTimelineState:(NSUInteger)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

