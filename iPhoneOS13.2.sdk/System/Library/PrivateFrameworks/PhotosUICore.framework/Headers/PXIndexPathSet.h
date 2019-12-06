//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *__sectionIndexesByDataSourceIdentifier;
    NSMutableDictionary *__indexesForSectionsWithItemsByDataSourceIdentifier;
    NSMutableDictionary *__itemIndexesBySectionByDataSourceIdentifier;
    NSMutableDictionary *__subitemIndexesByItemBySectionByDataSourceIdentifier;
}

+ (id)indexPathSet;
+ (id)indexPathSetWithSubitemIndexes:(id)arg1 dataSourceIdentifier:(NSUInteger)arg2 section:(long long)arg3 item:(long long)arg4;
+ (id)indexPathSetWithItemIndexes:(id)arg1 dataSourceIdentifier:(NSUInteger)arg2 section:(long long)arg3;
+ (id)indexPathSetWithSectionIndexes:(id)arg1 dataSourceIdentifier:(NSUInteger)arg2;
//  (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath)arg1;
@property(readonly, nonatomic) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier; // @synthesize _subitemIndexesByItemBySectionByDataSourceIdentifier=__subitemIndexesByItemBySectionByDataSourceIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier; // @synthesize _itemIndexesBySectionByDataSourceIdentifier=__itemIndexesBySectionByDataSourceIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_indexesForSectionsWithItemsByDataSourceIdentifier; // @synthesize _indexesForSectionsWithItemsByDataSourceIdentifier=__indexesForSectionsWithItemsByDataSourceIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier; // @synthesize _sectionIndexesByDataSourceIdentifier=__sectionIndexesByDataSourceIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (id)indexPathSetByReplacingDataSourceIdentifier:(NSUInteger)arg1 withDataSourceIdentifier:(NSUInteger)arg2;
//  (struct PXSimpleIndexPath)indexPathLessThanIndexPath:(struct PXSimpleIndexPath)arg1;
//  (struct PXSimpleIndexPath)indexPathGreaterThanIndexPath:(struct PXSimpleIndexPath)arg1;
//  (struct PXSimpleIndexPath)lastItemIndexPathForDataSourceIdentifier:(NSUInteger)arg1;
//  (struct PXSimpleIndexPath)firstItemIndexPathForDataSourceIdentifier:(NSUInteger)arg1;
- (void)enumerateDataSourceIdentifiers:(CDUnknownBlockType)arg1;
- (void)enumerateAllIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubitemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemIndexSetForDataSourceIdentifier:(NSUInteger)arg1 section:(long long)arg2;
- (id)sectionsWithItemsForDataSourceIdentifier:(NSUInteger)arg1;
- (id)sectionIndexSetForDataSourceIdentifier:(NSUInteger)arg1;
- (void)enumerateSubitemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
// property(readonly, nonatomic) struct PXSimpleIndexPath anyItemIndexPath;
// property(readonly, nonatomic) struct PXSimpleIndexPath anySectionIndexPath;
@property(readonly, nonatomic) long long count;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
//  (BOOL)containsIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

