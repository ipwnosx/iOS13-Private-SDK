//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>


@class TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSTExpandCollapseState : TSKSosBase <NSCopying>
{
    vector_4dc5f307 _collapsedGroupUIDs;
    vector_4dc5f307 _expandedGroupUIDs;
    TSUUUIDSet *_uidsCollapsed;
    TSUUUIDSet *_uidsExpanded;
}

@property(readonly, nonatomic) TSUUUIDSet *uidsExpanded; // @synthesize uidsExpanded=_uidsExpanded;
@property(readonly, nonatomic) TSUUUIDSet *uidsCollapsed; // @synthesize uidsCollapsed=_uidsCollapsed;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)makeInverse;
// - (void)saveToArchive:(struct ExpandCollapseStateArchive )arg1;
// - (id)initWithArchive:(const struct ExpandCollapseStateArchive )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCollapsed:(id)arg1 expanded:(id)arg2;

@end

