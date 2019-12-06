//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

#import <CoreHAP/HAPWACAccessoryBrowserDelegate-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAPWACAccessoryBrowser, HMFTimer, NSArray, NSMutableSet, NSObject;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HMFTimerDelegate, HAPWACAccessoryBrowserDelegate>
{
//     struct BonjourBrowser _bonjourBrowser;
    NSArray *_scanResults;
    NSMutableSet *_discoveredAccessoryServers;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_pendingBonjourEvents;
    HMFTimer *_bonjourEventTimer;
    HAPWACAccessoryBrowser *_hapWACBrowser;
}

@property(retain, nonatomic) HAPWACAccessoryBrowser *hapWACBrowser; // @synthesize hapWACBrowser=_hapWACBrowser;
@property(retain, nonatomic) HMFTimer *bonjourEventTimer; // @synthesize bonjourEventTimer=_bonjourEventTimer;
@property(retain, nonatomic) NSMutableSet *pendingBonjourEvents; // @synthesize pendingBonjourEvents=_pendingBonjourEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
@property(copy, nonatomic) NSArray *scanResults; // @synthesize scanResults=_scanResults;
// - (void).cxx_destruct;
- (id)serverWithIdentifier:(id)arg1;
- (void)wacBrowser:(id)arg1 didFindUnconfiguredPairedHAPWACAccessory:(id)arg2;
- (void)wacBrowser:(id)arg1 didRemoveHAPWACAccessory:(id)arg2;
- (void)wacBrowser:(id)arg1 didFindHAPWACAccessory:(id)arg2;
- (void)_timerDidExpire:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(BOOL)arg2;
- (int)_processPendingBonjourEvent:(id)arg1;
- (void)_pendBonjourEvent:(id)arg1;
- (void)_pendBonjourRemoveEvent:(id)arg1;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_setReachability:(BOOL)arg1 forServer:(id)arg2;
- (void)_invalidateAccessoryServers:(BOOL)arg1;
- (void)_server:(id )arg1 forHAPWACAccessory:(id)arg2;
- (int)_server:(id )arg1 forBonjourDevice:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (void)_invalidateAndRemoveAccessoryServer:(id)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processPendingBonjourRemoveEvents:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2;
- (id)wacBrowser;
- (id)visible2Pt4Networks;
- (void)stopDiscoveringWACAccessoryServersWithInvalidation:(BOOL)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1;
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1;
- (void)startDiscoveringWACAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (int)_initializeAndStartBonjourBrowser;
- (long long)linkType;
- (id)initWithQueue:(id)arg1;

@end

