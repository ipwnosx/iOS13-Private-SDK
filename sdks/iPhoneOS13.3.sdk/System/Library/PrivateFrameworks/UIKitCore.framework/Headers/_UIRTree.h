//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIRTree : NSObject
{
    struct shared_ptr<_UIRTreeContainerNode> _root;
    NSRange _allIndexesRange;
    NSMutableIndexSet *_allIndexes;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (CGRect)_frameForIndex:(long long)arg1;
@property(readonly, nonatomic) NSIndexSet *allIndexes;
@property(readonly, nonatomic) CGRect boundingFrame;
- (id)visualDescription;
- (void)enumerateFramesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)indexesForFramesIntersectingFrame:(CGRect)arg1;
- (void)insertFrame:(CGRect)arg1 forIndex:(long long)arg2;
- (id)description;
- (id)init;

@end

