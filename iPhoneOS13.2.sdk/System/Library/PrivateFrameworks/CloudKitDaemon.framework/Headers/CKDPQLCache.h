//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSString, PQLConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPQLCache : NSObject
{
    PQLConnection *_pdb;
    NSHashTable *_contexts;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSUInteger _openHandles;
}

@property(nonatomic) NSUInteger openHandles; // @synthesize openHandles=_openHandles;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(readonly, nonatomic) NSHashTable *contexts; // @synthesize contexts=_contexts;
@property(readonly, nonatomic) PQLConnection *database; // @synthesize database=_pdb;
// - (void).cxx_destruct;
- (id)infoToUpgradeFromVersion:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *createInitialTablesSQL;
@property(readonly, nonatomic) NSString *path;
- (void)performOnDBQueue:(CDUnknownBlockType)arg1;
- (BOOL)removeCorruptDatabaseWithError:(id )arg1;
- (BOOL)resetWithError:(id )arg1;
- (BOOL)removeDatabaseFilesWithError:(id )arg1;
@property(readonly, nonatomic) BOOL isOpen;
- (BOOL)forceCloseWithError:(id )arg1;
- (BOOL)closeWithError:(id )arg1;
- (BOOL)_closeWithError:(id )arg1 force:(BOOL)arg2;
- (BOOL)openWithError:(id )arg1;
- (BOOL)_lockedOpenDatabase:(id )arg1;
- (id)_newConnection:(id)arg1;
- (BOOL)_setupCacheWithError:(id )arg1;
- (BOOL)_truncateAndReconnectToDatabaseWithError:(id )arg1;
- (BOOL)_setupConnectionWithError:(id )arg1;
- (id)initWithClientContext:(id)arg1;

@end

