//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator;

@interface RKRankingDataManager : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPersistentStore *_persistentStore;
}

@property(retain, nonatomic) NSPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
// - (void).cxx_destruct;
- (void)flushRankingData;
- (void)resetRankingData;
- (void)pruneUserDatabase;
- (NSUInteger)getNumberOfEntriesInDB;
- (id)fetchRankingInfoForCategory:(id)arg1;
- (id)fetchRankingInfoFromDB;
- (void)insertRankingInfoFromDictionary:(id)arg1 withDate:(id)arg2;
- (void)insertRankingInfoFromDictionary:(id)arg1;
- (id)initWithDatabaseFilename:(id)arg1;
- (id)initWithLanguageID:(id)arg1;

@end

