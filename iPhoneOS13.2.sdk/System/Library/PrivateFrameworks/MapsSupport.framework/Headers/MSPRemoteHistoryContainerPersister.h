//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPContainerPersister.h>

#import <MapsSupport/MSPMapsPushDaemonProxyObserver-Protocol.h>

@class NSUUID;

@interface MSPRemoteHistoryContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver>
{
    NSUUID *_lastOperationIdentifier;
}

// - (void).cxx_destruct;
- (void)fetchContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)historyDidChange;
- (void)favoritesDidChange;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchStateSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reportErrorIfAny:(id)arg1 purpose:(id)arg2;
- (void)dealloc;
- (id)init;

@end

