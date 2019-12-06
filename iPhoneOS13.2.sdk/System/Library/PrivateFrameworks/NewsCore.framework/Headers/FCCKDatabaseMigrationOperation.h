//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase, NSMutableArray;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseMigrationOperation : FCOperation
{
    FCCKPrivateDatabase *_database;
    id <FCCKDatabaseMigrator> _migrator;
    id /* CDUnknownBlockType */ _migrationCompletionHandler;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

@property(retain, nonatomic) NSMutableArray *resultRecordIDsEligibleForDeletion; // @synthesize resultRecordIDsEligibleForDeletion=_resultRecordIDsEligibleForDeletion;
@property(retain, nonatomic) NSMutableArray *resultZoneIDsEligibleForDeletion; // @synthesize resultZoneIDsEligibleForDeletion=_resultZoneIDsEligibleForDeletion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ migrationCompletionHandler; // @synthesize migrationCompletionHandler=_migrationCompletionHandler;
@property(retain, nonatomic) id <FCCKDatabaseMigrator> migrator; // @synthesize migrator=_migrator;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (void)_migrateZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_migrateZoneIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (BOOL)canRetryWithError:(id)arg1 retryAfter:(id )arg2;
- (void)performOperation;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end

