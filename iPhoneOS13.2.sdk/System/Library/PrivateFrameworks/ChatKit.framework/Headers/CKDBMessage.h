//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSDate, NSMutableArray, NSString;

@interface CKDBMessage : NSObject
{
    NSString *_text;
    NSString *_subject;
    NSString *_address;
    NSString *_groupID;
    NSString *_guid;
    NSString *_madridRoomname;
    NSString *_displayName;
    NSString *_madridService;
    NSString *_madridAccountGUID;
    NSString *_madridChatGUID;
    NSString *_madridChatIdentifier;
    BOOL _isMadrid;
    BOOL _hasBeenRead;
    BOOL _isOutgoing;
    BOOL _isVisibleByDefault;
    BOOL _isAudioMessage;
    long long _madridType;
    long long _identifier;
    NSDate *_date;
    NSArray *_recipients;
    NSString *_plainBody;
    NSAttributedString *_madridAttributedBody;
    NSMutableArray *_mediaObjects;
    NSString *_voicemailString;
    NSString *_madridAccountLogin;
}

@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *plainBody; // @synthesize plainBody=_plainBody;
@property(readonly, nonatomic) NSArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(readonly, nonatomic) NSString *madridChatIdentifier; // @synthesize madridChatIdentifier=_madridChatIdentifier;
@property(readonly, nonatomic) BOOL isVisibleByDefault; // @synthesize isVisibleByDefault=_isVisibleByDefault;
@property(readonly, copy, nonatomic) NSString *madridChatGUID; // @synthesize madridChatGUID=_madridChatGUID;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSAttributedString *madridAttributedBody; // @synthesize madridAttributedBody=_madridAttributedBody;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long madridType; // @synthesize madridType=_madridType;
@property(readonly, nonatomic) BOOL isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property(readonly, nonatomic) BOOL isAudioMessage; // @synthesize isAudioMessage=_isAudioMessage;
@property(readonly, nonatomic) BOOL hasBeenRead; // @synthesize hasBeenRead=_hasBeenRead;
@property(readonly, nonatomic) BOOL isMadrid; // @synthesize isMadrid=_isMadrid;
@property(readonly, nonatomic) NSString *madridAccountGUID; // @synthesize madridAccountGUID=_madridAccountGUID;
@property(readonly, nonatomic) NSString *madridAccountLogin; // @synthesize madridAccountLogin=_madridAccountLogin;
@property(readonly, nonatomic) NSString *madridService; // @synthesize madridService=_madridService;
@property(readonly, nonatomic) NSString *madridRoomname; // @synthesize madridRoomname=_madridRoomname;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)attachmentText:(BOOL)arg1;
- (id)previewText;
- (id)alertImage;
- (BOOL)senderIsVoicemail;
- (id)voicemailString;
@property(readonly, copy, nonatomic) NSArray *recipients; // @dynamic recipients;
@property(readonly, nonatomic) NSString *groupID; // @dynamic groupID;
@property(readonly, nonatomic) NSString *formattedAddress; // @dynamic formattedAddress;
@property(readonly, copy, nonatomic) NSString *attachmentText;
@property(readonly, nonatomic) BOOL hasAttachments; // @dynamic hasAttachments;
- (id)description;
- (id)initWithRecordID:(long long)arg1;
- (id)initWithMadridMessageGUID:(id)arg1;

@end

