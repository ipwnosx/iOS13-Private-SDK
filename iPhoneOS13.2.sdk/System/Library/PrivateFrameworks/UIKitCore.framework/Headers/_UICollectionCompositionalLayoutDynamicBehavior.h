//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIDynamicBehavior.h"

@class NSCollectionLayoutVisibleItem;
@protocol _NSCollectionLayoutVisibleItem;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicBehavior : UIDynamicBehavior
{
    id <_NSCollectionLayoutVisibleItem> _visibleItem;
}

@property(readonly, nonatomic) NSCollectionLayoutVisibleItem *visibleItem; // @synthesize visibleItem=_visibleItem;
// - (void).cxx_destruct;
- (id)item;
- (id)initWithVisibleItem:(id)arg1;

@end

