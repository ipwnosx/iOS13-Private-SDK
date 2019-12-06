//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFItemBuilderItem-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HFAccessoryBuilder, NSSet;
@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>
{
    HFAccessoryBuilder *_accessoryBuilder;
    HFItem<HFServiceLikeItem> *_accessoryItem;
}

@property(retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem; // @synthesize accessoryItem=_accessoryItem;
@property(retain, nonatomic) HFAccessoryBuilder *accessoryBuilder; // @synthesize accessoryBuilder=_accessoryBuilder;
// - (void).cxx_destruct;
- (id)namingComponentForHomeKitObject;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)accessories;
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2;
- (id)init;

@end

