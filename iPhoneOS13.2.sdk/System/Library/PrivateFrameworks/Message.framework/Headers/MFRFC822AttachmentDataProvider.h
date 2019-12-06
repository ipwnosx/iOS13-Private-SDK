//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFAttachmentDataProviderProtocol-Protocol.h>

@class MFMailMessage, MFMimePart, NSData;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol>
{
    NSData *_messageData;
    MFMimePart *_parentPart;
    MFMailMessage *_message;
}

// - (void).cxx_destruct;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithMessage:(id)arg1 parentPart:(id)arg2 managed:(BOOL)arg3;
- (id)initWithMessage:(id)arg1 parentPart:(id)arg2;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2 managed:(BOOL)arg3;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;

@end

