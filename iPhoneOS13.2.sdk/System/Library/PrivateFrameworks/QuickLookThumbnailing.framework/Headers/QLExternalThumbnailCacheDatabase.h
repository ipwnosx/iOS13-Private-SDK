//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PQLConnection;

@interface QLExternalThumbnailCacheDatabase : NSObject
{
    NSURL *_databaseURL;
    PQLConnection *_db;
}

@property(readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
// - (void).cxx_destruct;
- (NSObject )whereClauseForItem:(id)arg1;
- (BOOL)removeAllThumbnails:(id )arg1;
- (id)oldestThumbnailsToFreeAtLeastSpace:(NSUInteger)arg1 error:(id )arg2;
- (id)pathExtensionForItem:(id)arg1 error:(id )arg2;
- (NSUInteger)totalThumbnailCount;
- (NSUInteger)totalThumbnailsSize;
- (BOOL)deleteOldestThumbnail;
- (id)deleteOldestThumbnailsToFreeAtLeastSpace:(NSUInteger)arg1 error:(id )arg2;
- (BOOL)insertOrReplaceThumbnailRepresentingFPItem:(id)arg1 size:(NSUInteger)arg2 modificationDate:(id)arg3 fileExtension:(id)arg4 error:(id )arg5;
- (void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3;
- (void)close;
- (void)_closeDatabaseOnItsQueue:(id)arg1;
- (id)_setupDatabaseTablesIfNeeded:(id)arg1 error:(id )arg2;
- (id)_createDatabaseIfNeededAtURL:(id)arg1 error:(id )arg2;
- (id)_openDatabaseAtURL:(id)arg1;
- (BOOL)open;
- (id)initWithURL:(id)arg1;

@end

