//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSXPCConnection (UserNotificationsServer)
- (BOOL)uns_hasEntitlement:(id)arg1 capability:(id)arg2;
- (BOOL)uns_isAllowedToWriteSettings;
- (BOOL)uns_isAllowedToReadSettings;
- (BOOL)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)arg1;
- (id)uns_clientBundleProxy;
@end

