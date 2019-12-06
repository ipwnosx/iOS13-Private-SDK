//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/CRObject.h>

@class CRDocument, CROrderedSet, CRTreeNode;

@interface CRTree : CRObject
{
}

+ (id)CRProperties;
- (void)computeChildren;
- (void)invalidateChildren;
- (void)mergeWith:(id)arg1;
@property(readonly, nonatomic) CRDocument *document;
- (void)removeNode:(id)arg1;
- (void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)setNodeTree:(id)arg1 insertAtIndex:(NSUInteger)arg2;
- (void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(NSUInteger)arg3;
- (id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(NSUInteger)arg3;
- (NSUInteger)insertIndexForNode:(id)arg1 childIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) CRTreeNode *root;
@property(readonly, nonatomic) CROrderedSet *nodes;
- (id)initWithCRCoder:(id)arg1;
- (id)init;

@end

