//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDAccountHandle, HMDIDSMessageContext, IDSService, NSMutableArray;

@interface HMDAccountHandleResolveOperation : HMFOperation <HMFLogging, IDSServiceDelegate>
{
    HMDAccountHandle *_handle;
    IDSService *_service;
    HMDIDSMessageContext *_messageContext;
    NSMutableArray *_resolveBlocks;
}

+ (id)logCategory;
+ (double)timeout;
@property(readonly) NSMutableArray *resolveBlocks; // @synthesize resolveBlocks=_resolveBlocks;
@property(retain, nonatomic) HMDIDSMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(readonly) IDSService *service; // @synthesize service=_service;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
// - (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6;
- (void)addResolveBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (id)initWithHandle:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)init;

@end

