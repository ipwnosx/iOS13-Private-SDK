//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>

@class _DKContentProviderCache, _DKKnowledgeContentProvider;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface _DKQueryDispatcher : NSObject <_DKKnowledgeQuerying>
{
    _DKContentProviderCache *_contentProviderCache;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _DKKnowledgeContentProvider *_knowledgeContentProvider;
}

@property(retain, nonatomic) _DKKnowledgeContentProvider *knowledgeContentProvider; // @synthesize knowledgeContentProvider=_knowledgeContentProvider;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *defaultResponseQueue; // @synthesize defaultResponseQueue=_defaultResponseQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(retain, nonatomic) _DKContentProviderCache *contentProviderCache; // @synthesize contentProviderCache=_contentProviderCache;
// - (void).cxx_destruct;
- (id)contentProviderQueriesFromQuery:(id)arg1 error:(id )arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)executeQuery:(id)arg1 error:(id )arg2;
- (id)initWithKnowledgeStore:(id)arg1;

@end

