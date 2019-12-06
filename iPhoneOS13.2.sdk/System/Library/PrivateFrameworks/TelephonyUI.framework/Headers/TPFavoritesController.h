//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUI/TUCallProviderManagerDelegate-Protocol.h>

@class CNContactStore, CNFavorites, NSArray, NSCache, TUCallProviderManager;
@protocol OS_dispatch_queue;

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate>
{
    TUCallProviderManager *_callProviderManager;
    NSCache *_contactCache;
    CNContactStore *_contactStore;
    NSArray *_favoritesEntries;
    CNFavorites *_favoritesManager;
    NSCache *_transportNameCache;
    NSUInteger _prefetchCount;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property(readonly, nonatomic) NSUInteger prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(readonly, nonatomic) CNFavorites *favoritesManager; // @synthesize favoritesManager=_favoritesManager;
// - (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)handleContactsFavoritesDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSCache *transportNameCache; // @synthesize transportNameCache=_transportNameCache;
@property(copy, nonatomic) NSArray *favoritesEntries; // @synthesize favoritesEntries=_favoritesEntries;
@property(readonly, nonatomic) NSCache *contactCache; // @synthesize contactCache=_contactCache;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
- (id)transportNameCacheKeyForFavoritesEntry:(id)arg1;
- (id)fetchTransportNameForFavoritesEntry:(id)arg1;
- (id)fetchFavoritesEntries;
- (id)fetchContactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)fetchContactForFavoritesEntry:(id)arg1;
- (id)contactCacheKeyForFavoritesEntry:(id)arg1;
- (NSUInteger)absoluteIndexForIndex:(NSUInteger)arg1;
- (id)transportNameForFavoritesEntry:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)contactForFavoritesEntry:(id)arg1;
- (void)removeEntriesAtIndexes:(id)arg1;
- (void)moveEntryAtIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (BOOL)canAddEntry;
- (id)addEntry:(id)arg1;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)dealloc;
- (id)initWithContactStore:(id)arg1 prefetchCount:(NSUInteger)arg2;
- (id)init;

@end

