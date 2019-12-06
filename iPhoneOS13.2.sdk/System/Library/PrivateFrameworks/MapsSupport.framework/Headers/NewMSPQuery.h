//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerObserver-Protocol.h>
#import <MapsSupport/MSPQueryDelegate-Protocol.h>

@class MSPContainer, NSArray, NSLock;
@protocol MSPQueryDelegate, OS_dispatch_queue;

@interface NewMSPQuery : NSObject <MSPContainerObserver, MSPQueryDelegate>
{
    NSUInteger _contentVersion;
    BOOL _isReady;
    MSPContainer *_container;
    NSArray *_cachedContents;
    id /* CDUnknownBlockType */ _filterBlock;
    NewMSPQuery *_parentQuery;
    NSLock *_lock;
    id <MSPQueryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property BOOL isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak id <MSPQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NewMSPQuery *parentQuery; // @synthesize parentQuery=_parentQuery;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filterBlock; // @synthesize filterBlock=_filterBlock;
@property(retain, nonatomic) NSArray *cachedContents; // @synthesize cachedContents=_cachedContents;
@property(readonly) NSUInteger contentVersion; // @synthesize contentVersion=_contentVersion;
@property(readonly, nonatomic) MSPContainer *container; // @synthesize container=_container;
// - (void).cxx_destruct;
- (void)queryContentsDidLoad:(id)arg1 contentsVersion:(NSUInteger)arg2;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(NSUInteger)arg2;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(NSUInteger)arg2;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)moveObject:(id)arg1 toIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveObjectToBack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveObjectToFront:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveObject:(id)arg1 afterObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveObject:(id)arg1 beforeObject:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOrUpdateObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOrUpdateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isObject:(id)arg1 equalTo:(id)arg2;
- (void)fetchContentsWithHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *contents;
- (void)processContentsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processContents;
- (void)_notifyDelegate:(CDUnknownBlockType)arg1;
- (id)subQueryFilteredWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithParentQuery:(id)arg1 container:(id)arg2 delegate:(id)arg3 filteredWithBlock:(CDUnknownBlockType)arg4;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2 filteredWithBlock:(CDUnknownBlockType)arg3;
- (id)initWithContainer:(id)arg1 delegate:(id)arg2;

@end

