//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncRapportStorage.h>

#import <CoreDuet/_DKSyncRemoteContextStorage-Protocol.h>

@protocol _DKSyncRemoteContextStorageDelegate;

@interface _DKSyncRapportContextStorage : _DKSyncRapportStorage <_DKSyncRemoteContextStorage>
{
    id <_DKSyncRemoteContextStorageDelegate> _delegate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <_DKSyncRemoteContextStorageDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)handleUnsubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleUnsubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleSubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleSubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleSendContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleSendContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleFetchContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleFetchContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerRequestIDsWithClient:(id)arg1;

@end

