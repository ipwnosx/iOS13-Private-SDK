//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSFileManager (BRAdditions)
- (id)br_topLevelSharedFolderForURL:(id)arg1 error:(id )arg2;
- (void)br_setFavoriteRank:(id)arg1 onItemAtURL:(id)arg2;
- (void)br_setLastOpenDate:(id)arg1 onItemAtURL:(id)arg2;
- (BOOL)br_putBackTrashedItemAtURL:(id)arg1 resultingURL:(id )arg2 error:(id )arg3;
- (BOOL)br_trashItemAtURL:(id)arg1 resultingURL:(id )arg2 error:(id )arg3;
- (id)br_putBackURLForTrashedItemAtURL:(id)arg1 error:(id )arg2;
- (void)br_setPutBackInfoOnItemAtURL:(id)arg1;
- (BOOL)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id )arg3;
- (id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id )arg3;
- (int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id )arg3;
- (id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id )arg3;
@end

