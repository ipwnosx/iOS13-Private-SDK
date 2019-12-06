//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSCache, NSMapTable, NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext;
@protocol SKUIResourceLoaderDelegate;

@interface SKUIResourceLoader : NSObject <NSCacheDelegate>
{
    SKUIClientContext *_clientContext;
    NSMutableDictionary *_operationsByRequestID;
    NSMapTable *_requestsByCacheKey;
    NSCache *_resourcesByRequestID;
    BOOL _inBackground;
    long long _requestCountMap[3];
    NSOperationQueue *_operationQueue;
    id <SKUIResourceLoaderDelegate> _delegate;
    NSString *_name;
    NSOperationQueue *_delegateQueue;
}

@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <SKUIResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)_sendDidLoadAllForReason:(long long)arg1;
- (void)_sendDidIdleIfNecessary;
- (void)_sendDidBeginLoadingIfNecessary;
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;
- (void)_reprioritizeOperations;
- (void)_updateLoadReason:(long long)arg1 forOperation:(id)arg2;
- (long long)_qualityOfService;
- (long long)_queuePriorityForLoadReason:(long long)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
@property(nonatomic) long long resourceCacheLimit;
- (BOOL)trySetReason:(long long)arg1 forRequestWithIdentifier:(NSUInteger)arg2;
- (void)setReason:(long long)arg1 forRequestWithIdentifier:(NSUInteger)arg2;
- (id)requestIdentifierForCacheKey:(id)arg1;
- (BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;
- (BOOL)isIdleForReason:(long long)arg1;
@property(readonly, nonatomic, getter=isIdle) BOOL idle;
- (void)enterForeground;
- (void)enterBackground;
- (void)cancelRequestWithIdentifier:(NSUInteger)arg1;
- (void)cancelAllRequests;
- (void)removeAllCachedResources;
- (id)cachedResourceForRequestIdentifier:(NSUInteger)arg1;
- (void)addResource:(id)arg1 forRequestIdentifier:(NSUInteger)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (id)initWithOperationQueue:(id)arg1;

@end

