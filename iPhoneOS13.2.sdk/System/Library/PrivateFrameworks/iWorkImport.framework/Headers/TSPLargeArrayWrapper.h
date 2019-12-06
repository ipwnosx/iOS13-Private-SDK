//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSPAbstractMutableLargeArray;

__attribute__((visibility("hidden")))
@interface TSPLargeArrayWrapper : NSMutableArray
{
    TSPAbstractMutableLargeArray *_backingStore;
}

// - (void).cxx_destruct;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)objectAtIndex:(NSUInteger)arg1;
- (NSUInteger)count;
- (id)initWithLargeArray:(id)arg1;

@end

