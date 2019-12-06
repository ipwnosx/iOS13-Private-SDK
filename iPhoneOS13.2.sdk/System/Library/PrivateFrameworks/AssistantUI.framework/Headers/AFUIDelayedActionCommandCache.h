//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject
{
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}

// - (void).cxx_destruct;
- (void)_performCommandsWithDelayedActionCommand:(id)arg1;
- (id)_commandHandler;
- (void)performDismissalCommands;
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;
- (void)invalidatePendingCommands;
- (void)_performDelayedActionCommandTimerAction:(id)arg1;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueDelayedActionCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

