//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    NSMutableSet *_backingSet;
    NSObject<OS_dispatch_queue> *_backingSetAccessQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backingSetAccessQueue; // @synthesize backingSetAccessQueue=_backingSetAccessQueue;
@property(retain, nonatomic) NSMutableSet *backingSet; // @synthesize backingSet=_backingSet;
// - (void).cxx_destruct;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;

@end

