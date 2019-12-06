//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>
#import <CloudPhotoLibrary/CPLNetworkWatcherDelegate-Protocol.h>
#import <CloudPhotoLibrary/_CPLScheduledOverrideDelegate-Protocol.h>

@class CPLEngineLibrary, CPLNetworkWatcher, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLEngineComponent>
{
    BOOL _closed;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    BOOL _modifyingBudgetOverride;
    NSUInteger _newBudgetsToOverride;
    NSUInteger _newBudgetsToStopOverriding;
    NSMutableDictionary *_reasonsToOverrideSystemBudget;
    NSMutableDictionary *_scheduledOverrides;
    BOOL _allowOperationsBoost;
    BOOL _allowBackgroundOperationsBoost;
    CPLEngineLibrary *_engineLibrary;
}

+ (void)enumerateSystemBudgets:(NSUInteger)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)descriptionForBudgets:(NSUInteger)arg1;
+ (id)descriptionForBudget:(NSUInteger)arg1;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
// - (void).cxx_destruct;
- (void)watcher:(id)arg1 stateDidChangeToNetworkState:(id)arg2;
- (void)scheduledOverrideDidEnd:(id)arg1;
@property(readonly) BOOL isDataBudgetOverriden;
- (void)stopOverridingSystemBudgetsForClient:(NSUInteger)arg1;
- (void)startOverridingSystemBudgetsForClient:(NSUInteger)arg1;
- (void)stopOverridingSystemBudgets:(NSUInteger)arg1 reason:(id)arg2;
- (void)startOverridingSystemBudgets:(NSUInteger)arg1 reason:(id)arg2;
- (void)_withSystemBudgetOverride:(CDUnknownBlockType)arg1;
- (void)_stopOverridingBudget:(NSUInteger)arg1 reason:(id)arg2;
- (void)_startOverridingBudget:(NSUInteger)arg1 reason:(id)arg2;
@property(readonly) BOOL canBoostBackgroundOperations;
@property(readonly) BOOL canBoostOperations;
@property(readonly) BOOL isOnCellularOrUnknown;
@property(readonly) BOOL isNetworkConstrained;
@property(readonly) BOOL isNetworkConnected;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSUInteger freeDiskSpaceSize;
- (void)updateDiskPressureState;
@property(readonly) NSUInteger diskPressureState;
- (id)componentName;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;

@end

