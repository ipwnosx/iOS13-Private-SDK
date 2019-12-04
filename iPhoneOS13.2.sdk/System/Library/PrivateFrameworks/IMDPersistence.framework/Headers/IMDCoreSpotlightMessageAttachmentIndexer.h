//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>

#import <IMDPersistence/IMDCoreSpotlightIndexer-Protocol.h>

@class NSString;

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>
{
}

+ (id)attachmentRecordsFromAttachments:(id)arg1;
+ (id)copyGUIDFromAttachment:(struct _IMDAttachmentRecordStruct *)arg1;
+ (id)copyPathFromAttachment:(struct _IMDAttachmentRecordStruct *)arg1;
+ (id)copyAttachmentsForMessageID:(long long)arg1;
+ (_Bool)_attachmentIsSticker:(struct _IMDAttachmentRecordStruct *)arg1;
+ (id)attachmentIndexTypeForPath:(id)arg1 filename:(id)arg2 attachmentRecord:(struct _IMDAttachmentRecordStruct *)arg3;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(_Bool)arg4;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(_Bool)arg3 metadataToUpdate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
