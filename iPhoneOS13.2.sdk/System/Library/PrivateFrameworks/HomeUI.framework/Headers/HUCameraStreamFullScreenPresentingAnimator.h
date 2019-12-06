//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>


@class HMCameraSnapshot, NSURL;

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning>
{
    HMCameraSnapshot *_cameraSnapshot;
    NSURL *_demoSnapshotURL;
}

@property(retain, nonatomic) NSURL *demoSnapshotURL; // @synthesize demoSnapshotURL=_demoSnapshotURL;
@property(readonly, nonatomic) HMCameraSnapshot *cameraSnapshot; // @synthesize cameraSnapshot=_cameraSnapshot;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2 snapshotDemoURL:(id)arg3;
- (id)initWithSourceCameraCell:(id)arg1 cameraSnapshot:(id)arg2;

@end

