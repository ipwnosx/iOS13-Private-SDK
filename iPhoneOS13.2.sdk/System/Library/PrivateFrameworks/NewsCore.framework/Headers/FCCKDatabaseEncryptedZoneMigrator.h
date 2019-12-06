//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseMigrator-Protocol.h>

@class FCCKPrivateDatabaseSchema, NSSet;
@protocol FCCKDatabaseRecordMiddleware;

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator>
{
    FCCKPrivateDatabaseSchema *_sourceSchema;
    id <FCCKDatabaseRecordMiddleware> _recordEncryptionMiddleware;
    id /* CDUnknownBlockType */ _deprecatedBlock;
    NSSet *_sourceZoneNames;
}

@property(retain, nonatomic) NSSet *sourceZoneNames; // @synthesize sourceZoneNames=_sourceZoneNames;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deprecatedBlock; // @synthesize deprecatedBlock=_deprecatedBlock;
@property(retain, nonatomic) id <FCCKDatabaseRecordMiddleware> recordEncryptionMiddleware; // @synthesize recordEncryptionMiddleware=_recordEncryptionMiddleware;
@property(retain, nonatomic) FCCKPrivateDatabaseSchema *sourceSchema; // @synthesize sourceSchema=_sourceSchema;
// - (void).cxx_destruct;
- (BOOL)_isEnabledForDatabase:(id)arg1;
- (BOOL)_shouldMigrateRecord:(id)arg1 database:(id)arg2;
- (void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;
- (id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id )arg3;
- (BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
- (id)databaseMigrationZoneNamesForDatabase:(id)arg1;
- (id)initWithSourceSchema:(id)arg1 recordEncryptionMiddleware:(id)arg2 deprecatedBlock:(CDUnknownBlockType)arg3;

@end

