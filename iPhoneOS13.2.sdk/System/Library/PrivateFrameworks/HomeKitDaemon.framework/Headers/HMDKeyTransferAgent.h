//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHomeManager, HMFMessageDestination, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSString *_progressState;
    NSUInteger _residentProvisioningStatus;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    NSUUID *_uuid;
}

+ (id)logCategory;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSUInteger residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
@property(retain, nonatomic) NSString *progressState; // @synthesize progressState=_progressState;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, copy) HMFMessageDestination *messageDestination;
- (void)resetConfig;
- (void)beginPairingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHomeManager:(id)arg1;

@end

