//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBVolumePressBandit-Protocol.h>
#import <SpringBoard/SOSManagerClientObserver-Protocol.h>

@class BSTimer, NSMutableSet, SBClawGestureLogger, SBMainWorkspace, SBSOSDefaults, SOSManager;
@protocol SBSOSClawGestureObserverDelegate;

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit>
{
    SOSManager *_sosManager;
    SBMainWorkspace *_workspace;
    BOOL _sosEnabled;
    BOOL _wasSOSTiggeredByClaw;
    NSMutableSet *_activePressTypes;
    SBClawGestureLogger *_clawGestureLogger;
    id <SBSOSClawGestureObserverDelegate> _delegate;
    SBSOSDefaults *_sosDefaults;
    BSTimer *_sosTriggerTimer;
}

@property(nonatomic, getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:) BOOL wasSOSTiggeredByClaw; // @synthesize wasSOSTiggeredByClaw=_wasSOSTiggeredByClaw;
@property(retain, nonatomic) BSTimer *sosTriggerTimer; // @synthesize sosTriggerTimer=_sosTriggerTimer;
@property(nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled; // @synthesize sosEnabled=_sosEnabled;
@property(readonly, nonatomic) SBSOSDefaults *sosDefaults; // @synthesize sosDefaults=_sosDefaults;
@property(nonatomic) __weak id <SBSOSClawGestureObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBClawGestureLogger *clawGestureLogger; // @synthesize clawGestureLogger=_clawGestureLogger;
@property(retain, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
// - (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
@property(readonly, nonatomic, getter=_isSOSActivated) BOOL sosActivated;
- (BOOL)_isAutomaticCallCountdownEnabled;
- (void)_presentSOSInterface;
@property(readonly, nonatomic, getter=isClawActivated) BOOL clawActivated;
@property(nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (void)dealloc;
- (id)_initWithSOSManager:(id)arg1 workspace:(id)arg2;
- (id)init;

@end

