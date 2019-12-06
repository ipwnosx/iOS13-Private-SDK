//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CDRemoveEventsConsumer : NSObject
{
    BOOL _historyDone;
    NSString *_identifier;
    id /* CDUnknownBlockType */ _consumer;
//     struct __FSEventStream _stream;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSObject<OS_dispatch_queue> *_consumer_q;
    NSString *_volume;
//     struct fsid _fsid;
    NSUInteger _since;
}

@property NSUInteger since; // @synthesize since=_since;
// @property struct fsid fsid; // @synthesize fsid=_fsid;
@property BOOL historyDone; // @synthesize historyDone=_historyDone;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *consumer_q; // @synthesize consumer_q=_consumer_q;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
// @property struct __FSEventStream stream; // @synthesize stream=_stream;
@property(copy, nonatomic) id /* CDUnknownBlockType */ consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (void)consumeStream:(struct __FSEventStream )arg1 forVolume:(id)arg2;
- (void)callback:(id)arg1;
- (void)dealloc;
- (id)initWithConsumer:(CDUnknownBlockType)arg1 identifier:(id)arg2;

@end

