//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMSPIChat : NSObject
{
    BOOL _isGroup;
    NSString *_guid;
    NSString *_chatIdentifier;
    NSString *_serviceName;
    NSString *_displayName;
    NSArray *_handles;
}

+ (void)enumerateAllChatsWithBlock:(CDUnknownBlockType)arg1;
@property(retain) NSArray *handles; // @synthesize handles=_handles;
@property BOOL isGroup; // @synthesize isGroup=_isGroup;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain) NSString *chatIdentifier; // @synthesize chatIdentifier=_chatIdentifier;
@property(retain) NSString *guid; // @synthesize guid=_guid;
// - (void).cxx_destruct;
- (id)description;
//  (id)initWithChatRecord:(struct _IMDChatRecordStruct )arg1;
- (void)enumerateAllMessagesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllAttachmentsWithBlock:(CDUnknownBlockType)arg1;

@end

