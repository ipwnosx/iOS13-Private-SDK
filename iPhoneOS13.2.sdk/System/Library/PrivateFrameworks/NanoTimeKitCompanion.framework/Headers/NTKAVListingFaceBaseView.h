//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAVFaceBaseView.h>

@class NSTimer, NTKDelayedBlock, NTKTaskScheduler, UIView;
@protocol NTKAVListing;

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView
{
    BOOL _updateWhenUnpausing;
    NTKTaskScheduler *_taskScheduler;
    BOOL _preLoadingVideoOnSleep;
    BOOL _preLoadedVideoOnSleep;
    BOOL _shouldPlayOnWake;
    BOOL _isPauseLockedout;
    BOOL _isPaused;
    BOOL _shouldPause;
    NSTimer *_playOnWakeTimeout;
    NTKDelayedBlock *_playNextVideoDelayBlock;
    NTKDelayedBlock *_pauseLockoutBlock;
    UIView *_blackView;
    long long _previousDataMode;
    BOOL _shouldChangeVariantForScreenWake;
    BOOL _contentUnloadedForFaceSwiping;
    id <NTKAVListing> _currentListing;
}

@property(nonatomic) BOOL contentUnloadedForFaceSwiping; // @synthesize contentUnloadedForFaceSwiping=_contentUnloadedForFaceSwiping;
@property(nonatomic) BOOL shouldChangeVariantForScreenWake; // @synthesize shouldChangeVariantForScreenWake=_shouldChangeVariantForScreenWake;
@property(retain, nonatomic) id <NTKAVListing> currentListing; // @synthesize currentListing=_currentListing;
@property(readonly, nonatomic) BOOL shouldPause; // @synthesize shouldPause=_shouldPause;
@property(readonly, nonatomic) BOOL paused; // @synthesize paused=_isPaused;
// - (void).cxx_destruct;
- (void)_reset;
- (void)_updateImageToBlur;
- (void)_cancelPauseLockout;
- (void)_activatePauseLockout;
- (void)_cancelDelayedPlayback;
- (void)_handleFaceStyleDidChange;
- (void)_playNextVideoAfterDelay:(double)arg1;
- (void)_playNextVideo;
- (void)_playQueuedUpVideo;
- (void)_transitionToPosterView:(id)arg1;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_cancelAllTasks;
- (id)_complicationFlickerWorkgroundAnimationWithDuration:(double)arg1 applier:(CDUnknownBlockType)arg2;
- (void)_unpauseFromSwitcher;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_playVideo;
- (void)_pauseImmediately;
- (void)_updatePaused;
- (BOOL)_timeLabelUsesLegibility;
- (void)_prepareForEditing;
- (void)_applySlow;
- (void)_applyFrozen;
- (void)faultInFaceContentSkippedDuringSwiping;
- (void)_applyDataMode;
- (void)_unloadSnapshotContentViews;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)_loadSnapshotContentViews;
- (void)_cleanupAfterOrb:(BOOL)arg1;
- (void)_prepareForOrb;
- (BOOL)_needsVignette;
- (id)_curtainView;
- (BOOL)_curtainViewVisible;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideCurtainView;
- (void)_showCurtainView;
- (void)_handleScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_queuePreloadVideoTask;
- (void)_performPreloadVideoTask;
- (id)_onDeckPosterImageView;
- (id)_nextListing;
- (void)_resetVideoForListing;
- (void)_loadVideoForListing;
- (void)_selectDefaultListing;
- (BOOL)_changeCurrentListing;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

