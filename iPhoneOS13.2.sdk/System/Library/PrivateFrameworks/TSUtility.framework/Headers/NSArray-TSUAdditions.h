//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSArray (TSUAdditions)
+ (id)arrayWithInts:(int )arg1 count:(NSUInteger)arg2;
+ (id)arrayWithCGFloats:(double )arg1 count:(NSUInteger)arg2;
- (id)tsu_arrayByFlattening;
- (BOOL)tsu_containsObjectIdenticalTo:(id)arg1;
- (id)tsu_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayOfObjectsAtIndexes:(id)arg1 options:(NSUInteger)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)tsu_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)tsu_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_map:(CDUnknownBlockType)arg1;
- (id)tsu_mutableArrayByMakingObjectsPerformSelector:(SEL)arg1;
- (id)tsu_arrayByMakingObjectsPerformSelector:(SEL)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)tsu_intersectionWithArray:(id)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)tsu_makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)tsu_indexesOfObjects:(id)arg1;
- (NSUInteger)tsu_indexOfSmallestObject;
- (id)tsu_objectAfterObjectIdenticalTo:(id)arg1;
- (id)tsu_objectBeforeObjectIdenticalTo:(id)arg1;
- (id)initWithInts:(int )arg1 count:(NSUInteger)arg2;
- (id)initWithCGFloats:(double )arg1 count:(NSUInteger)arg2;
- (void)appendJsonStringToString:(id)arg1;
@end

