//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue, WBSSQLiteStoreDelegate;

@interface WBSSQLiteStore : NSObject
{
    long long _databaseLockingPolicy;
    long long _protectionType;
    int _databaseCoordinationLockFileDescriptor;
    BOOL _fallBackToMemoryStoreIfError;
    NSURL *_databaseURL;
    id <WBSSQLiteStoreDelegate> _delegate;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <WBSSQLiteStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
// - (void).cxx_destruct;
- (void)_releaseDatabaseCoordinationLock;
- (BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1;
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1;
- (BOOL)_isDatabaseLocked;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_createFreshDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (void)_databaseWillClose;
- (int)_currentSchemaVersion;
- (BOOL)_confirmDatabaseIntegrityIsOK;
- (void)_closeDatabase;
- (void)savePendingChangesBeforeTermination;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleOpenFailureWithStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_openDatabase:(id)arg1 createIfNeeded:(BOOL)arg2 checkIntegrity:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openAndCheckIntegrity:(BOOL)arg1 createIfNeeded:(BOOL)arg2 fallBackToMemoryStoreIfError:(BOOL)arg3 lockingPolicy:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) BOOL isOpen;
- (void)dealloc;
- (id)initWithURL:(id)arg1 protectionType:(long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

