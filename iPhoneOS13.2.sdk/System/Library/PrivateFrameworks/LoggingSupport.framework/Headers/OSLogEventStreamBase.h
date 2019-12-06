//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;
@protocol OS_dispatch_queue;

@interface OSLogEventStreamBase : NSObject
{
    unsigned int _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_target;
    NSUInteger _flags;
    NSPredicate *_filterPredicate;
    id /* CDUnknownBlockType */ _streamHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int invalidated; // @synthesize invalidated=_invalidated;
@property(copy, nonatomic) id /* CDUnknownBlockType */ streamHandler; // @synthesize streamHandler=_streamHandler;
@property(copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) NSUInteger flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *target; // @synthesize target=_target;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

