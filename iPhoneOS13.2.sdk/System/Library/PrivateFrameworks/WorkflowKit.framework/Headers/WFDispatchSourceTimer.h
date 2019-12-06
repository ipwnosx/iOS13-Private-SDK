//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface WFDispatchSourceTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
// - (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 repeatIntervalInt:(NSUInteger)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

