//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYIncomingFullSyncSession.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession
{
    NSMutableArray *_allObjectsAsData;
    id /* CDUnknownBlockType */ _completion;
    BOOL canRestart;
    BOOL canRollback;
}

- (void)setCanRollback:(BOOL)arg1;
- (BOOL)canRollback;
- (void)setCanRestart:(BOOL)arg1;
- (BOOL)canRestart;
// - (void).cxx_destruct;
- (void)_continueProcessing;
- (void)_sendEndSessionResponse:(id)arg1;
- (id)initWithService:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

