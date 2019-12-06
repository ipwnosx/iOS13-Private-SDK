//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAppleMediaAccessory, HMDDevice, HMDMessageDispatcher, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginMessageSender : HMFObject <HMFLogging>
{
    NSUUID *_target;
    HMDDevice *_device;
    HMDAppleMediaAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDMessageDispatcher *_remoteMessageDispatcher;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSUUID *target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (void)sendRemoteMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)logIdentifier;
- (id)initWithTarget:(id)arg1 accessory:(id)arg2 device:(id)arg3 workQueue:(id)arg4 remoteMessageDispatcher:(id)arg5;

@end

