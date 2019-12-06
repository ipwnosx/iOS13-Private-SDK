//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, HMDNetworkRouterFirewallRuleCloudNetworkDeclarations, HMDNetworkRouterFirewallRuleConfiguration, HMFVersion, NSCountedSet, NSDictionary, NSSet, NSString;
@protocol HMDNetworkRouterFirewallRuleManager;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator <NSObject>
@property(readonly, nonatomic) __weak id <HMDNetworkRouterFirewallRuleManager> firewallRuleManager;
- (HMDNetworkRouterFirewallRuleConfiguration *)ruleConfigurationForAccessory:(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)arg1 declarations:(HMDNetworkRouterFirewallRuleCloudNetworkDeclarations *)arg2;
- (BOOL)removeOverridesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 error:(id )arg3;
- (BOOL)removeAllOverridesWithError:(id )arg1;
- (BOOL)addOverrides:(NSDictionary *)arg1 replace:(BOOL)arg2 error:(id )arg3;
- (BOOL)removeAllLocalRulesWithError:(id )arg1;
- (NSString *)dumpLocalRulesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 firmwareVersion:(HMFVersion *)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 error:(id )arg6;
- (void)dumpCloudRecordsForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 rawOutput:(BOOL)arg3 listOnly:(BOOL)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (NSSet *)fetchRulesForAccessories:(NSSet *)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(BOOL)arg3 error:(id )arg4;
- (void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(BOOL)arg2 forceChangeNotifications:(BOOL)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
- (void)removeInterestedAccessories:(NSCountedSet *)arg1;
- (void)addInterestedAccessories:(NSCountedSet *)arg1;
- (void)shutdownWithCompletion:(void (^)(NSError *))arg1;
- (void)startupWithCompletion:(void (^)(NSError *))arg1;
@end

