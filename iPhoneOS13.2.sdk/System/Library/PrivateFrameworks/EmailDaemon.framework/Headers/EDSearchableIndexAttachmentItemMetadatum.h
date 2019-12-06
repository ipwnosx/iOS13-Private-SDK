//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDSearchableIndexAttachmentItemMetadatumBuilder-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface EDSearchableIndexAttachmentItemMetadatum : NSObject <EDSearchableIndexAttachmentItemMetadatumBuilder>
{
    NSURL *_attachmentFileURL;
    NSString *_domainIdentifier;
    NSString *_accountIdentifier;
    NSArray *_mailboxIdentifiers;
    NSString *_senderAddress;
    NSArray *_recipientAddresses;
    NSDate *_dateReceived;
    NSDate *_dateSent;
}

@property(retain, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(copy, nonatomic) NSArray *recipientAddresses; // @synthesize recipientAddresses=_recipientAddresses;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSArray *mailboxIdentifiers; // @synthesize mailboxIdentifiers=_mailboxIdentifiers;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSURL *attachmentFileURL; // @synthesize attachmentFileURL=_attachmentFileURL;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL canReadAttachmentFile;
- (id)initWithAttachmentFileURL:(id)arg1 builder:(CDUnknownBlockType)arg2;

@end

