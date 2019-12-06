//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPIdentifierSet, NSArray, NSIndexPath;
@protocol MPLazySectionedCollectionDataSource;

@protocol MPLazySectionedCollectionDataSource <NSObject>
- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (NSUInteger)numberOfItemsInSection:(NSUInteger)arg1;
- (id)sectionAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfSections;

@optional
- (BOOL)hasSameContentAsDataSource:(id <MPLazySectionedCollectionDataSource>)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (NSRange *)optionalSectionIndexTitlesRange;
- (NSArray *)sectionIndexTitles;
- (NSIndexPath *)indexPathForItemWithIdentifiersIntersectingSet:(MPIdentifierSet *)arg1;
- (MPIdentifierSet *)identifiersForSectionAtIndex:(long long)arg1;
- (MPIdentifierSet *)identifiersForItemAtIndexPath:(NSIndexPath *)arg1;
@end

