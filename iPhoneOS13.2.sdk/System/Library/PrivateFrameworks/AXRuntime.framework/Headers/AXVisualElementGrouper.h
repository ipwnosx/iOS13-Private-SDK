//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/AXElementGrouper.h>

@interface AXVisualElementGrouper : AXElementGrouper
{
    double _maximumNeighbourDistance;
    double _maximumDistanceForAligningEdges;
}

@property(nonatomic) double maximumDistanceForAligningEdges; // @synthesize maximumDistanceForAligningEdges=_maximumDistanceForAligningEdges;
@property(nonatomic) double maximumNeighbourDistance; // @synthesize maximumNeighbourDistance=_maximumNeighbourDistance;
- (id)_groupablesForItems:(id)arg1;
- (id)initWithHeuristics:(long long)arg1;

@end

