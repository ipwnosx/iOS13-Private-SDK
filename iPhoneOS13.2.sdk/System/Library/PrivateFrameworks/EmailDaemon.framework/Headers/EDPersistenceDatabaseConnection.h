//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDPersistenceDatabaseJournal, EFSQLConnection, NSString;
@protocol EDPersistenceDatabaseConnectionDelegate;

@interface EDPersistenceDatabaseConnection : NSObject <EFLoggable>
{
    BOOL _isWriter;
    id <EDPersistenceDatabaseConnectionDelegate> _delegate;
    NSString *_protectedDatabaseName;
    NSString *_journalDatabaseName;
    EDPersistenceDatabaseJournal *_journal;
    EFSQLConnection *_sqlConnection;
    NSString *_basePath;
}

+ (id)log;
@property(readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) EFSQLConnection *sqlConnection; // @synthesize sqlConnection=_sqlConnection;
@property(retain, nonatomic) EDPersistenceDatabaseJournal *journal; // @synthesize journal=_journal;
@property(copy, nonatomic) NSString *journalDatabaseName; // @synthesize journalDatabaseName=_journalDatabaseName;
@property(copy, nonatomic) NSString *protectedDatabaseName; // @synthesize protectedDatabaseName=_protectedDatabaseName;
@property(readonly, nonatomic) __weak id <EDPersistenceDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_detachDatabaseWithName:(id)arg1;
- (BOOL)_attachDatabaseWithName:(id)arg1 url:(id)arg2 error:(id )arg3;
- (BOOL)detachJournalDatabase;
- (BOOL)attachJournalDatabase:(id)arg1 withName:(id)arg2;
- (BOOL)attachJournalDatabase:(id)arg1 withName:(id)arg2 error:(id )arg3;
- (BOOL)detachProtectedDatabase;
- (BOOL)attachProtectedDatabaseWithName:(id)arg1;
- (BOOL)attachProtectedDatabaseWithName:(id)arg1 error:(id )arg2;
- (BOOL)attachProtectedDatabaseWithName:(id)arg1 url:(id)arg2 error:(id )arg3;
@property(readonly, nonatomic) BOOL journalDatabaseAttached;
@property(readonly, nonatomic) BOOL protectedDatabaseAttached;
- (BOOL)columnExists:(id)arg1 inTable:(id)arg2 database:(id)arg3 type:(NSUInteger )arg4;
- (BOOL)columnExists:(id)arg1 inTable:(id)arg2 type:(NSUInteger )arg3;
- (BOOL)tableExists:(id)arg1 inDatabase:(id)arg2;
- (BOOL)tableExists:(id)arg1;
- (BOOL)databaseIsAttached:(id)arg1;
- (long long)_adjustedDatabaseTypeForType:(long long)arg1;
- (id)_databasePathForFileName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *protectedDatabasePath;
@property(readonly, nonatomic) NSString *fullPath;
- (void)_fixFilePermissionForPath:(const char )arg1;
- (void)handleSQLResult:(int)arg1 message:(id)arg2;
- (void)handleError:(id)arg1 message:(id)arg2;
- (BOOL)checkForConnectionErrorWithMessage:(id)arg1;
- (long long)transactionTypeForWriting;
@property(readonly, nonatomic) long long transactionGeneration;
- (BOOL)_storeTransactionWriteGenerationWithSQLConnection:(id)arg1 newGeneration:(long long)arg2;
- (BOOL)_fetchTransactionWriteGenerationWithSQLConnection:(id)arg1 newGeneration:(long long )arg2;
- (BOOL)_finishTransactionWithSQLConnection:(id)arg1 afterSuccess:(BOOL)arg2 transactionError:(id )arg3;
- (BOOL)_startTransactionWithSQLConnection:(id)arg1 forWriting:(BOOL)arg2 error:(id )arg3;
- (BOOL)performUsingTransaction:(BOOL)arg1 isWriter:(BOOL)arg2 transactionError:(id )arg3 block:(CDUnknownBlockType)arg4;
- (int)configureSQLConnection;
@property(readonly, nonatomic) BOOL isWriter;
@property(readonly, nonatomic) BOOL isValid;
- (void)close;
- (void)open;
// property(readonly, nonatomic) struct sqlite3 sqlDB;
- (void)clearLastInsertedDatabaseID;
@property(readonly, nonatomic) long long lastInsertedDatabaseID;
- (BOOL)executeStatementString:(id)arg1 errorMessage:(id)arg2;
- (BOOL)executeDeleteStatement:(id)arg1 rowsChanged:(NSUInteger )arg2;
- (BOOL)executeDeleteStatement:(id)arg1 error:(id )arg2;
- (BOOL)_executePreparedStatement:(id)arg1 withBlock:(CDUnknownBlockType)arg2 description:(id)arg3 error:(id )arg4;
- (BOOL)executeUpsertStatement:(id)arg1 rowsChanged:(NSUInteger )arg2;
- (BOOL)executeUpsertStatement:(id)arg1 error:(id )arg2;
- (BOOL)executeUpdateStatement:(id)arg1 rowsChanged:(NSUInteger )arg2;
- (BOOL)executeUpdateStatement:(id)arg1 error:(id )arg2;
- (BOOL)executeInsertStatement:(id)arg1 rowsChanged:(NSUInteger )arg2;
- (BOOL)executeInsertStatement:(id)arg1 error:(id )arg2;
- (BOOL)executeSelectStatement:(id)arg1 withBlock:(CDUnknownBlockType)arg2 error:(id )arg3;
- (id)preparedStatementForQueryString:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
//  (id)initWithSQLDB:(struct sqlite3 )arg1 isWriter:(BOOL)arg2 delegate:(id)arg3;
- (id)initForInMemoryDatabaseIsWriter:(BOOL)arg1 delegate:(id)arg2;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 isWriter:(BOOL)arg3 delegate:(id)arg4;
- (id)init;

@end

