//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIWorkoutActivityType, FIUIWorkoutDefaultMetricsProvider, NPSDomainAccessor, NPSManager, NSMutableArray, NSMutableDictionary;

@interface FIUIWorkoutSettingsManager : NSObject
{
    FIUIWorkoutActivityType *_workoutActivityType;
    NSMutableDictionary *_settingsByActivityType;
    NSMutableDictionary *_settingOverridesByMetric;
    NSMutableArray *_enabledMetrics;
    FIUIWorkoutDefaultMetricsProvider *_defaultMetricsProvider;
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}

+ (void)obliterateUserConfiguredWorkoutMetrics;
@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
// - (void).cxx_destruct;
- (void)_writeToDomainWithShouldUpdateVersion:(BOOL)arg1;
- (void)_migratePaceViewSettingIfNeeded;
- (void)_readFromDomain;
- (BOOL)_hasUserMadeMetricChangesToWorkoutType:(id)arg1 enabledMetrics:(id)arg2 settingOverridesByMetric:(id)arg3 metricFormatVersion:(id)arg4;
- (BOOL)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg1 workoutActivityType:(id)arg2;
- (void)reloadMetrics;
- (long long)disabledIndexForMetricType:(NSUInteger)arg1;
- (void)moveMetricType:(NSUInteger)arg1 toEnabledIndex:(long long)arg2;
- (void)setEnabled:(BOOL)arg1 forMetricType:(NSUInteger)arg2 didChange:(BOOL )arg3;
- (id)orderedDisabledMetrics;
- (id)supportedMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (id)orderedSupportedMetrics;
- (id)orderedEnabledMetrics;
- (BOOL)isMetricEnabled:(NSUInteger)arg1;
- (void)_clearOldMetricsIfNeeded;
- (id)initWithWorkoutActivityType:(id)arg1;
- (id)init;

@end

