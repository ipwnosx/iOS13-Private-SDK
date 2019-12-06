//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDHTTPDevice, HMFHTTPClientConnection, HMFTimer, HMFUnfairLock, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface _HMDHTTPServerClientConnection : HMFObject
{
    NSMutableDictionary *_pendingTransactionCompletionHandlers;
    HMFUnfairLock *_lock;
    HMDHTTPDevice *_device;
    HMFHTTPClientConnection *_connection;
    NSOperationQueue *_requestOperationQueue;
    NSMutableArray *_receiveMessageRequests;
    NSOperationQueue *_transactionOperationQueue;
    HMFTimer *_lostConnectionTimer;
}

+ (id)shortDescription;
@property(readonly, nonatomic) HMFTimer *lostConnectionTimer; // @synthesize lostConnectionTimer=_lostConnectionTimer;
@property(readonly, nonatomic) NSOperationQueue *transactionOperationQueue; // @synthesize transactionOperationQueue=_transactionOperationQueue;
@property(readonly, nonatomic) NSMutableArray *receiveMessageRequests; // @synthesize receiveMessageRequests=_receiveMessageRequests;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(retain, nonatomic) HMFHTTPClientConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) HMDHTTPDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (void)_reallySendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dequeueRequest;
- (void)queueRequest:(id)arg1;
- (CDUnknownBlockType)removeCompletionHandlerForTransactionIdentifier:(id)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 forTransactionIdentifier:(id)arg2;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (void)invalidate;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

