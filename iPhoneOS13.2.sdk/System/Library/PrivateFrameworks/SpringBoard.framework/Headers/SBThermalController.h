//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFThermalBlockProvider-Protocol.h>

@class NSHashTable, NSString, NSUUID, SBExternalWifiDefaults, SBSecurityDefaults, SBThermalDefaults;

@interface SBThermalController : NSObject <SBFThermalBlockProvider>
{
    NSUUID *_samplingToken;
    int _hotToken;
    NSUInteger _hotLevel;
    int _coldToken;
    NSUInteger _coldLevel;
    int _sunToken;
    NSUInteger _sunLevel;
    long long _level;
    BOOL _inSunlight;
    NSHashTable *_observers;
    SBExternalWifiDefaults *_networkDefaults;
    SBThermalDefaults *_thermalDefaults;
    SBSecurityDefaults *_securityDefaults;
}

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isInSunlight) BOOL inSunlight; // @synthesize inSunlight=_inSunlight;
@property(readonly, nonatomic) long long level; // @synthesize level=_level;
// - (void).cxx_destruct;
- (void)_setBlocked:(BOOL)arg1;
- (BOOL)_isBlocked;
- (void)removeThermalObserver:(id)arg1;
- (void)addThermalObserver:(id)arg1;
- (BOOL)isThermalBlocked;
@property(readonly, copy) NSString *description;
- (void)startListeningForThermalEvents;
- (void)dealloc;
- (id)init;

@end

