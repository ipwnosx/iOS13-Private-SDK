//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol HFHomeKitSettingsVendor;

@interface HFHomeKitSettingsAdapterManager : NSObject
{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    NSMutableDictionary *_adaptersByID;
}

@property(readonly, nonatomic) NSMutableDictionary *adaptersByID; // @synthesize adaptersByID=_adaptersByID;
@property(readonly, nonatomic) __weak id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
// - (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)init;
- (id)initWithHomeKitSettingsVendor:(id)arg1;

@end

