//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>


@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface HangTracerController : PSListController <UITextFieldDelegate>
{
    float _hudThresholdMS;
    PSSpecifier *_hangtracerExplanation;
    PSSpecifier *_emptyGap;
    PSSpecifier *_hudTitle;
    PSSpecifier *_enabledHUD;
    PSSpecifier *_hudThresholdText;
    PSSpecifier *_hudThresholdSlider;
    PSSpecifier *_hudThresholdLabel;
}

// - (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleSliderTouchUpEvent:(id)arg1;
- (void)handleSliderChangedEvent:(id)arg1;
- (id)specifiers;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)hudThresholdText:(id)arg1;
- (id)hudThreshold:(id)arg1;
- (void)setHUDThreshold:(id)arg1 specifier:(id)arg2;
- (void)updateHUDThreshold:(float)arg1;
- (void)setHUDEnabled:(id)arg1 specifier:(id)arg2;
- (id)isEnabledHUD:(id)arg1;
- (id)init;

@end

