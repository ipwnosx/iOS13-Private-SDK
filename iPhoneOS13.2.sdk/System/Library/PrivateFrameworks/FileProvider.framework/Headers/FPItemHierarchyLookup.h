//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItem, NSCache;
@protocol FPItemHierarchyLookingUp;

@interface FPItemHierarchyLookup : NSObject
{
    FPItem *_item;
    id <FPItemHierarchyLookingUp> _hierarchyServicer;
    NSCache *_parentHierarchyItems;
}

@property(retain, nonatomic) NSCache *parentHierarchyItems; // @synthesize parentHierarchyItems=_parentHierarchyItems;
@property __weak id <FPItemHierarchyLookingUp> hierarchyServicer; // @synthesize hierarchyServicer=_hierarchyServicer;
// - (void).cxx_destruct;
- (id)valueForKeyPath:(id)arg1;
- (id)_fetchItemWithID:(id)arg1;
- (id)initWithItem:(id)arg1 parentHierarchyItems:(id)arg2 hierarchyServicer:(id)arg3;

@end

