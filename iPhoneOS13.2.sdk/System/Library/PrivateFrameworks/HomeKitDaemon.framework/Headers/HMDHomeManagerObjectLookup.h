//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

#import <HomeKitDaemon/HMDObjectLookupScanProtocol-Protocol.h>

@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol>
{
    HMDHomeManager *_homeManager;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
// - (void).cxx_destruct;
- (void)_scanAccounts;
- (void)_scanCloudZones;
- (void)_scanHomes;
- (void)scanObjects;
- (id)initWithHomeManager:(id)arg1;

@end

