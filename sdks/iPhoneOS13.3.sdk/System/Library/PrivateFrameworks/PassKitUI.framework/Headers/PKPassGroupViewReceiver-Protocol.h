//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPGSVTransitionInterstitialView, PKPass, PKPassGroupView;

@protocol PKPassGroupViewReceiver <NSObject>
- (void)groupViewIsAvailable:(PKPassGroupView *)arg1;
- (void)trailingHeaderViewInterstitialIsAvailable:(PKPGSVTransitionInterstitialView *)arg1;
- (void)leadingHeaderViewInterstitialIsAvailable:(PKPGSVTransitionInterstitialView *)arg1;

@optional
- (void)setTransitionDuration:(double)arg1;
- (void)groupViewDidMoveToReceiver:(PKPassGroupView *)arg1;
- (void)groupViewWillBeAvailable:(PKPassGroupView *)arg1;
- (void)groupViewNeedsAnimating:(PKPassGroupView *)arg1 withVelocity:(double)arg2 dragging:(BOOL)arg3;
- (void)didDeletePass:(PKPass *)arg1;
- (void)willDeletePass:(PKPass *)arg1;
@end
