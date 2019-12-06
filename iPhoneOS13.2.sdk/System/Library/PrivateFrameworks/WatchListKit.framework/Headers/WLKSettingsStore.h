//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSUserDefaults, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKSettingsStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    BOOL _privateModeEnabled;
    BOOL _sportsScoreSpoilersAllowed;
    NSString *_pushToken;
    NSString *_accountID;
    NSNumber *_optedInVal;
    BOOL _optedIn;
    BOOL _migratediOS;
    BOOL _migratedtvOS;
    NSMutableArray *_apps;
    NSUserDefaults *_defaultsAccessor;
    int _didChangeNotificationToken;
    NSXPCConnection *_connection;
    BOOL _hasOutstandingChanges;
    int _ignoreChangesCount;
    NSDate *_lastSyncDate;
    NSDate *_lastSyncToCloudDate;
}

+ (void)synchronizeSettingsDefaultsForKeys:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)sharedSettings;
@property BOOL hasOutstandingChanges; // @synthesize hasOutstandingChanges=_hasOutstandingChanges;
@property int ignoreChangesCount; // @synthesize ignoreChangesCount=_ignoreChangesCount;
@property(readonly, copy, nonatomic) NSDate *lastSyncToCloudDate; // @synthesize lastSyncToCloudDate=_lastSyncToCloudDate;
@property(readonly, copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(copy, nonatomic) NSNumber *optedInVal; // @synthesize optedInVal=_optedInVal;
// - (void).cxx_destruct;
- (id)_connection;
- (void)endIgnoringChanges;
- (void)beginIgnoringChanges;
- (void)_tickleKVO;
- (void)_removeWatchListApp:(id)arg1;
- (id)_appsForChannelID:(id)arg1;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)_attemptCullingOfObsoleteApp:(id)arg1;
- (BOOL)synchronize:(NSUInteger)arg1;
- (void)synchronize:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_supportPath;
- (void)_dictionaryOnDisk:(CDUnknownBlockType)arg1;
- (void)_writeToDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryOnDisk;
- (void)_writeToDisk;
- (void)_readFromDisk;
- (id)_dictionaryRepresentationDataOnly;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)arg1;
- (id)_dictionaryRepresentation;
- (void)refresh;
- (void)_updateDisplayNamesForUI:(CDUnknownBlockType)arg1;
- (id)_watchListAppsFiltered;
- (id)watchListAppsFiltered;
- (id)description;
@property(copy, nonatomic) NSString *pushToken;
@property(nonatomic) BOOL migratedtvOS;
@property(nonatomic) BOOL migratediOS;
@property(nonatomic) BOOL optedIn;
@property(nonatomic) BOOL sportsScoreSpoilersAllowed;
@property(nonatomic) BOOL privateModeEnabled;
- (void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (void)setStatus:(NSUInteger)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (id)settingsForChannelID:(id)arg1 externalID:(id)arg2;
- (id)deniedBrands;
- (id)consentedBrands;
- (id)watchListApps;
- (void)dealloc;
- (id)init;

@end

