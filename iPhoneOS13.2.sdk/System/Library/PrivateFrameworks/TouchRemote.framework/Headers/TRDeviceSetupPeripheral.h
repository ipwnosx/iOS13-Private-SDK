//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, TRDeviceSetupPeripheralDelegate;

@interface TRDeviceSetupPeripheral : NSObject
{
    BOOL _performingSetup;
    BOOL _preparingForSetup;
    NSObject<OS_dispatch_queue> *_queue;
    id <TRDeviceSetupPeripheralDelegate> _delegate;
    id /* CDUnknownBlockType */ _pendingSendDataHandler;
    NSString *_authenticatediTunesStoreID;
}

@property(copy, nonatomic) NSString *authenticatediTunesStoreID; // @synthesize authenticatediTunesStoreID=_authenticatediTunesStoreID;
@property(copy) id /* CDUnknownBlockType */ pendingSendDataHandler; // @synthesize pendingSendDataHandler=_pendingSendDataHandler;
@property(nonatomic) __weak id <TRDeviceSetupPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_legacyAuthenticateWithUserAgent:(id)arg1 deviceGUID:(id)arg2 accountID:(id)arg3 password:(id)arg4 attemptCount:(NSUInteger)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)_sendAction:(id)arg1 sendDataHandler:(CDUnknownBlockType)arg2 error:(id )arg3;
- (void)_setupDidFailWithError:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelSetupWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_finishSetupWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_setUpWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelAuthenticationWithReceivedAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_startAuthenticationWithReceivedAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_authenticateWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_legacyAuthenticateWithAction:(id)arg1 attemptCount:(NSUInteger)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_didTapWithSendDataHandler:(CDUnknownBlockType)arg1;
- (void)_didReceiveData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_didDisconnect;
- (void)cancelSetupForTimeout;
- (void)cancelSetupForStateChange;
- (void)cancelPreparingForSetup;
- (BOOL)performSetupAndReturnError:(id )arg1;
- (id)init;

@end

