//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSInvalidatable-Protocol.h>
#import <BaseBoard/BSSettingDescriptionProvider-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>

@class BSActionListenerToken, BSActionResponse, BSAuditHistory, BSMachPortReceiveRight, BSMachPortTransferableSendRight, BSPortDeathSentinel, BSSettings, BSTimer, NSString;
@protocol OS_dispatch_queue;

@interface BSAction : NSObject <BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDescriptionProviding, BSInvalidatable>
{
    BSSettings *_info;
    BOOL _hasTimeout;
    BOOL _expectsResponse;
    BOOL _originatingAction;
    NSUInteger _timeout;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_hasBeenNeutered;
    BOOL _queue_invalidated;
    id /* CDUnknownBlockType */ _queue_handler;
    BSActionListenerToken *_queue_listenerToken;
    BSTimer *_queue_timer;
    id /* CDUnknownBlockType */ _queue_invalidationHandler;
    BSActionResponse *_queue_response;
    BSAuditHistory *_queue_auditHistory;
    BSMachPortReceiveRight *_queue_receiveRight;
    BSMachPortTransferableSendRight *_queue_sendRight;
    BSPortDeathSentinel *_queue_portDeathSentinel;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=_expectsResponse) BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(readonly, copy, nonatomic) BSSettings *info; // @synthesize info=_info;
- (void)_queue_tryExecuteQueueHandler;
- (id)_queue_encodedSendRight;
- (id)_queue_handlerDescription;
- (void)_queue_setInvalidatedAndNotify:(BOOL)arg1 errorCode:(long long)arg2;
- (void)_queue_callHandlerWithResponse:(id)arg1;
- (void)_queue_addAuditHistoryWithFormat:(id)arg1;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 safely:(BOOL)arg2;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendResponse:(id)arg1;
- (BOOL)canSendResponse;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)_initWithInfo:(id)arg1 invalidated:(BOOL)arg2 expectsResponse:(BOOL)arg3 auditHistory:(id)arg4 xPort:(id)arg5 xEndpoint:(id)arg6 sendRight:(id)arg7;
- (id)init;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

