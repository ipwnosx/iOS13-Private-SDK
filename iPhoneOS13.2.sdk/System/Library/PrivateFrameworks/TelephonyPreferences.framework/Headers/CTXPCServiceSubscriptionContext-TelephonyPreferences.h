//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

#import <TelephonyPreferences/TPSTelephonySubscription-Protocol.h>

@class NSString;

@interface CTXPCServiceSubscriptionContext (TelephonyPreferences) <TPSTelephonySubscription>
+ (id)telephonyClient;
@property(readonly, copy, nonatomic) NSString *tps_localizedPhoneNumber;
@property(readonly, copy, nonatomic) NSString *tps_localizedLabel;
@property(readonly, copy, nonatomic) NSString *tps_isoCountryCode;
@end

