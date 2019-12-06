//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, NSSet, REAppIconCache, REAppNameCache, REDataSourceManager;
@protocol OS_dispatch_queue;

@interface REDataSourceCatalog : NSObject
{
    REDataSourceManager *_dataSourceManager;
    NSCache *_iconCache;
    NSMutableDictionary *_localizedNameCache;
    NSObject<OS_dispatch_queue> *_queue;
    REAppIconCache *_appIconCache;
    REAppNameCache *_appNameCache;
}

// - (void).cxx_destruct;
- (BOOL)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg1;
- (BOOL)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg1;
- (id)applicationIdentifierForDataSourceWithIdentifier:(id)arg1;
// - (CDStruct_2ec95fd7)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (id)localizedNameForDataSourceWithIdentifier:(id)arg1;
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;
- (BOOL)imageForDataSourceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageForApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg1;
- (void)donatedAppIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)enumerateDataSources:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *unrestrictedDataSourceIdentifiers;
@property(readonly, nonatomic) NSSet *dataSourceIdentifiers;
- (void)_applicationsStatesDidChange;
- (void)dealloc;
- (id)initWithDataSourceManager:(id)arg1;

@end

