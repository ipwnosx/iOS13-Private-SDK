//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPCancellationState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPFinalizeHandlerQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _rootObjectIdentifier;
    TSPCancellationState *_cancellationState;
//     struct vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *>> _order;
//     struct unordered_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem>>> _map;
//     struct FinalizeHandlerItem _currentItem;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (long long)currentObjectIdentifier;
- (BOOL)runFinalizeHandlers;
// - (void)runFinalizeHandlerForItem:(struct FinalizeHandlerItem )arg1;
// - (void)visitItemForCycleDetection:(struct FinalizeHandlerItem )arg1;
- (void)addFinalizeHandlers:(vector_3c415888 )arg1 strongReferencesOrNull:(unordered_map_38045d47 )arg2 forIdentifier:(long long)arg3;
- (void)reset;
- (id)initWithRootObjectIdentifier:(long long)arg1 cancellationState:(id)arg2;
- (id)initWithRootObjectIdentifier:(long long)arg1;
- (id)init;

@end

