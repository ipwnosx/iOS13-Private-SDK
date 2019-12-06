//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDelegate-Protocol.h>

@class CHManager, NSArray, NSMutableSet, TUCallProviderManager, TUDispatcher;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>
{
    NSUInteger _coalescingStrategy;
    NSUInteger _options;
    NSArray *_recentCalls;
    NSUInteger _unreadCallCount;
    NSUInteger _unreadVideoCallCount;
    NSUInteger _unreadAudioCallCount;
    CHManager *_callHistoryManager;
    TUCallProviderManager *_callProviderManager;
    TUDispatcher *_dispatcher;
    TUDispatcher *_simpleIvarDispatcher;
    NSMutableSet *_metadataPreCachedOptions;
}

+ (id)tuHandleFromCHHandle:(id)arg1;
+ (id)callHistoryControllerWithCoalescingStrategy:(NSUInteger)arg1 options:(NSUInteger)arg2;
+ (id)sharedControllerWithCoalescingStrategy:(NSUInteger)arg1 options:(NSUInteger)arg2;
+ (id)sharedController;
@property(retain, nonatomic) NSMutableSet *metadataPreCachedOptions; // @synthesize metadataPreCachedOptions=_metadataPreCachedOptions;
@property(retain, nonatomic) TUDispatcher *simpleIvarDispatcher; // @synthesize simpleIvarDispatcher=_simpleIvarDispatcher;
@property(retain, nonatomic) TUDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
// - (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)dispatcherDidFinishBoost:(id)arg1;
- (void)callHistoryDatabaseChanged:(id)arg1;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(NSUInteger)arg1;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (CDUnknownBlockType)callHistoryManagerRecentCallsDispatchBlock;
- (CDUnknownBlockType)callHistoryManagerInitializationDispatchBlock;
- (void)loadDispatchQueue;
- (id)initWithCoalescingStrategy:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)mostRecentCallWithHandle:(id)arg1;
- (BOOL)coalesceCall:(id)arg1 withCall:(id)arg2;
- (BOOL)canCoalesceCall:(id)arg1 withCall:(id)arg2;
- (void)reloadWithOptions:(NSUInteger)arg1;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)markRecentCallsAsReadWithPredicate:(id)arg1;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentVideoCallsAsRead;
- (void)markRecentCallsAsRead;
- (void)deleteRecentCalls:(id)arg1;
- (void)deleteRecentCall:(id)arg1;
- (void)deleteAllRecentCalls;
- (void)boostQualityOfService;
@property(nonatomic) NSUInteger unreadAudioCallCount; // @synthesize unreadAudioCallCount=_unreadAudioCallCount;
@property(nonatomic) NSUInteger unreadVideoCallCount; // @synthesize unreadVideoCallCount=_unreadVideoCallCount;
@property(nonatomic) NSUInteger unreadCallCount; // @synthesize unreadCallCount=_unreadCallCount;
@property(retain, nonatomic) NSArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property(nonatomic) NSUInteger coalescingStrategy; // @synthesize coalescingStrategy=_coalescingStrategy;
- (void)dealloc;
- (id)init;

@end

