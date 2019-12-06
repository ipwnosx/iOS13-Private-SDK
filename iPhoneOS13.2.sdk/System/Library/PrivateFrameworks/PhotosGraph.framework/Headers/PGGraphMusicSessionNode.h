//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSSet;

@interface PGGraphMusicSessionNode : PGGraphNode
{
}

+ (id)musicSessionDateSortDescriptors;
- (void)enumerateMusicTrackNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *trackNodes;
@property(readonly, nonatomic) NSSet *momentNodes;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;

@end

