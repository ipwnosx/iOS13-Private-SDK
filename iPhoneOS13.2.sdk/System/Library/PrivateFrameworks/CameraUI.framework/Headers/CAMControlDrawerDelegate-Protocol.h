//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMControlDrawer;

@protocol CAMControlDrawerDelegate <NSObject>
- (void)controlDrawerDidCreateLowLightSlider:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateIntensitySlider:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateApertureSlider:(CAMControlDrawer *)arg1;
- (void)controlDrawerDidCreateFilterScrubber:(CAMControlDrawer *)arg1;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didCreateControlForType:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 wantsFilterScrubberVisible:(BOOL)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeTimerDuration:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeLivePhotoMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeAspectRatio:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeFlashMode:(long long)arg2;
- (void)controlDrawerFlashButtonUnavailable:(CAMControlDrawer *)arg1;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didChangeHDRMode:(long long)arg2;
- (void)controlDrawer:(CAMControlDrawer *)arg1 didSelectMenuItemForControlType:(long long)arg2;
@end

