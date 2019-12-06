//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCAppListMonitorDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate>
{
    NSMutableDictionary *_cloudDocsAppLibrariesByAppID;
    NSMutableDictionary *_appIDsByAppLibraryID;
    NSMutableSet *_observers;
    br_pacer *_refetchPacer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fetchInstalledAppsQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _hasFetchedInitialApps;
}

+ (id)cloudDocsAppsMonitor;
// - (void).cxx_destruct;
- (void)dumpToContext:(id)arg1;
- (id)init;
- (BOOL)isApplicationInstalledForContainerID:(id)arg1;
- (id)allApplicationIdentifiers;
- (id)containerIDsForApplicationIdentifier:(id)arg1;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_start;
- (void)forceRefetchAppList;
- (void)_refetchApps;
- (BOOL)hasFetchedInitialApps;

@end

