//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCAuxiliaryOptionsProviding-Protocol.h>

@class NCNotificationRequest;
@protocol NCNotificationManagementContentProviderDelegate;

@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding>
{
    NCNotificationRequest *_notificationRequest;
    id <NCNotificationManagementContentProviderDelegate> _managementDelegate;
}

@property(nonatomic) __weak id <NCNotificationManagementContentProviderDelegate> managementDelegate; // @synthesize managementDelegate=_managementDelegate;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
// - (void).cxx_destruct;
- (void)handleManageAction:(id)arg1;
- (void)configureOptionButtons:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2;

@end

