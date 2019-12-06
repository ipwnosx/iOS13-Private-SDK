//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageLegacy/MFAttachmentDataProviderProtocol-Protocol.h>

@class NSCache, NSMutableDictionary;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    NSMutableDictionary *_attachmentsData;
    NSCache *_attachmentsPlaceholderData;
    NSMutableDictionary *_attachmentsPasteboardData;
    NSMutableDictionary *_attachmentsUndoData;
}

- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)rawDataForContentID:(id)arg1;
- (id)dataForContentID:(id)arg1;
- (id)_dataForAttachment:(id)arg1;
- (void)recordUndoDataForAttachments:(id)arg1;
- (void)recordPasteboardDataForAttachments:(id)arg1;
- (void)removeDataForAttachment:(id)arg1;
- (void)addData:(id)arg1 forContentID:(id)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1 forContentID:(id)arg2;

@end

