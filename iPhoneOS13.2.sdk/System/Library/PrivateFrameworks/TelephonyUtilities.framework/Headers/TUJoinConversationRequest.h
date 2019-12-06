//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUFilteredRequest-Protocol.h>

@class NSSet, NSString, NSURL, NSUUID, TUHandle;

@interface TUJoinConversationRequest : NSObject <TUFilteredRequest, NSCopying, NSSecureCoding>
{
    BOOL _videoEnabled;
    BOOL _shouldSuppressInCallUI;
    BOOL _wantsStagingArea;
    BOOL _showUIPrompt;
    BOOL _uplinkMuted;
    NSSet *_remoteMembers;
    NSUUID *_UUID;
    TUHandle *_callerID;
    NSUUID *_messagesGroupUUID;
    NSString *_messagesGroupName;
}

+ (BOOL)supportsSecureCoding;
+ (id)sanitizedMembersFromMembers:(id)arg1;
+ (BOOL)showUIPromptFromURLComponents:(id)arg1;
+ (id)messagesGroupNameFromURLComponents:(id)arg1;
+ (id)messagesGroupUUIDFromURLComponents:(id)arg1;
+ (id)callerIDFromURLComponents:(id)arg1;
+ (BOOL)wantsStagingAreaFromURLComponents:(id)arg1;
+ (BOOL)shouldSuppressInCallUIFromURLComponents:(id)arg1;
+ (BOOL)videoEnabledFromURLComponents:(id)arg1;
+ (id)remoteMembersFromURLComponents:(id)arg1;
@property(nonatomic, getter=isUplinkMuted) BOOL uplinkMuted; // @synthesize uplinkMuted=_uplinkMuted;
@property(nonatomic) BOOL showUIPrompt; // @synthesize showUIPrompt=_showUIPrompt;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(copy, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(retain, nonatomic) TUHandle *callerID; // @synthesize callerID=_callerID;
@property(nonatomic) BOOL wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
@property(nonatomic) BOOL shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)showUIPromptQueryItem;
- (id)messagesGroupNameQueryItem;
- (id)messagesGroupUUIDQueryItem;
- (id)callerIDQueryItem;
- (id)wantsStagingAreaQueryItem;
- (id)shouldSuppressInCallUIQueryItem;
- (id)videoEnabledQueryItem;
- (id)remoteMembersQueryItem;
- (id)queryItems;
@property(readonly, nonatomic) NSURL *URL;
- (id)handles;
- (id)bundleIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithRemoteMembers:(id)arg1;

@end

