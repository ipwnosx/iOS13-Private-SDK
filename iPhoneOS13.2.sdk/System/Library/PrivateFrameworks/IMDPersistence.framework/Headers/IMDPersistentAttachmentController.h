//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDPersistentAttachmentController : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)cleanseOrphanedFileTransfers;
- (id)_persistentPathForTransfer:(id)arg1 filename:(id)arg2 highQuality:(BOOL)arg3;
- (BOOL)_deleteAttachmentForTransfer:(id)arg1 highQuality:(BOOL)arg2;
- (BOOL)deleteAttachmentsForTransfer:(id)arg1;
- (BOOL)isSafeToDeleteAttachmentPath:(id)arg1;
- (id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:(id)arg1 destinationPath:(id)arg2 withFileManager:(id)arg3;
- (void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:(id)arg1 withFileManager:(id)arg2;
- (BOOL)_canDeleteAttachmentPath:(id)arg1;
- (id)_saveAttachmentForTransfer:(id)arg1 highQuality:(BOOL)arg2 copyWithinAttachmentStore:(BOOL)arg3;
- (void)moveAttachmentsForTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAttachmentsForTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

