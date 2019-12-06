//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDMessagePersistence, EMThread, EMThreadObjectID, NSArray, _EDThreadPersistence_SQLHelper;

@interface _EDThreadPersistence_ThreadMessages : NSObject
{
    EMThread *_thread;
    EDMessagePersistence *_messagePersistence;
    long long _threadScopeDatabaseID;
    EMThreadObjectID *_threadObjectID;
    NSArray *_wrappedMessages;
    _EDThreadPersistence_SQLHelper *_sqlHelper;
}

@property(readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper; // @synthesize sqlHelper=_sqlHelper;
@property(readonly, nonatomic) NSArray *wrappedMessages; // @synthesize wrappedMessages=_wrappedMessages;
@property(readonly, nonatomic) EMThreadObjectID *threadObjectID; // @synthesize threadObjectID=_threadObjectID;
@property(readonly, nonatomic) long long threadScopeDatabaseID; // @synthesize threadScopeDatabaseID=_threadScopeDatabaseID;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
// - (void).cxx_destruct;
- (id)_iterateNewestUnreadWrappedMessagesInWrappedMessages:(id)arg1 iteratorBlock:(CDUnknownBlockType)arg2;
- (id)_displayWrappedMessageWithNewestReadWrappedMessage:(id )arg1;
- (id)_newestUnreadWrappedMessagesWithNewestReadWrappedMessage:(id )arg1;
- (id)updateThreadTableWithJournaled:(BOOL)arg1;
- (BOOL)addThreadReplacingExisting:(BOOL)arg1 journaled:(BOOL)arg2;
- (id)_threadQuery;
@property(readonly, nonatomic) EMThread *thread;
- (id)debugDescription;
- (id)initWithSQLHelper:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadObjectID:(id)arg4 wrappedMessages:(id)arg5;

@end

