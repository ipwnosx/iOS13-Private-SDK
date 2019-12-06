//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HMRoom, NSMutableSet;

@interface HFCameraItemProvider : HFItemProvider
{
    BOOL _onlyShowsFavorites;
    id /* CDUnknownBlockType */ _filter;
    HMHome *_home;
    HMRoom *_room;
    NSMutableSet *_cameraItems;
}

@property(retain, nonatomic) NSMutableSet *cameraItems; // @synthesize cameraItems=_cameraItems;
@property(nonatomic) BOOL onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (CDUnknownBlockType)_favoriteFilter;
- (CDUnknownBlockType)_roomFilter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

