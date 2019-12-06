//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings, SBFFluidBehaviorSettings;

@interface SBFHomeGrabberSettings : PTSettings
{
    BOOL _enabled;
    BOOL _removeViewOnHide;
    BOOL _resetAutoHideTimeOnRotation;
    long long _initializationStyle;
    long long _edgeProtectOverride;
    long long _autoHideOverride;
    double _autoHideTime;
    double _autoHideTimeOnAppRequest;
    double _delayForUnhideOnTouch;
    double _delayForUnhideOnAppRequest;
    double _bounceHitTestOutsetTop;
    double _bounceHitTestOutsetSides;
    SBFAnimationSettings *_hideAnimationSettings;
    SBFAnimationSettings *_unhideAnimationSettings;
    SBFAnimationSettings *_hideForHomeGestureOwnershipAnimationSettings;
    SBFAnimationSettings *_unhideForHomeGestureOwnershipAnimationSettings;
    SBFAnimationSettings *_thinToProminentAnimationSettings;
    SBFAnimationSettings *_prominentToThinAnimationSettings;
    SBFAnimationSettings *_forcedProminentToThinAnimationSettings;
    SBFAnimationSettings *_lumaResponseAnimationSettings;
    SBFAnimationSettings *_initialLumaResponseAnimationSettings;
    SBFAnimationSettings *_rotationFadeOutAnimationSettings;
    SBFAnimationSettings *_rotationFadeInAnimationSettings;
    SBFFluidBehaviorSettings *_edgeProtectAnimationSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFFluidBehaviorSettings *edgeProtectAnimationSettings; // @synthesize edgeProtectAnimationSettings=_edgeProtectAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *rotationFadeInAnimationSettings; // @synthesize rotationFadeInAnimationSettings=_rotationFadeInAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *rotationFadeOutAnimationSettings; // @synthesize rotationFadeOutAnimationSettings=_rotationFadeOutAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *initialLumaResponseAnimationSettings; // @synthesize initialLumaResponseAnimationSettings=_initialLumaResponseAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *lumaResponseAnimationSettings; // @synthesize lumaResponseAnimationSettings=_lumaResponseAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *forcedProminentToThinAnimationSettings; // @synthesize forcedProminentToThinAnimationSettings=_forcedProminentToThinAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *prominentToThinAnimationSettings; // @synthesize prominentToThinAnimationSettings=_prominentToThinAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *thinToProminentAnimationSettings; // @synthesize thinToProminentAnimationSettings=_thinToProminentAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *unhideForHomeGestureOwnershipAnimationSettings; // @synthesize unhideForHomeGestureOwnershipAnimationSettings=_unhideForHomeGestureOwnershipAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *hideForHomeGestureOwnershipAnimationSettings; // @synthesize hideForHomeGestureOwnershipAnimationSettings=_hideForHomeGestureOwnershipAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *unhideAnimationSettings; // @synthesize unhideAnimationSettings=_unhideAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *hideAnimationSettings; // @synthesize hideAnimationSettings=_hideAnimationSettings;
@property(nonatomic) double bounceHitTestOutsetSides; // @synthesize bounceHitTestOutsetSides=_bounceHitTestOutsetSides;
@property(nonatomic) double bounceHitTestOutsetTop; // @synthesize bounceHitTestOutsetTop=_bounceHitTestOutsetTop;
@property(nonatomic) double delayForUnhideOnAppRequest; // @synthesize delayForUnhideOnAppRequest=_delayForUnhideOnAppRequest;
@property(nonatomic) double delayForUnhideOnTouch; // @synthesize delayForUnhideOnTouch=_delayForUnhideOnTouch;
@property(nonatomic) BOOL resetAutoHideTimeOnRotation; // @synthesize resetAutoHideTimeOnRotation=_resetAutoHideTimeOnRotation;
@property(nonatomic) double autoHideTimeOnAppRequest; // @synthesize autoHideTimeOnAppRequest=_autoHideTimeOnAppRequest;
@property(nonatomic) double autoHideTime; // @synthesize autoHideTime=_autoHideTime;
@property(nonatomic) long long autoHideOverride; // @synthesize autoHideOverride=_autoHideOverride;
@property(nonatomic) long long edgeProtectOverride; // @synthesize edgeProtectOverride=_edgeProtectOverride;
@property(nonatomic) BOOL removeViewOnHide; // @synthesize removeViewOnHide=_removeViewOnHide;
@property(nonatomic) long long initializationStyle; // @synthesize initializationStyle=_initializationStyle;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end

