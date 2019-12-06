//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISObservable.h>

@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable
{
    BOOL _playIsSticky;
    BOOL _isPerformingInputChanges;
    BOOL _playbackDisabled;
    double _hintProgress;
    long long _state;
    NSMutableSet *__playbackDisabledReasons;
}

@property(readonly, nonatomic) NSMutableSet *_playbackDisabledReasons; // @synthesize _playbackDisabledReasons=__playbackDisabledReasons;
@property(nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) BOOL playbackDisabled; // @synthesize playbackDisabled=_playbackDisabled;
@property(nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges; // @synthesize isPerformingInputChanges=_isPerformingInputChanges;
@property(nonatomic) BOOL playIsSticky; // @synthesize playIsSticky=_playIsSticky;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double hintProgress; // @synthesize hintProgress=_hintProgress;
// - (void).cxx_destruct;
- (void)reset;
- (id)mutableChangeObject;
- (void)_setState:(long long)arg1;
- (void)setPlaybackDisabled:(BOOL)arg1 forReason:(id)arg2;
- (id)init;

@end

