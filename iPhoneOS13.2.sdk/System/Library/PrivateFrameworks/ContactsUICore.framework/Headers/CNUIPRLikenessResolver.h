//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessResolver-Protocol.h>

@class CNCache, CNContactStore, CNQueue, CNSchedulerProvider;
@protocol CNSchedulerProvider, CNUIPRLikenessResolver, CNUIPlaceholderProviderFactory, OS_dispatch_source;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver>
{
    id <CNUIPRLikenessResolver> _likenessResolver;
    CNCache *_likenessCache;
    CNQueue *_evictionQueue;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
    id <CNSchedulerProvider> _mainThreadSchedulerProvider;
    id <CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
}

+ (id)_cacheKeyForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) id <CNUIPlaceholderProviderFactory> placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(retain, nonatomic) id <CNSchedulerProvider> mainThreadSchedulerProvider; // @synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // @synthesize memoryMonitoringSource=_memoryMonitoringSource;
@property(retain, nonatomic) CNQueue *evictionQueue; // @synthesize evictionQueue=_evictionQueue;
@property(retain, nonatomic) CNCache *likenessCache; // @synthesize likenessCache=_likenessCache;
@property(retain, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
// - (void).cxx_destruct;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3;
- (id)initWithContactStore:(id)arg1 scheduler:(id)arg2;
@property(readonly, nonatomic) CNSchedulerProvider *schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(nonatomic) long long prohibitedSources;
- (id)likenessLookup;
- (id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2;
- (void)refreshCacheKey:(id)arg1;
- (id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3;
- (id)likenessesForContact:(id)arg1 workScheduler:(id)arg2;
- (id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(CDUnknownBlockType)arg3;
- (void)emptyCache:(id)arg1;
- (void)dealloc;
- (id)initWithLikenessResolver:(id)arg1 capacity:(NSUInteger)arg2 schedulerProvider:(id)arg3;
- (id)initWithLikenessResolver:(id)arg1 capacity:(NSUInteger)arg2;
- (id)initWithLikenessResolver:(id)arg1;

@end

