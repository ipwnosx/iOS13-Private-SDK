//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingHeroExplanationViewController.h>

@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController
{
    HRVideoPlayerView *_videoPlayerView;
}

@property(retain, nonatomic) HRVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
// - (void).cxx_destruct;
- (long long)stackedButtonViewLastButtonMode;
- (id)buttonTitleString;
- (id)bodyString;
- (id)titleString;
- (id)createHeroView;
- (void)setUpUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initForOnboarding:(BOOL)arg1;

@end

