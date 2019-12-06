//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TRTransferServerDelegate-Protocol.h>

@class NSData, NSMutableArray, NSMutableDictionary, TRTransferServer;
@protocol OS_dispatch_semaphore, TRDeviceSetupServerDelegate;

@interface TRDeviceSetupServer : NSObject <TRTransferServerDelegate>
{
    TRTransferServer *_transferServer;
    NSData *_dataToSend;
    NSObject<OS_dispatch_semaphore> *_dataToSendSemaphore;
    BOOL _cancelledSetupInProgress;
    int _notifyToken;
    BOOL _notifyTokenIsValid;
    BOOL _setupInProgress;
    BOOL _started;
    id <TRDeviceSetupServerDelegate> _delegate;
    NSMutableArray *_accountsToAuthenticate;
    NSMutableDictionary *_cachedAuthInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *cachedAuthInfo; // @synthesize cachedAuthInfo=_cachedAuthInfo;
@property(retain, nonatomic) NSMutableArray *accountsToAuthenticate; // @synthesize accountsToAuthenticate=_accountsToAuthenticate;
@property(nonatomic) __weak id <TRDeviceSetupServerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_sendAction:(id)arg1 sendDataHandler:(CDUnknownBlockType)arg2 shouldSendNilOnFailure:(BOOL)arg3 error:(id )arg4;
- (void)_finishSetupWithError:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_finishWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_setUpWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_requestGeneralSetupWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_authenticateWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_authenticateAccount:(NSUInteger)arg1 withAuthInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestAuthenticationFromPeripheralForAccount:(NSUInteger)arg1 lastAttemptAction:(id)arg2 lastAttemptError:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)_requestAuthenticationForAccount:(NSUInteger)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_requestAuthenticationForNextAccountWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_connectWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelTransferConnection;
- (void)stop;
- (void)start;
- (void)cancelActiveSetup;
- (void)server:(id)arg1 didFailToReceiveData:(id)arg2;
- (void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)serverWillReceiveData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

