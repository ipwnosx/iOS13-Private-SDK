//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFGroupableItemProtocol-Protocol.h>
#import <Home/HFItemBuilderItem-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, HMHome, NSDictionary, NSSet;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFDemoModeAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating, HFItemBuilderItem, HFGroupableItemProtocol>
{
    HMAccessory *_accessory;
    NSDictionary *_configInfo;
}

+ (id)accessoryItemForAccessory:(id)arg1;
@property(retain, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
// - (void).cxx_destruct;
- (id)namingComponentForHomeKitObject;
- (BOOL)isMediaSystemDemoType;
@property(readonly, nonatomic) NSSet *services;
- (id)accessories;
@property(readonly, nonatomic) HMHome *home;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) NSUInteger numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property(readonly, nonatomic) BOOL isItemGroup;
- (id)mediaProfileContainer;
- (id)hf_serviceNameComponents;
- (id)initWithAccessory:(id)arg1;
- (id)serviceLikeBuilderInHome:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copyWithValueSource:(id)arg1;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;

@end

