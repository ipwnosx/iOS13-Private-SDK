//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKBubblePathAnimator, GKBubbleSet, UIViewController, _GKBubbleFlowPathTransitionInfo;
@protocol GKBubbleFlowableViewController;

@interface _GKBubbleFlowTransitionInfo : NSObject <NSCopying>
{
    UIViewController<GKBubbleFlowableViewController> *_toVC;
    UIViewController<GKBubbleFlowableViewController> *_fromVC;
    UIViewController *_toWrapperVC;
    UIViewController *_fromWrapperVC;
    UIViewController *_containingViewController;
//     CDStruct_b207fc29 _toFlags;
//     CDStruct_b207fc29 _fromFlags;
    GKBubbleSet *_fromBubbles;
    GKBubbleSet *_toBubbles;
    long long _toFocusBubbleType;
    long long _fromFocusBubbleType;
    long long _transitionType;
    long long _transitionPhase;
    double _startTime;
    double _duration;
    double _fadeOutDuration;
    double _crossfadeDuration;
    double _fadeInDuration;
    double _relativeDuration;
    double _relativeStartTime;
    double _relativeFadeOutDuration;
    double _relativeCrossfadeDuration;
    double _relativeFadeInDuration;
    GKBubblePathAnimator *_toPathAnimator;
    GKBubblePathAnimator *_fromPathAnimator;
    GKBubblePathAnimator *_onlyPathAnimator;
    _GKBubbleFlowPathTransitionInfo *_toPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_fromPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_onlyPathTransitionInfo;
    BOOL _fadedOutRealFromView;
    BOOL _disableInteractionDuringTransition;
}

@property(nonatomic) BOOL disableInteractionDuringTransition; // @synthesize disableInteractionDuringTransition=_disableInteractionDuringTransition;
@property(nonatomic) BOOL fadedOutRealFromView; // @synthesize fadedOutRealFromView=_fadedOutRealFromView;
@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *onlyPathTransitionInfo; // @synthesize onlyPathTransitionInfo=_onlyPathTransitionInfo;
@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *fromPathTransitionInfo; // @synthesize fromPathTransitionInfo=_fromPathTransitionInfo;
@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *toPathTransitionInfo; // @synthesize toPathTransitionInfo=_toPathTransitionInfo;
@property(retain, nonatomic) GKBubblePathAnimator *onlyPathAnimator; // @synthesize onlyPathAnimator=_onlyPathAnimator;
@property(retain, nonatomic) GKBubblePathAnimator *fromPathAnimator; // @synthesize fromPathAnimator=_fromPathAnimator;
@property(retain, nonatomic) GKBubblePathAnimator *toPathAnimator; // @synthesize toPathAnimator=_toPathAnimator;
@property(nonatomic) double relativeFadeInDuration; // @synthesize relativeFadeInDuration=_relativeFadeInDuration;
@property(nonatomic) double relativeCrossfadeDuration; // @synthesize relativeCrossfadeDuration=_relativeCrossfadeDuration;
@property(nonatomic) double relativeFadeOutDuration; // @synthesize relativeFadeOutDuration=_relativeFadeOutDuration;
@property(nonatomic) double relativeDuration; // @synthesize relativeDuration=_relativeDuration;
@property(nonatomic) double relativeStartTime; // @synthesize relativeStartTime=_relativeStartTime;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long transitionPhase; // @synthesize transitionPhase=_transitionPhase;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) long long fromFocusBubbleType; // @synthesize fromFocusBubbleType=_fromFocusBubbleType;
@property(nonatomic) long long toFocusBubbleType; // @synthesize toFocusBubbleType=_toFocusBubbleType;
@property(retain, nonatomic) GKBubbleSet *toBubbles; // @synthesize toBubbles=_toBubbles;
@property(retain, nonatomic) GKBubbleSet *fromBubbles; // @synthesize fromBubbles=_fromBubbles;
// @property(nonatomic) CDStruct_b207fc29 fromFlags; // @synthesize fromFlags=_fromFlags;
// @property(nonatomic) CDStruct_b207fc29 toFlags; // @synthesize toFlags=_toFlags;
@property(retain, nonatomic) UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property(retain, nonatomic) UIViewController *fromWrapperVC; // @synthesize fromWrapperVC=_fromWrapperVC;
@property(retain, nonatomic) UIViewController *toWrapperVC; // @synthesize toWrapperVC=_toWrapperVC;
@property(retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *toVC; // @synthesize toVC=_toVC;
- (id)copyForPhase:(long long)arg1;
- (void)recalculateDurationsAfterAdjustment;
- (void)adjustDuration:(double)arg1;
@property(readonly, nonatomic) BOOL hasNonFallbackPathAnimator;
@property(readonly, nonatomic) UIViewController *realToVC;
@property(readonly, nonatomic) UIViewController *realFromVC;
@property(readonly, nonatomic) BOOL animated;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

