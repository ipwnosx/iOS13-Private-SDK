//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSString (TPSCallWaitingAdditions)
+ (id)tps_stringWithTPSCallWaitingState:(long long)arg1;
+ (id)tps_stringWithTPSEncryptedIdentityType:(long long)arg1;
+ (id)tps_ctStringWithTPSEncryptedIdentityType:(long long)arg1;
+ (id)tps_stringWithCTPhoneBookName:(int)arg1;
+ (id)tps_stringWithTPSCallingLineIdRestrictionState:(long long)arg1;
+ (id)tps_stringWithTPSCallForwardingServiceType:(long long)arg1;
@property(readonly, nonatomic) long long tps_encryptedIdentityType;
@end

