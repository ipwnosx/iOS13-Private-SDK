//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSystemServiceServerDelegate-Protocol.h>

@class BSMachPortSendRight, NSString, SBSystemServiceServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBSystemServiceServerAppSwitcherDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 requestAppearanceForHiddenAppWithBundleIdentifier:(NSString *)arg2 assertionPort:(BSMachPortSendRight *)arg3 forClient:(id <FBSServiceFacilityClientHandle>)arg4 withCompletion:(void (^)(BOOL))arg5;
@end

