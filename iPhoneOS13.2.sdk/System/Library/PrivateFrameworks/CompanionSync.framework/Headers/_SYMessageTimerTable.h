//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _SYMessageTimerTable : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _callback;
    NSObject<OS_dispatch_queue> *_rwlock;
    NSMutableDictionary *_bySeqno;
    NSMutableDictionary *_byIdent;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger timerCount;
- (void)cancelAllTimers;
- (void)cancelTimerForIdentifier:(id)arg1;
- (void)cancelTimerForSequenceNumber:(NSUInteger)arg1;
- (void)setIdentifier:(id)arg1 forSequenceNumber:(NSUInteger)arg2;
- (void)_cleanupTimerForSeqno:(NSUInteger)arg1;
- (void)_fireCallbackForSeqno:(NSUInteger)arg1;
- (void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 timerCallback:(CDUnknownBlockType)arg2;
- (id)init;

@end

