//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridItemManager.h>

@class HFServiceGroupBuilder, NSSet;

@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager
{
    HFServiceGroupBuilder *_serviceGroupBuilder;
    NSSet *_prioritizedRooms;
}

@property(retain, nonatomic) NSSet *prioritizedRooms; // @synthesize prioritizedRooms=_prioritizedRooms;
@property(readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder; // @synthesize serviceGroupBuilder=_serviceGroupBuilder;
// - (void).cxx_destruct;
- (CDUnknownBlockType)_roomComparator;
- (BOOL)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithServiceGroupBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;

@end

