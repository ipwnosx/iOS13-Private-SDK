//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, PGGraphNode;

@interface PGGraphMatchingContextItem : NSObject
{
    double _score;
    NSUInteger _relatedType;
    NSUInteger _criteria;
    PGGraphNode *_referenceNode;
    PGGraphNode *_matchedNode;
    NSSet *_contextNodes;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

+ (NSUInteger)criteriaForLocationLabel:(id)arg1;
+ (id)contextItemWithRelatedType:(NSUInteger)arg1 score:(double)arg2 criteria:(NSUInteger)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;
@property(readonly, nonatomic) NSSet *contextNodes; // @synthesize contextNodes=_contextNodes;
@property(readonly, nonatomic) PGGraphNode *matchedNode; // @synthesize matchedNode=_matchedNode;
@property(readonly, nonatomic) PGGraphNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property(nonatomic) NSUInteger criteria; // @synthesize criteria=_criteria;
@property(readonly, nonatomic) NSUInteger relatedType; // @synthesize relatedType=_relatedType;
@property(nonatomic) double score; // @synthesize score=_score;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContextItem:(id)arg1;
- (id)debugDescription;
- (id)_matchedAddressNode;
- (void)_findLocalStartAndEndDate;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
- (id)description;
- (id)initWithRelatedType:(NSUInteger)arg1 score:(double)arg2 criteria:(NSUInteger)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6;

@end

