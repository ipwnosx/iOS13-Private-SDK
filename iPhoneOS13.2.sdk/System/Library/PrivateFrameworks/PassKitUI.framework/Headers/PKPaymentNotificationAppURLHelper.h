//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentNotificationAppURLHelper : NSObject
{
}

+ (id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 serviceIdentifier:(id)arg3 appLaunchToken:(id)arg4 usingDeviceAccountNumber:(BOOL)arg5;
+ (BOOL)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1;
+ (id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;

@end

