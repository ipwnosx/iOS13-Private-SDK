//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphBabyNode : PGGraphNode
{
}

@property(readonly, nonatomic) NSSet *momentNodes;
@property(readonly, nonatomic) NSSet *caretakerNodes;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCaretakerNodesUsingBlock:(CDUnknownBlockType)arg1;

@end

