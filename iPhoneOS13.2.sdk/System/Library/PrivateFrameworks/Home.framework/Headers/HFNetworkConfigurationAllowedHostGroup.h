//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface HFNetworkConfigurationAllowedHostGroup : NSObject
{
    NSString *_name;
    NSUInteger _purpose;
    NSMutableSet *_mutableAddresses;
    NSMutableSet *_mutableAllowedHosts;
}

+ (id)groupsForNetworkConfigurationProfiles:(id)arg1;
@property(copy, nonatomic) NSMutableSet *mutableAllowedHosts; // @synthesize mutableAllowedHosts=_mutableAllowedHosts;
@property(copy, nonatomic) NSMutableSet *mutableAddresses; // @synthesize mutableAddresses=_mutableAddresses;
@property(nonatomic) NSUInteger purpose; // @synthesize purpose=_purpose;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)addAllowedHost:(id)arg1;
@property(readonly, copy, nonatomic) NSString *purposeLocalizedDescription;
@property(readonly, copy, nonatomic) NSSet *allowedHosts;
@property(readonly, copy, nonatomic) NSSet *addresses;
- (id)initWithName:(id)arg1;

@end

