//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSMapTable (TSPersistence)
+ (id)newTspWeakObjectsMapTable;
+ (id)newTspStrongObjectsMapTable;
- (void)enumerateIdentifiersAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsp_removeObjectForIdentifier:(long long)arg1;
- (id)tsp_objectForIdentifier:(long long)arg1;
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;
@end

