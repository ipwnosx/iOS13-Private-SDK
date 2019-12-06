//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleIDSSOAuthentication/AIDAServiceContext.h>

@class NSDictionary, UIViewController;
@protocol CDPStateUIProvider;

@interface AIDAMutableServiceContext : AIDAServiceContext
{
}

- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(retain, nonatomic) UIViewController *viewController; // @dynamic viewController;
@property(nonatomic) __weak id <CDPStateUIProvider> cdpUiProvider; // @dynamic cdpUiProvider;
@property(nonatomic) long long operationUIPermissions; // @dynamic operationUIPermissions;
@property(nonatomic) BOOL shouldForceOperation; // @dynamic shouldForceOperation;
@property(copy, nonatomic) NSDictionary *authenticationResults; // @dynamic authenticationResults;

@end

