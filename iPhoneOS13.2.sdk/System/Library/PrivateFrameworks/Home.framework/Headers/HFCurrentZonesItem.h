//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMRoom;

@interface HFCurrentZonesItem : HFItem
{
    HMRoom *_room;
}

@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithRoom:(id)arg1;

@end

