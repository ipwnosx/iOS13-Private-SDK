//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSPageControl, CSQuickActionsView, SBFLockScreenDateView, SBHomeGrabberView, SBUICallToActionLabel, SBUILegibilityView, SBUIProudLockIconView, SBWallpaperController, UILabel, UIStatusBar, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView
{
    UIView *_wallpaperView;
    SBFLockScreenDateView *_dateView;
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;
    UIStatusBar *_statusBar;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperController *_wallpaperController;
    SBUILegibilityView *_cameraView;
    UILabel *_slideToUnlockView;
    CSPageControl *_dashBoardPageControl;
    SBUICallToActionLabel *_callToActionLabel;
    SBUIProudLockIconView *_proudLockIconView;
    CSQuickActionsView *_quickActionsView;
    SBHomeGrabberView *_homeGrabberView;
}

// - (void).cxx_destruct;
- (void)_layoutHomeGrabberView;
- (void)_layoutQuickActionsView;
- (void)_layoutProudLockIconView;
- (void)_layoutCallToActionLabel;
- (void)_layoutPageControl;
- (void)_layoutWallpaperView;
- (void)_layoutDateView;
- (void)_layoutStatusBar;
- (void)layoutSubviews;
- (void)_setupHomeGrabberView;
- (void)_setupQuickActionView;
- (void)_setupProudLockIconView;
- (void)_setupCallToActionLabel;
- (void)_setupPageControl;
- (void)_setupStatusBar;
- (void)_setupDateViewWithOptions:(NSUInteger)arg1;
- (void)_setupWallpaperViewWithImage:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 wallpaperController:(id)arg2 options:(NSUInteger)arg3 wallpaperImage:(id)arg4;

@end

