//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionManager-Protocol.h>

@class NSMutableArray, SVPlaybackTransition;
@protocol SVPlaybackTransitionCoordinatorFactory, SVVideo, SVVideoQueueProviding, SVVideoVisibilityMonitorProviding;

@interface SVVideoTransitionManager : NSObject <SVVideoTransitionManager>
{
    id <SVPlaybackTransitionCoordinatorFactory> _transitionCoordinatorFactory;
    id <SVVideoVisibilityMonitorProviding> _visibilityMonitorProviding;
    id <SVVideoQueueProviding> _queueProvider;
    NSMutableArray *_pendingVideos;
    NSMutableArray *_transitionObservers;
    SVPlaybackTransition *_activeTransition;
    id <SVVideo> _visibleVideo;
}

@property(retain, nonatomic) id <SVVideo> visibleVideo; // @synthesize visibleVideo=_visibleVideo;
@property(retain, nonatomic) SVPlaybackTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(readonly, nonatomic) NSMutableArray *transitionObservers; // @synthesize transitionObservers=_transitionObservers;
@property(readonly, nonatomic) NSMutableArray *pendingVideos; // @synthesize pendingVideos=_pendingVideos;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) id <SVVideoVisibilityMonitorProviding> visibilityMonitorProviding; // @synthesize visibilityMonitorProviding=_visibilityMonitorProviding;
@property(readonly, nonatomic) id <SVPlaybackTransitionCoordinatorFactory> transitionCoordinatorFactory; // @synthesize transitionCoordinatorFactory=_transitionCoordinatorFactory;
// - (void).cxx_destruct;
- (void)performNextTransition;
- (void)removeTransitionObserver:(id)arg1;
- (void)addTransitionObserver:(id)arg1;
- (void)transitionToVideo:(id)arg1;
- (id)initWithTransitionCoordinatorFactory:(id)arg1 visibilityMonitorProviding:(id)arg2;

@end

