//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TRAccountManager : NSObject
{
}

+ (id)associatedAccountServicesForIDMSAccount:(id)arg1;
+ (id)_idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3;
+ (id)_idmsAccountForGameCenterService;
+ (id)_idmsAccountForITunesService;
+ (id)_idmsAccountForICloudService;
+ (id)_primaryGameCenterAccount;
+ (id)_primaryITunesAccount;
+ (id)_primaryICloudAccount;
+ (id)idmsAccountForAccountService:(NSUInteger)arg1;

@end

