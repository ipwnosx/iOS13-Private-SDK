//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, NSSet, NSString, TUHandle;

@protocol TUCallFilterControllerActions 
- (_Bool)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3;
- (_Bool)willRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (NSDictionary *)policyForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (_Bool)shouldRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (_Bool)containsRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2;
@end
