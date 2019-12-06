//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HMAccessoryBrowserDelegate-Protocol.h>

@class HMAccessoryBrowser, NSArray, NSHashTable, NSMutableSet, SFDeviceDiscovery;

@interface HFAccessoryBrowsingManager : NSObject <HMAccessoryBrowserDelegate>
{
    BOOL _isBrowsing;
    HMAccessoryBrowser *_accessoryBrowser;
    SFDeviceDiscovery *_sharingDeviceBrowser;
    NSHashTable *_observers;
    NSMutableSet *_mutableDiscoveredSharingDevices;
}

@property(retain, nonatomic) NSMutableSet *mutableDiscoveredSharingDevices; // @synthesize mutableDiscoveredSharingDevices=_mutableDiscoveredSharingDevices;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SFDeviceDiscovery *sharingDeviceBrowser; // @synthesize sharingDeviceBrowser=_sharingDeviceBrowser;
@property(retain, nonatomic) HMAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property(nonatomic) BOOL isBrowsing; // @synthesize isBrowsing=_isBrowsing;
// - (void).cxx_destruct;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)removeBrowsingObserver:(id)arg1;
- (void)addBrowsingObserver:(id)arg1;
- (void)stopSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
@property(readonly, nonatomic) NSArray *discoveredSharingDevices;
@property(readonly, nonatomic) NSArray *discoveredHMAccessories;
- (id)init;

@end

