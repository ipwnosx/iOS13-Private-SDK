//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATTaskOperationNotificationDelegate-Protocol.h>
#import <Catalyst/CATTransportDelegate-Protocol.h>

@class CATOperationQueue, CATStateMachine, CATTransport, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol CATTaskSessionDelegate, OS_dispatch_group;

@interface CATTaskSession : NSObject <CATTransportDelegate, CATTaskOperationNotificationDelegate>
{
    CATStateMachine *mFSM;
    CATTransport *mTransport;
    NSMutableSet *mOperations;
    NSMutableDictionary *mOperationByRemoteUUID;
    NSMutableArray *mEnqueuedMessages;
    CATTaskSession *mStrongSelf;
    NSHashTable *mOrphanedTransports;
    CATOperationQueue *mOrphanedOperationQueue;
    NSDictionary *mPreviousSessionInfo;
    NSMapTable *mRemoteUUIDsByFinishedOperationProgressUpdates;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
    CATOperationQueue *mDelegationQueue;
    NSUUID *_sessionUUID;
    id <CATTaskSessionDelegate> _delegate;
    NSDictionary *_userInfo;
    NSDictionary *_clientUserInfo;
}

@property(copy, nonatomic) NSDictionary *clientUserInfo; // @synthesize clientUserInfo=_clientUserInfo;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <CATTaskSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
// - (void).cxx_destruct;
- (void)delegateDidInvalidate;
- (void)delegateWillInvalidate;
- (void)delegateDidDisconnect;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)delegateDidConnect;
- (void)delegatedidReceiveNotificationWithName:(id)arg1;
- (BOOL)delegateShouldAcceptConnection;
- (void)delegateEnqueueOperation:(id)arg1;
- (id)delegatePrepareOperationWithRequest:(id)arg1 error:(id )arg2;
- (void)processNotificationMessage:(id)arg1;
- (void)processFetchProgressMessage:(id)arg1;
- (void)processCancelMessage:(id)arg1;
- (void)operationDidFinish:(id)arg1 remoteUUID:(id)arg2;
- (void)operationDidIncrementProgress:(id)arg1 remoteUUID:(id)arg2;
- (void)processStartMessage:(id)arg1;
- (void)processTaskMessage:(id)arg1;
- (void)processSessionMessage:(id)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)transportDidInvalidate:(id)arg1;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didSendMessage:(id)arg2;
- (void)delegateDidInvalidateAndFinalize;
- (void)didCompleteSendForMessage:(id)arg1;
- (void)enqueueMessage:(id)arg1;
- (void)sendMessageThroughTransport:(id)arg1;
- (void)sendResumedMessage;
- (void)sendMessage:(id)arg1;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)sessionDidInvalidate;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;
- (void)abandonTransport;
- (void)resumeTransport:(id)arg1;
- (void)discardPreviousSessionInfo;
- (void)restorePreviousSessionInfo;
- (void)savePreviousSessionInfo;
- (id)captureTransport;
- (void)resumeCapturedTransportFromTaskSession:(id)arg1;
- (void)rejectConnection;
- (void)acceptConnection;
- (void)evaluateConnectionWithResumeMessage:(id)arg1;
- (void)clientDidResumeWithMessage:(id)arg1;
- (void)invalidateWithError:(id)arg1;
- (void)invalidate;
- (void)disconnect;
- (void)connectWithTransportFromTaskSession:(id)arg1;
- (void)connectWithTransport:(id)arg1;
- (void)localOperationDidFinish:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

@end

