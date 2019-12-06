//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFServiceGroupItemProvider : HFItemProvider
{
    id /* CDUnknownBlockType */ _filter;
    HMHome *_home;
    NSMutableSet *_serviceGroupItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property(retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource; // @synthesize overrideValueSource=_overrideValueSource;
@property(retain, nonatomic) NSMutableSet *serviceGroupItems; // @synthesize serviceGroupItems=_serviceGroupItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end

