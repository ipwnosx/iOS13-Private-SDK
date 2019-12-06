//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLClientAuthorization-Protocol.h>

@class BKSApplicationStateMonitor, NSDate, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization>
{
//     CDStruct_4c969caf _auditToken;
    NSSet *_photoKitEntitlements;
    int _kTCCPhotosAuthorized;
    int _kTCCPhotosAddAuthorized;
    BOOL _libraryUpgradeAuthorized;
    BOOL _directDatabaseWriteAuthorized;
    NSDate *_connectionStartDate;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSObject<OS_dispatch_queue> *_duetUpdateQueue;
    BOOL _photoKitEntitled;
    int _clientProcessIdentifier;
    NSString *_trustedCallerBundleID;
    NSString *_trustedCallerDisplayName;
}

@property(readonly, nonatomic) BOOL photoKitEntitled; // @synthesize photoKitEntitled=_photoKitEntitled;
@property(readonly, nonatomic) NSString *trustedCallerBundleID; // @synthesize trustedCallerBundleID=_trustedCallerBundleID;
@property(readonly, nonatomic) int clientProcessIdentifier; // @synthesize clientProcessIdentifier=_clientProcessIdentifier;
// - (void).cxx_destruct;
- (void)handleInvalidation;
- (BOOL)photoKitEntitledFor:(id)arg1;
@property(readonly, nonatomic) NSString *trustedCallerDisplayName; // @synthesize trustedCallerDisplayName=_trustedCallerDisplayName;
- (void)_handleDuetReportIsForground:(BOOL)arg1;
- (BOOL)_shouldTrackDKEventForBundle:(id)arg1;
- (void)_trackDKEventIfNecessary;
- (void)setupFromConnection:(id)arg1;
// @property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken;
- (BOOL)isPhotosClient;
@property(readonly, nonatomic) BOOL directDatabaseWriteAuthorized;
- (BOOL)isClientAuthorizedForLibraryUpgrade;
- (BOOL)isClientAuthorizedForTCCServicePhotosAdd;
- (BOOL)isClientAuthorizedForTCCServicePhotos;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1;

@end

