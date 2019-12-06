//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTNetworkSupport : NSObject
{
    BOOL _enableCriticalReliability;
    BOOL _criticalReliabilityEnabledState;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL enableCriticalReliability;
- (void)_tryToEnableReliability;
- (void)_reallySetCriticalReliability:(BOOL)arg1;
- (void)_setReliabilityTimeoutInterval;
- (void)_clearReliabilityTimeoutInterval;
@property(readonly, nonatomic) BOOL networkReachable;
@property(readonly, nonatomic) BOOL networkActive;
@property(readonly, nonatomic) BOOL networkEnabled;
@property(readonly, nonatomic) BOOL dataActiveAndReachable;
- (BOOL)willSearchForNetworkForBundleId:(id)arg1;
@property(readonly, nonatomic) BOOL willSearchForNetwork;
@property(readonly, nonatomic) BOOL wiFiActiveAndReachable;
- (BOOL)validNetworkReachableForBundleId:(id)arg1;
@property(readonly, nonatomic) BOOL validNetworkReachable;
- (BOOL)validNetworkActiveForBundleId:(id)arg1;
@property(readonly, nonatomic) BOOL validNetworkActive;
- (BOOL)validNetworkEnabledForBundleId:(id)arg1;
@property(readonly, nonatomic) BOOL validNetworkEnabled;
@property(readonly, nonatomic) BOOL allowAnyNetwork;

@end

