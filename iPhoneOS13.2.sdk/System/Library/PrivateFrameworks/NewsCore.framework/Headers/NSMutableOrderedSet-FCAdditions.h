//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <NewsCore/FCOrderedMutableCollectionAdditions-Protocol.h>

@interface NSMutableOrderedSet (FCAdditions) <FCOrderedMutableCollectionAdditions>
- (void)fc_transformWithBlock:(CDUnknownBlockType)arg1;
- (void)fc_insertObjects:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)fc_removeAndReturnObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
@end

