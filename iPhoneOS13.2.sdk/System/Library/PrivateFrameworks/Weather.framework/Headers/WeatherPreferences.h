//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Weather/WFTemperatureUnitObserver-Protocol.h>

@class City, NSArray, NSDate, NSString, WeatherCloudPreferences;
@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherPreferences : NSObject <WFTemperatureUnitObserver, NSURLConnectionDelegate>
{
    NSString *_UUID;
    NSString *_serviceHost;
    BOOL _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id  _persistence;
    NSString *_cacheDirectoryPath;
    BOOL _logUnitsAndLocale;
    BOOL _userGroupPrefsLockedWhenInit;
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    WeatherCloudPreferences *_cloudPreferences;
}

+ (BOOL)performUpgradeOfPersistence:(id)arg1 fileManager:(id)arg2 error:(id )arg3;
+ (id)serviceDebuggingPath;
+ (id)readInternalDefaultValueForKey:(id)arg1;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)userDefaultsPersistence;
+ (id)sharedPreferences;
@property(retain) WeatherCloudPreferences *cloudPreferences; // @synthesize cloudPreferences=_cloudPreferences;
@property(nonatomic) BOOL userGroupPrefsLockedWhenInit; // @synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit;
@property(nonatomic) __weak id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSDate *lastUpdated;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (BOOL)areCitiesDefault:(id)arg1;
- (void)saveToUbiquitousStore;
- (void)_clearCachedObjects;
- (void)resetLocale;
- (BOOL)serviceDebugging;
@property(nonatomic, getter=isLocalWeatherEnabled, setter=setLocalWeatherEnabled:) BOOL isLocalWeatherEnabled;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)_cacheDirectoryPath;
- (id)twcLogoURL:(id)arg1;
- (id)twcLogoURL;
- (id)serviceHost;
- (id)UUID;
- (void)forceSyncCloudPreferences;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(BOOL)arg1;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)setDefaultSelectedCity:(NSUInteger)arg1;
- (id)loadDefaultSelectedCityID;
- (int)loadDefaultSelectedCity;
- (void)setActiveCity:(NSUInteger)arg1;
- (int)loadActiveCity;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (id)loadSavedCities;
- (void)setDefaultCities:(id)arg1;
- (id)_defaultCities;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(NSUInteger)arg2;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(NSUInteger)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
@property(readonly, nonatomic) City *localWeatherCity;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)preferencesDictionaryForCity:(id)arg1;
- (BOOL)_defaultsCurrent;
- (BOOL)_defaultsAreValid;
@property(readonly) int userTemperatureUnit;
- (BOOL)isCelsius;
- (void)setCelsius:(BOOL)arg1;
- (BOOL)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)adjustPrefsForLocalWeatherEnabled:(BOOL)arg1;
- (BOOL)ensureValidSelectedCityID;
- (void)setupUbiquitousStoreIfNeeded;
- (id)initWithPersistence:(id)arg1;
- (id)init;

@end

