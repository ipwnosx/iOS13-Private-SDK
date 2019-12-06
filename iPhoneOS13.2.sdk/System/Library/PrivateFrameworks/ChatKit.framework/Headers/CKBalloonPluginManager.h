//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAppInstallationWatcherObserver-Protocol.h>

@class CKPreviewDispatchCache, IMBalloonPlugin, NSArray, NSCache, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CKBalloonPluginManager : NSObject <CKAppInstallationWatcherObserver>
{
    NSArray *_appStripCandidatePlugins;
    NSArray *_visibleAppStripPlugins;
    NSArray *_visibleSwitcherPlugins;
    NSArray *_recentAppStripPlugins;
    NSArray *_visibleRecentAppStripPlugins;
    BOOL _isAppInstallationEnabled;
    BOOL _isAppRemovalEnabled;
    BOOL _isCameraAllowed;
    BOOL _appStoreAutoEnableToggled;
    BOOL _keepingEmptySections;
    BOOL _isAppInstallationObserver;
    NSString *_lastLaunchedIdentifier;
    IMBalloonPlugin *_lastViewedPlugin;
    NSArray *_visiblePlugins;
    NSArray *_cachedPotentiallyVisiblePlugins;
    NSArray *_favoriteAppStripPlugins;
    NSMutableSet *_currentExtensionConsumers;
    NSDictionary *_pluginVersionMap;
    NSDictionary *_pluginSeenMap;
    NSDictionary *_pluginIndexPathMap;
    NSMutableDictionary *_historicalPluginIndexPathMap;
    NSMutableArray *_MRUPluginInteractionList;
    NSDictionary *_pluginLaunchTimeMap;
    NSArray *_allPlugins;
    long long _numberOfSectionsToKeep;
    NSMutableArray *_visibleInstallations;
    NSSet *_oldVisibleSwitcherPluginIdentifiers;
    NSCache *_iconCache;
    CKPreviewDispatchCache *_snapshotCache;
    NSMutableDictionary *_activeBrowsers;
}

+ (id)defaultFavoritePlugins;
+ (id)morePlugin;
+ (id)recentPlugin;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *activeBrowsers; // @synthesize activeBrowsers=_activeBrowsers;
@property(retain, nonatomic) CKPreviewDispatchCache *snapshotCache; // @synthesize snapshotCache=_snapshotCache;
@property(retain, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) NSSet *oldVisibleSwitcherPluginIdentifiers; // @synthesize oldVisibleSwitcherPluginIdentifiers=_oldVisibleSwitcherPluginIdentifiers;
@property(nonatomic) BOOL isAppInstallationObserver; // @synthesize isAppInstallationObserver=_isAppInstallationObserver;
@property(retain, nonatomic) NSMutableArray *visibleInstallations; // @synthesize visibleInstallations=_visibleInstallations;
@property(nonatomic) long long numberOfSectionsToKeep; // @synthesize numberOfSectionsToKeep=_numberOfSectionsToKeep;
@property(nonatomic, getter=isKeepingEmptySections) BOOL keepingEmptySections; // @synthesize keepingEmptySections=_keepingEmptySections;
@property(retain, nonatomic) NSArray *allPlugins; // @synthesize allPlugins=_allPlugins;
@property(retain, nonatomic) NSDictionary *pluginLaunchTimeMap; // @synthesize pluginLaunchTimeMap=_pluginLaunchTimeMap;
@property(retain, nonatomic) NSMutableArray *MRUPluginInteractionList; // @synthesize MRUPluginInteractionList=_MRUPluginInteractionList;
@property(retain, nonatomic) NSMutableDictionary *historicalPluginIndexPathMap; // @synthesize historicalPluginIndexPathMap=_historicalPluginIndexPathMap;
@property(retain, nonatomic) NSDictionary *pluginIndexPathMap; // @synthesize pluginIndexPathMap=_pluginIndexPathMap;
@property(retain, nonatomic) NSDictionary *pluginSeenMap; // @synthesize pluginSeenMap=_pluginSeenMap;
@property(retain, nonatomic) NSDictionary *pluginVersionMap; // @synthesize pluginVersionMap=_pluginVersionMap;
@property(retain, nonatomic) NSMutableSet *currentExtensionConsumers; // @synthesize currentExtensionConsumers=_currentExtensionConsumers;
@property(retain, nonatomic) NSArray *favoriteAppStripPlugins; // @synthesize favoriteAppStripPlugins=_favoriteAppStripPlugins;
@property(retain, nonatomic) NSArray *visibleSwitcherPlugins; // @synthesize visibleSwitcherPlugins=_visibleSwitcherPlugins;
@property(retain, nonatomic) NSArray *cachedPotentiallyVisiblePlugins; // @synthesize cachedPotentiallyVisiblePlugins=_cachedPotentiallyVisiblePlugins;
@property(retain, nonatomic) NSArray *visiblePlugins; // @synthesize visiblePlugins=_visiblePlugins;
@property(nonatomic, getter=isAppStoreAutoEnableToggled) BOOL appStoreAutoEnableToggled; // @synthesize appStoreAutoEnableToggled=_appStoreAutoEnableToggled;
@property(nonatomic) BOOL isCameraAllowed; // @synthesize isCameraAllowed=_isCameraAllowed;
@property(nonatomic) BOOL isAppRemovalEnabled; // @synthesize isAppRemovalEnabled=_isAppRemovalEnabled;
@property(nonatomic) BOOL isAppInstallationEnabled; // @synthesize isAppInstallationEnabled=_isAppInstallationEnabled;
@property(nonatomic) __weak IMBalloonPlugin *lastViewedPlugin; // @synthesize lastViewedPlugin=_lastViewedPlugin;
@property(retain, nonatomic) NSString *lastLaunchedIdentifier; // @synthesize lastLaunchedIdentifier=_lastLaunchedIdentifier;
// - (void).cxx_destruct;
- (BOOL)_shouldShowActivity;
- (BOOL)_shouldShowSURF;
- (BOOL)isPluginVisible:(id)arg1;
- (void)handleManagedConfigSettingsChangeNotification:(id)arg1;
@property(readonly, nonatomic) BOOL isAppStoreEnabled;
- (NSUInteger)unseenPluginCount;
- (void)cleanSeenMap;
- (void)_setSeen:(BOOL)arg1 forPlugin:(id)arg2;
- (void)setSeen:(BOOL)arg1 forPlugin:(id)arg2;
- (BOOL)isPluginSeenWithInstalledVersion:(id)arg1;
- (BOOL)isPluginSeen:(id)arg1;
- (NSUInteger)badgeValueForPlugin:(id)arg1;
- (id)launchTimeForPlugin:(id)arg1;
- (void)updateLaunchTimeForPlugin:(id)arg1;
- (id)lastLaunchedPlugin;
- (long long)lastViewedPluginIndex;
- (void)updateLaunchStatus:(NSUInteger)arg1 forPlugin:(id)arg2 withNotification:(BOOL)arg3;
- (NSUInteger)launchStatusForPlugin:(id)arg1;
@property(readonly, nonatomic) NSArray *disabledPlugins;
- (id)allPluginsPassingTest:(CDUnknownBlockType)arg1;
- (id)createFakeAppsForPPTTesting:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *allEnabledPlugins;
@property(readonly, nonatomic) BOOL hasLoadedExtensions;
- (BOOL)isInternalPlugin:(id)arg1;
- (void)clearBalloonPluginCache;
- (void)invalidateIconCache;
- (id)pluginForAdamID:(id)arg1;
- (id)pluginForIdentifier:(id)arg1;
- (id)balloonPluginIdentifierForAppExtensionBundleIdentifier:(id)arg1;
- (void)saveWithNotification:(BOOL)arg1;
- (BOOL)_shouldForceRegenerateIndexPathMap;
- (id)_decodeIndexPathMap:(id)arg1;
- (id)_encodeIndexPathMap:(id)arg1;
- (BOOL)isPluginEnabled:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forPlugin:(id)arg2;
- (void)_updateHistoricalPluginIndexPathMap;
- (void)commitInteractionTimeOrderingChanges;
- (void)updateInteractionTimeForPlugin:(id)arg1;
- (void)removeAppWithIdentifier:(id)arg1;
- (void)_disableAppWithBalloonIdentifier:(id)arg1;
- (void)_addAppWithBalloonIdentifier:(id)arg1;
- (BOOL)_shouldUninstallContainingBundle:(id)arg1;
- (void)healthStickerStatusChanged;
//  (struct __CFString )healthKitAchievementAvailabilityChangedNotification;
- (void)reloadInstalledApps:(id)arg1;
- (void)refreshPlugins;
- (void)removeExtensionConsumer:(id)arg1;
- (void)addExtensionConsumer:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)viewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (id)existingViewControllerForPluginIdentifier:(id)arg1;
- (id)viewControllerForPluginIdentifier:(id)arg1;
- (id)newViewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (void)updateSnapshotForBrowserViewController:(id)arg1 currentBounds:(CGRect)arg2;
- (id)browserSnapshotForKey:(id)arg1;
- (void)_invalidatePluginForKey:(id)arg1;
- (void)invalidateAllActivePluginsSkippingCameraApp:(BOOL)arg1;
- (void)invalidateAllActivePlugins;
- (void)invalidateAllActiveSwitcherPlugins;
- (void)forceTearDownRemoteViewsSkippingCameraApp:(BOOL)arg1;
- (id)bundleIdentifiersForCurrentExtensionConsumers;
- (void)forceKillNonCameraRemoteExtensionsImmediately;
- (void)forceKillRemoteExtensionsWithDelay:(BOOL)arg1 skipCameraApp:(BOOL)arg2;
- (void)forceKillRemoteExtensionsWithDelay:(BOOL)arg1;
- (void)prepareForSuspend;
- (BOOL)isViewController:(id)arg1 fromPluginWithIdentifier:(id)arg2;
- (id)handwritingViewControllerWithPluginPayloads:(id)arg1;
- (id)digitalTouchViewControllerWithDataSource:(id)arg1;
- (id)existingPhotoBrowserViewController;
- (id)photosBrowserViewControllerWithPluginPayloads:(id)arg1;
- (void)invalidateAppManagerPlugin;
- (void)invalidatePhotosPlugin;
- (id)descriptionOfVisibleDrawerPlugins;
- (void)removeVisibleInstallationWithID:(id)arg1;
- (BOOL)isEnabledAndVisible:(id)arg1;
- (void)updateIndexPath:(id)arg1 forPlugin:(id)arg2 isDrawerPluginPath:(BOOL)arg3;
- (void)regeneratePluginIndexPaths;
- (BOOL)_addPluginToRecentsFrontIfNeeded:(id)arg1 frontOfRecents:(id)arg2 pluginMap:(id)arg3 fallbackMap:(id)arg4;
- (id)_pluginIndexPathForFavoritePluginWithIdentifier:(id)arg1 pluginMap:(id)arg2 fallbackMap:(id)arg3;
- (id)orderedPlugins:(BOOL)arg1;
- (id)allPotentiallyVisiblePlugins;
@property(readonly, nonatomic) NSArray *potentiallyVisibleNonFavoritePlugins;
@property(readonly, nonatomic) NSArray *potentiallyVisiblePlugins;
@property(readonly, nonatomic) NSArray *visibleRecentAppStripPlugins;
@property(readonly, nonatomic) NSArray *recentAppStripPlugins;
@property(readonly, nonatomic) NSArray *visibleFavoriteAppStripPlugins;
@property(readonly, nonatomic) NSArray *visibleDrawerPlugins;
- (id)candidateAppStripPlugins;
- (id)filteredArrayOfInstallationsThatShouldBeVisible:(id)arg1;
- (void)_refreshVisibleDrawerPluginsDueToAppInstallationChange;
- (void)updateAppInstallations;
- (void)appInstallationWatcher:(id)arg1 addedAppInstallation:(id)arg2;
- (void)appInstallationWatcher:(id)arg1 changedAppInstallation:(id)arg2;

@end

