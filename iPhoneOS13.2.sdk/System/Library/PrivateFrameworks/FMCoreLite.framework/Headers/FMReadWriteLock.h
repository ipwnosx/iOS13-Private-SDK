//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMReadWriteLock : NSObject
{
    NSString *_lockName;
//    struct _opaque_pthread_rwlock_t _lock;
}

// property(nonatomic) struct _opaque_pthread_rwlock_t lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *lockName; // @synthesize lockName=_lockName;
// - (void).cxx_destruct;
- (void)performWithWriteLock:(CDUnknownBlockType)arg1;
- (void)performWithReadLock:(CDUnknownBlockType)arg1;
- (id)initWithLockName:(id)arg1;
- (id)init;

@end

