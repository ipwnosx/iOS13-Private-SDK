//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMAccessoryNetworkProtectionGroup, NSMutableSet;

@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider
{
    HMAccessoryNetworkProtectionGroup *_group;
    NSMutableSet *_networkProtectionModeOptionItems;
}

@property(retain, nonatomic) NSMutableSet *networkProtectionModeOptionItems; // @synthesize networkProtectionModeOptionItems=_networkProtectionModeOptionItems;
@property(readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group; // @synthesize group=_group;
// - (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithGroup:(id)arg1;

@end

