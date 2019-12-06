//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CUPowerSourceMonitor : NSObject
{
    BOOL _activateCalled;
    NSMutableDictionary *_aggregateSources;
    NSMutableDictionary *_pendingAggregates;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _invalidationHandler;
    id /* CDUnknownBlockType */ _powerSourceFoundHandler;
    id /* CDUnknownBlockType */ _powerSourceLostHandler;
    id /* CDUnknownBlockType */ _powerSourceChangedHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ powerSourceChangedHandler; // @synthesize powerSourceChangedHandler=_powerSourceChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ powerSourceLostHandler; // @synthesize powerSourceLostHandler=_powerSourceLostHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ powerSourceFoundHandler; // @synthesize powerSourceFoundHandler=_powerSourceFoundHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
// - (void).cxx_destruct;
- (void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2;
- (void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_updatePowerSources;
- (void)_update;
- (void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned int)arg2;
- (void)_aggregatePowerSourceLost:(id)arg1;
- (void)_aggregatePowerSourceFound:(id)arg1;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

