//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackEngine.h>

#import <UIKitCore/_UIFeedbackPlayer_Internal-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal>
{
    id /* CDUnknownBlockType */ _invalidationBlock;
}

+ (BOOL)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)sharedEngine;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
// - (void).cxx_destruct;
- (id)_stats_key;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_stopFeedback:(id)arg1;
- (BOOL)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;

@end

