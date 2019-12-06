//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMapTable;

@interface REDependencyGraph : NSObject <NSCopying>
{
    NSMapTable *_nodes;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)item:(id)arg1 isDependencyOfItem:(id)arg2;
- (BOOL)containsItem:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)markItem:(id)arg1 dependentOnItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPointerFunctions:(NSUInteger)arg1;
- (id)init;
- (void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4 comparator:(CDUnknownBlockType)arg5 warn:(BOOL)arg6;
- (id)topologicalSortedItemsWithComparator:(CDUnknownBlockType)arg1;
- (id)topologicalSortedItems;
@property(readonly, nonatomic) NSArray *allItems;

@end

