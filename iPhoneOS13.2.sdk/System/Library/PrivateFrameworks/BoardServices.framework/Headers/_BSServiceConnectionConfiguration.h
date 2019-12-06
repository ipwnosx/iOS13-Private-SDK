//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSServiceConnectionConfiguring_DispatchingQueue-Protocol.h>
#import <BoardServices/BSServiceConnectionInternalConfiguring-Protocol.h>

@class BSServiceInterface, BSServiceQuality, NSString;
@protocol BSServiceDispatchingQueue, NSCopying, OS_dispatch_queue, OS_xpc_object;

@interface _BSServiceConnectionConfiguration : NSObject <BSServiceConnectionInternalConfiguring, BSServiceConnectionConfiguring_DispatchingQueue>
{
//    struct os_unfair_lock_s _lock;
    NSObject<OS_xpc_object> *_clientContext;
    id <NSCopying> _userInfo;
    NSString *_name;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _target;
    id /* CDUnknownBlockType */ _activationHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id <BSServiceDispatchingQueue> _targetDispatchingQueue;
    id /* CDUnknownBlockType */ _messageHandler;
    id /* CDUnknownBlockType */ _errorHandler;
}

// - (void).cxx_destruct;
- (void)setErrorHandler:(CDUnknownBlockType)arg1;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setTargetDispatchingQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)setActivationHandler:(CDUnknownBlockType)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterface:(id)arg1;
- (id)interface;
- (void)setServiceQuality:(id)arg1;
- (void)setName:(id)arg1;
//  (id)initWithLock:(struct os_unfair_lock_s )arg1 clientContext:(id)arg2;

@end

