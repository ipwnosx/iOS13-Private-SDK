//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class DAMailMessage, MFMailboxUid, MFMessage, NSString;

@interface MFDAMessage : MFMailMessage
{
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
    DAMailMessage *_DAMailMessage;
}

@property(readonly, nonatomic) DAMailMessage *DAMailMessage; // @synthesize DAMailMessage=_DAMailMessage;
// - (void).cxx_destruct;
- (NSUInteger)messageSize;
- (id)remoteMailboxURL;
- (BOOL)messageDataHolder:(id )arg1 messageSize:(NSUInteger )arg2 isComplete:(BOOL )arg3 downloadIfNecessary:(BOOL)arg4;
- (BOOL)messageData:(id )arg1 messageSize:(NSUInteger )arg2 isComplete:(BOOL )arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageBody;
- (NSUInteger)messageFlags;
- (id)headersIfAvailable;
- (id)headers;
- (id)mailbox;
- (id)externalConversationID;
- (id)remoteID;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;

@end

