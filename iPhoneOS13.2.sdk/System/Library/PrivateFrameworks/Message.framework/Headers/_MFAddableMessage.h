//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/ECMessage-Protocol.h>

@class ECAngleBracketIDHash, MFLibraryMessage, NSString;
@protocol ECMailbox;

@interface _MFAddableMessage : NSObject <ECMessage>
{
    long long _messageIDHash;
    MFLibraryMessage *_libraryMessage;
    NSString *_urlString;
}

@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) MFLibraryMessage *libraryMessage; // @synthesize libraryMessage=_libraryMessage;
// - (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) BOOL isServerSearchResult;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)bestAlternativePart:(BOOL )arg1;
@property(readonly, nonatomic) id <ECMailbox> mailbox; // @dynamic mailbox;
@property(readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
- (long long)messageIDHash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithLibraryMessage:(id)arg1 messageIDHash:(long long)arg2 mailboxURL:(id)arg3;

@end

