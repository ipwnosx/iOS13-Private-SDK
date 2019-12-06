//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBScaleIconZoomAnimator.h>

@class UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
    UIView *_crossfadeView;
    BOOL _performsTrueCrossfade;
    BOOL _masksCorners;
}

@property(nonatomic) BOOL masksCorners; // @synthesize masksCorners=_masksCorners;
@property(nonatomic) BOOL performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
// - (void).cxx_destruct;
- (double)_appSnapshotCornerRadiusForFraction:(double)arg1;
- (CGPoint)_zoomedIconCenter;
- (CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (NSUInteger)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (BOOL)fadesHomeScreen;
- (double)maxHomeScreenZoomScale;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;
- (void)_assertCrossfadeViewSizeIfNecessary;

@end

