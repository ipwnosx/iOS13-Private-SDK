//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSError, NSMutableArray, SFDeviceAssetQuery, SFDeviceAssetRequestConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFDeviceAssetTask : NSObject
{
    BOOL _useProcessLocalCache;
    BOOL _queryResultCalled;
    BOOL _downloadCompletionCalled;
    SFDeviceAssetQuery *_deviceAssetQuery;
    SFDeviceAssetRequestConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_deviceQueryParameters;
    NSObject<OS_dispatch_source> *_timer;
    NSBundle *_matchBundle;
    NSBundle *_imperfectMatchBundle;
    NSBundle *_fallbackBundle;
    NSBundle *_cachedBundle;
    NSError *_error;
}

@property(nonatomic) BOOL downloadCompletionCalled; // @synthesize downloadCompletionCalled=_downloadCompletionCalled;
@property(nonatomic) BOOL queryResultCalled; // @synthesize queryResultCalled=_queryResultCalled;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSBundle *cachedBundle; // @synthesize cachedBundle=_cachedBundle;
@property(readonly, nonatomic) NSBundle *fallbackBundle; // @synthesize fallbackBundle=_fallbackBundle;
@property(readonly, nonatomic) NSBundle *imperfectMatchBundle; // @synthesize imperfectMatchBundle=_imperfectMatchBundle;
@property(readonly, nonatomic) NSBundle *matchBundle; // @synthesize matchBundle=_matchBundle;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSMutableArray *deviceQueryParameters; // @synthesize deviceQueryParameters=_deviceQueryParameters;
@property(readonly, nonatomic) BOOL useProcessLocalCache; // @synthesize useProcessLocalCache=_useProcessLocalCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) SFDeviceAssetRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery; // @synthesize deviceAssetQuery=_deviceAssetQuery;
// - (void).cxx_destruct;
- (id)bundleAtURL:(id)arg1 error:(id )arg2;
- (id)bundleURLFromAssetURL:(id)arg1;
- (void)completeWithBundle:(id)arg1 isFallback:(BOOL)arg2 isCached:(BOOL)arg3;
- (BOOL)completeIfPossible;
- (void)cancelTimeout;
- (BOOL)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isImperfectMatch:(BOOL)arg4 isCached:(BOOL)arg5;
- (BOOL)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isImperfectMatch:(BOOL)arg4 isCached:(BOOL)arg5;
- (BOOL)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(BOOL)arg3 isImperfectMatch:(BOOL)arg4 isCached:(BOOL)arg5;
- (void)createQueryParameters;
- (id)initWithDeviceQuery:(id)arg1 requestConfiguration:(id)arg2 dispatchQueue:(id)arg3 useProcessLocalCache:(BOOL)arg4;

@end

