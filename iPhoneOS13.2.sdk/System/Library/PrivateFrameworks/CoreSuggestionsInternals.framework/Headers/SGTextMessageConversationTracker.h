//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLRUCache;

@interface SGTextMessageConversationTracker : NSObject
{
//     struct _opaque_pthread_mutex_t _lock;
    _PASLRUCache *_conversations;
}

+ (id)instance;
// - (void).cxx_destruct;
- (void)clear;
- (id)addItem:(id)arg1;
- (id)addMessage:(id)arg1 withDetectedData:(id)arg2;
- (id)addMessage:(id)arg1;
- (id)conversationForIdentifier:(id)arg1;
- (id)init;

@end

