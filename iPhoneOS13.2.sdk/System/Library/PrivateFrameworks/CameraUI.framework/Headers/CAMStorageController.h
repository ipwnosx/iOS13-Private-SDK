//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol CAMStorageControllerDelegate, OS_dispatch_queue;

@interface CAMStorageController : NSObject
{
    id <CAMStorageControllerDelegate> _delegate;
    long long __cachedVeryLowDiskThreshold;
    long long __cachedLowDiskThreshold;
    long long __cachedLegacyMGDiskThreshold;
    NSDate *__lastPurgeRequestUpdateTime;
    NSObject<OS_dispatch_queue> *__cacheDeleteQueryQueue;
//    struct CacheDeleteToken __queryQueue_currentToken;
}

// property(nonatomic) struct CacheDeleteToken _queryQueue_currentToken; // @synthesize _queryQueue_currentToken=__queryQueue_currentToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_cacheDeleteQueryQueue; // @synthesize _cacheDeleteQueryQueue=__cacheDeleteQueryQueue;
@property(retain, nonatomic) NSDate *_lastPurgeRequestUpdateTime; // @synthesize _lastPurgeRequestUpdateTime=__lastPurgeRequestUpdateTime;
@property(nonatomic) long long _cachedLegacyMGDiskThreshold; // @synthesize _cachedLegacyMGDiskThreshold=__cachedLegacyMGDiskThreshold;
@property(nonatomic) long long _cachedLowDiskThreshold; // @synthesize _cachedLowDiskThreshold=__cachedLowDiskThreshold;
@property(nonatomic) long long _cachedVeryLowDiskThreshold; // @synthesize _cachedVeryLowDiskThreshold=__cachedVeryLowDiskThreshold;
@property(nonatomic) __weak id <CAMStorageControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_legacyDiskSpaceDidBecomeLowNotification;
- (void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(long long)arg1 preferredFreeBytes:(long long)arg2;
- (void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)arg1;
- (void)_updatePurgeRequestStateForConfiguration:(id)arg1 totalFreeBytes:(long long)arg2;
- (long long)_preferredMinimumBytesForConfiguration:(id)arg1;
- (long long)_preferredMinimumBytesForVideoConfiguration:(long long)arg1 encodingBehavior:(long long)arg2;
- (void)_notifyDelegate;
- (void)_loadFreeDiskThresholds;
- (long long)_absoluteMinimumBytesForMode:(long long)arg1;
- (long long)_totalFreeBytes;
//  (void)_statMountPoint:(struct statfs )arg1;
- (id)_pathForStorageMountPoint;
- (void)reportLowDiskEventWithIdentifier:(id)arg1;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(BOOL)arg2;
- (id)init;

@end

