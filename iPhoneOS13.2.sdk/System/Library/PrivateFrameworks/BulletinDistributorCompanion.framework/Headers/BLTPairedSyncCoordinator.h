//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/PSYInitialSyncStateObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/PSYSyncCoordinatorDelegate-Protocol.h>
#import <BulletinDistributorCompanion/PSYSyncSessionObserverDelegate-Protocol.h>

@class PSYInitialSyncStateObserver, PSYSyncCoordinator, PSYSyncSessionObserver;

@interface BLTPairedSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, PSYSyncSessionObserverDelegate>
{
    BOOL _clientSyncComplete;
    PSYSyncCoordinator *_pairedSyncCoordinator;
    PSYInitialSyncStateObserver *_pairedInitialSyncObserver;
    PSYSyncSessionObserver *_pairedSyncObserver;
}

+ (void)reportProgress:(double)arg1;
+ (void)syncDidComplete;
+ (id)syncState;
@property(nonatomic) BOOL clientSyncComplete; // @synthesize clientSyncComplete=_clientSyncComplete;
@property(retain, nonatomic) PSYSyncSessionObserver *pairedSyncObserver; // @synthesize pairedSyncObserver=_pairedSyncObserver;
@property(retain, nonatomic) PSYInitialSyncStateObserver *pairedInitialSyncObserver; // @synthesize pairedInitialSyncObserver=_pairedInitialSyncObserver;
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // @synthesize pairedSyncCoordinator=_pairedSyncCoordinator;
// - (void).cxx_destruct;
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
- (void)_reportProgress:(double)arg1;
- (void)_syncDidComplete;
- (void)_initInitialSyncStateComplete;
- (id)init;

@end

