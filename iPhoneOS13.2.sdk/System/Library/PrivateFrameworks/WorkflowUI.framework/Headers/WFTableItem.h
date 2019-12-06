//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, WFTableItemTreeNode, WFTableSection;

@interface WFTableItem : NSObject
{
    BOOL _selectable;
    BOOL _expanded;
    Class _cellClass;
    long long _style;
    long long _accessoryType;
    NSMutableArray *_mutableChildren;
    WFTableItemTreeNode *_node;
}

+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 image:(id)arg3;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2;
+ (id)itemWithPrimaryText:(id)arg1 image:(id)arg2;
+ (id)itemWithPrimaryText:(id)arg1;
+ (id)itemWithCellClass:(Class)arg1 representedObject:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
+ (id)itemWithStyle:(long long)arg1 representedObject:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) WFTableItemTreeNode *node; // @synthesize node=_node;
@property(readonly, nonatomic) NSMutableArray *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
// - (void).cxx_destruct;
- (void)removeFromParent;
- (id)nextItemInSection;
- (void)configureCell:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)updateChildren;
@property(copy, nonatomic) NSArray *children;
- (void)removeItemAtIndex:(NSUInteger)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) __weak WFTableSection *section;
- (id)initWithCellClass:(Class)arg1 style:(long long)arg2;

@end

