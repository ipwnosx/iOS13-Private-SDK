//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackEngine.h>

#import <UIKitCore/_UIFeedbackPlayer_Internal-Protocol.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal>
{
    id /* CDUnknownBlockType */ _invalidationBlock;
    NSCountedSet *_warmSSIDs;
    NSCountedSet *_suspendedSSIDs;
}

+ (BOOL)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)sharedEngine;
+ (id)_internalQueue;
@property(readonly, nonatomic) NSCountedSet *suspendedSSIDs; // @synthesize suspendedSSIDs=_suspendedSSIDs;
@property(readonly, nonatomic) NSCountedSet *warmSSIDs; // @synthesize warmSSIDs=_warmSSIDs;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
// - (void).cxx_destruct;
- (id)_stats_key;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_stopFeedback:(id)arg1;
- (void)_internal_playFeedbackDataNow:(id)arg1 forFeedback:(id)arg2 withOptions:(id)arg3;
- (BOOL)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_internal_updateSuspension;
- (void)_internal_stopWarmingFeedbacks:(id)arg1;
- (void)_internal_startWarmingFeedbacks:(id)arg1;
- (void)_internal_performForEachSSIDsInFeedbacks:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_internal_prepareSystemSoundID:(unsigned int)arg1 forBeingActive:(BOOL)arg2;

@end

