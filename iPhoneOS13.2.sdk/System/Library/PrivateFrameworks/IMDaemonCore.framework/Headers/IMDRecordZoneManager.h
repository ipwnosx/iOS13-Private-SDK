//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKRecordZone, CKRecordZoneID, IMDCKDatabaseManager;

@interface IMDRecordZoneManager : NSObject <APSConnectionDelegate>
{
    CKRecordZoneID *_chatRecordZoneID;
    CKRecordZone *_chatRecordZone;
    CKRecordZoneID *_attachmentRecordZoneID;
    CKRecordZone *_attachmentRecordZone;
    CKRecordZoneID *_messageRecordZoneID;
    CKRecordZone *_messageRecordZone;
    CKRecordZoneID *_analyticRecordZoneID;
    CKRecordZone *_analyticRecordZone;
    CKRecordZoneID *_deDupeSaltZoneID;
    CKRecordZone *_deDupeSaltRecordZone;
    CKRecordZoneID *_metricZoneID;
    IMDCKDatabaseManager *_dataBaseManager;
    APSConnection *_pushConnection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) IMDCKDatabaseManager *dataBaseManager; // @synthesize dataBaseManager=_dataBaseManager;
@property(readonly, nonatomic) CKRecordZoneID *metricZoneID; // @synthesize metricZoneID=_metricZoneID;
@property(readonly, nonatomic) CKRecordZone *deDupeSaltRecordZone; // @synthesize deDupeSaltRecordZone=_deDupeSaltRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *deDupeSaltZoneID; // @synthesize deDupeSaltZoneID=_deDupeSaltZoneID;
@property(readonly, nonatomic) CKRecordZone *analyticRecordZone; // @synthesize analyticRecordZone=_analyticRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *analyticRecordZoneID; // @synthesize analyticRecordZoneID=_analyticRecordZoneID;
@property(readonly, nonatomic) CKRecordZone *messageRecordZone; // @synthesize messageRecordZone=_messageRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *messageRecordZoneID; // @synthesize messageRecordZoneID=_messageRecordZoneID;
@property(readonly, nonatomic) CKRecordZone *attachmentRecordZone; // @synthesize attachmentRecordZone=_attachmentRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *attachmentRecordZoneID; // @synthesize attachmentRecordZoneID=_attachmentRecordZoneID;
@property(readonly, nonatomic) CKRecordZone *chatRecordZone; // @synthesize chatRecordZone=_chatRecordZone;
@property(readonly, nonatomic) CKRecordZoneID *chatRecordZoneID; // @synthesize chatRecordZoneID=_chatRecordZoneID;
- (void)fetchChatZoneToCheckManateeStatus:(CDUnknownBlockType)arg1;
- (long long)derivedQualityOfService;
- (id)ckUtilities;
- (void)_deleteAllZonesForDatabase:(id)arg1;
- (void)deleteAllZones;
- (void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)arg1 recordType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteDeDupeSaltZone;
- (void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteAnalyticZone;
- (void)createAnalyticZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteMessageZone;
- (void)createMessageZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteAttachmentZone;
- (void)createAttachmentZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteChatZone;
- (void)createChatZoneIfNeededWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_deleteZone:(id)arg1 forDatabase:(id)arg2;
- (void)_deleteZone:(id)arg1;
- (void)_createRecordZoneIfNeeded:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_createRecordZone:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_checkRecordZoneExists:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_createSubscriptionIfNeededForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_createSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 recordType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_handleNotificationForZoneID:(id)arg1 subscriptionID:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_setUpPushConnection;
- (void)dealloc;
- (id)init;

@end

