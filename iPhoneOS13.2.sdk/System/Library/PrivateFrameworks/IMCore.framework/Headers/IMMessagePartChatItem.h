//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessageChatItem.h>

#import <IMCore/IMVisibleAssociatedMessageHost-Protocol.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost>
{
    NSAttributedString *_text;
    NSAttributedString *_fallbackCorruptText;
    long long _index;
    NSRange * _messagePartRange;
    NSArray *_visibleAssociatedMessageChatItems;
    NSArray *_messageEditChatItems;
    BOOL _isBusiness;
    BOOL _chatInScrutinyMode;
    BOOL _whitelistedRichLinkSender;
}

+ (BOOL)isSiriEnabled;
+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2;
+ (BOOL)_shouldAggregateForTransferType:(id)arg1;
+ (id)_newMessagePartsForMessageItem:(id)arg1 shouldDisplayLink:(BOOL)arg2 isBusiness:(BOOL)arg3 parentChatIsSpam:(BOOL)arg4 hasKnownParticipants:(BOOL)arg5;
+ (BOOL)_supportsRichLinkURL:(id)arg1 forSender:(id)arg2 isWhitelistedRichLinkSender:(BOOL)arg3;
+ (id)_richLinkRangesForMessageText:(id)arg1 sender:(id)arg2 isWhitelistedRichLinkSender:(BOOL)arg3;
+ (id)_additionalSupportedRichLinkSchemesForWhitelistedSender:(id)arg1;
+ (BOOL)_isWhitelistedRichLinkSender:(id)arg1 isBusiness:(BOOL)arg2;
+ (BOOL)_isWhiteListedURL:(id)arg1;
+ (id)_defaultRichLinkWhiteList;
+ (id)_newMessagePartsForMessageItem:(id)arg1;
+ (id)_guidForMessage:(id)arg1 url:(id)arg2;
@property(nonatomic, getter=isWhitelistedRichLinkSender) BOOL whitelistedRichLinkSender; // @synthesize whitelistedRichLinkSender=_whitelistedRichLinkSender;
@property(readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText; // @synthesize fallbackCorruptText=_fallbackCorruptText;
@property(nonatomic) BOOL chatInScrutinyMode; // @synthesize chatInScrutinyMode=_chatInScrutinyMode;
@property(readonly, nonatomic) NSArray *messageEditChatItems; // @synthesize messageEditChatItems=_messageEditChatItems;
@property(retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems; // @synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems;
@property(nonatomic) NSRange * messagePartRange; // @synthesize messagePartRange=_messagePartRange;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresSiriAttribution;
- (BOOL)canSendMessageAcknowledgment;
- (void)_setMessageEditChatItems:(id)arg1;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange *)arg4 visibleAssociatedMessageChatItems:(id)arg5;
- (id)_initWithItem:(id)arg1 messagePartRange:(NSRange *)arg2;
@property(readonly, nonatomic) BOOL isCorrupt;
- (id)transcriptText;
@property(nonatomic) BOOL isBusiness; // @synthesize isBusiness=_isBusiness;
- (BOOL)canDelete;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;

@end

