//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMutableMessage.h>

@class NSString;

@interface HMFMutableMessage (HMDXPCClientConnection)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
- (void)setRequiresMultiUserSetupEntitlement;
- (void)setRequiresCameraClipsEntitlement;
- (void)setRequiresSetupPayloadEntitlement;
@property(nonatomic) BOOL requiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement;
@property(nonatomic) BOOL requiresSPIEntitlement;
- (void)setRequiresSPIEntitlement;
@property(nonatomic, getter=isInternal) BOOL internal;
@property(nonatomic) NSUInteger remoteRestriction;
@property(retain, nonatomic) NSString *remoteSourceID;
@property(nonatomic, getter=isSecureRemote) BOOL secureRemote;
@property(nonatomic, getter=isRemote) BOOL remote;
@end

