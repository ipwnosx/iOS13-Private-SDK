//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSCondition, NSMapTable, NSMutableSet;
@protocol HDSQLiteDatabasePoolDelegate, OS_dispatch_semaphore;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject>
{
    NSCondition *_cacheCondition;
    NSMutableSet *_cache;
    NSUInteger _cacheGeneration;
    long long _cacheSize;
    long long _concurrentReaderLimit;
    _Atomic int _count;
//    struct os_unfair_lock_s _checkoutLock;
    NSMapTable *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    id <HDSQLiteDatabasePoolDelegate> _delegate;
}

@property __weak id <HDSQLiteDatabasePoolDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_didFlushDatabases:(id)arg1;
- (id)_semaphoreForCheckOutOptions:(NSUInteger)arg1;
- (id)_removeDatabaseFromCheckoutMap:(id)arg1;
- (void)_addDatabaseWrapperToCheckoutMap:(id)arg1;
- (void)flush;
- (void)checkInDatabase:(id)arg1 flushImmediately:(BOOL)arg2;
- (id)checkOutDatabaseWithOptions:(NSUInteger)arg1 error:(id )arg2;
@property(readonly) long long concurrentReaderLimit;
@property(readonly) long long cacheSize;
@property(readonly) long long count;
- (void)dealloc;
- (id)initWithConcurrentReaderLimit:(long long)arg1;

@end

