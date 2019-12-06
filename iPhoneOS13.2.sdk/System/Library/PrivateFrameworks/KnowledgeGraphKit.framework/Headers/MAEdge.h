//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MAElement.h>

@class MANode, NSSet;

@interface MAEdge : MAElement
{
    MANode *_sourceNode;
    MANode *_targetNode;
}

@property(readonly, nonatomic) __weak MANode *targetNode; // @synthesize targetNode=_targetNode;
@property(readonly, nonatomic) __weak MANode *sourceNode; // @synthesize sourceNode=_sourceNode;
// - (void).cxx_destruct;
- (NSUInteger)_memoryFootprint:(id)arg1;
- (id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2;
- (id)visualStringWithName:(id)arg1;
- (id)visualString;
- (BOOL)isLoop;
@property(readonly, nonatomic) NSSet *nodes;
- (id)commonNode:(id)arg1;
- (id)oppositeNode:(id)arg1;
- (void)_setPersistentStoreProperties:(id)arg1;
- (void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2;
- (void)_removeAllPersistentStoreProperties;
- (void)_removePersistentStorePropertyForKey:(id)arg1;
- (BOOL)isNode;
- (BOOL)isUnique;
- (BOOL)isEqualToEdge:(id)arg1;
- (BOOL)isEqualToElement:(id)arg1;
- (id)shortDescription;
- (id)description;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;
- (id)init;
- (BOOL)conformsToEdgeSchema:(id)arg1;

@end

