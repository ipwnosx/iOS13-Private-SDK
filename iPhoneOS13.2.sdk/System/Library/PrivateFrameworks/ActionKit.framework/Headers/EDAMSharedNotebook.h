//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMSharedNotebookRecipientSettings, NSNumber, NSString;

@interface EDAMSharedNotebook : FATObject
{
    NSNumber *_id;
    NSNumber *_userId;
    NSString *_notebookGuid;
    NSString *_email;
    NSNumber *_recipientIdentityId;
    NSNumber *_notebookModifiable;
    NSNumber *_serviceCreated;
    NSNumber *_serviceUpdated;
    NSString *_globalId;
    NSString *_username;
    NSNumber *_privilege;
    EDAMSharedNotebookRecipientSettings *_recipientSettings;
    NSNumber *_sharerUserId;
    NSString *_recipientUsername;
    NSNumber *_recipientUserId;
    NSNumber *_serviceAssigned;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *serviceAssigned; // @synthesize serviceAssigned=_serviceAssigned;
@property(retain, nonatomic) NSNumber *recipientUserId; // @synthesize recipientUserId=_recipientUserId;
@property(retain, nonatomic) NSString *recipientUsername; // @synthesize recipientUsername=_recipientUsername;
@property(retain, nonatomic) NSNumber *sharerUserId; // @synthesize sharerUserId=_sharerUserId;
@property(retain, nonatomic) EDAMSharedNotebookRecipientSettings *recipientSettings; // @synthesize recipientSettings=_recipientSettings;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *globalId; // @synthesize globalId=_globalId;
@property(retain, nonatomic) NSNumber *serviceUpdated; // @synthesize serviceUpdated=_serviceUpdated;
@property(retain, nonatomic) NSNumber *serviceCreated; // @synthesize serviceCreated=_serviceCreated;
@property(retain, nonatomic) NSNumber *notebookModifiable; // @synthesize notebookModifiable=_notebookModifiable;
@property(retain, nonatomic) NSNumber *recipientIdentityId; // @synthesize recipientIdentityId=_recipientIdentityId;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *notebookGuid; // @synthesize notebookGuid=_notebookGuid;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
// - (void).cxx_destruct;

@end

