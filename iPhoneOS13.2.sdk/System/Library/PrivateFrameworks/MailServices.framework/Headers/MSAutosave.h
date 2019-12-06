//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/MSXPCService.h>

@class NSHashTable;

@interface MSAutosave : MSXPCService
{
    NSHashTable *_activeAutosaveSessions;
}

+ (id)autosave;
+ (id)log;
@property(retain, nonatomic) NSHashTable *activeAutosaveSessions; // @synthesize activeAutosaveSessions=_activeAutosaveSessions;
// - (void).cxx_destruct;
- (void)_getRemoteAutosaveSessionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleInterruptedConnection;
- (id)newConnectionForInterface:(id)arg1;
- (void)autosaveSessionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getIdleAutosaves:(CDUnknownBlockType)arg1;
- (void)autosaveMessageData:(id)arg1 replacingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id )arg2;
- (void)removeAutosavedMessageWithIdentifier:(id)arg1;
- (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
- (id)_timeout;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;

@end

