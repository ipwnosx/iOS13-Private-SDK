//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamBulkSendSession-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDDataStreamBulkSendProtocol, NSError, NSMutableArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HMDDataStreamBulkSendSession : NSObject <HMFLogging, HMDDataStreamBulkSendSession>
{
    BOOL _isClosed;
    BOOL _hasReceivedEof;
    HMDDataStreamBulkSendProtocol *_bulkSendProtocol;
    NSNumber *_sessionIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _activeReadHandler;
    NSMutableArray *_pendingReads;
    NSError *_receivedFailure;
    NSString *_logIdentifier;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(retain, nonatomic) NSError *receivedFailure; // @synthesize receivedFailure=_receivedFailure;
@property(retain, nonatomic) NSMutableArray *pendingReads; // @synthesize pendingReads=_pendingReads;
@property(copy, nonatomic) id /* CDUnknownBlockType */ activeReadHandler; // @synthesize activeReadHandler=_activeReadHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSNumber *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) __weak HMDDataStreamBulkSendProtocol *bulkSendProtocol; // @synthesize bulkSendProtocol=_bulkSendProtocol;
// - (void).cxx_destruct;
- (void)_pumpReadDataIfPossible;
- (void)_closeSession;
- (void)asyncHandleRemoteCloseWithError:(id)arg1;
- (void)asyncHandleIncomingPackets:(id)arg1 isEof:(BOOL)arg2;
- (void)read:(CDUnknownBlockType)arg1;
- (void)cancelWithReason:(unsigned short)arg1;
@property(readonly) BOOL hasMoreData;
- (void)dealloc;
- (id)initWithProtocol:(id)arg1 sessionIdentifier:(id)arg2 queue:(id)arg3 logIdentifier:(id)arg4;

@end

