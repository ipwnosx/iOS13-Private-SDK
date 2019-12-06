//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATHTTPMessageParserDelegate-Protocol.h>

@class CATHTTPMessageParser, CATRemoteConnectionSocketOptions, CATSerialOperationQueue, NSArray, NSError, NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;
@protocol CATRemoteConnectionDelegate, OS_dispatch_source;

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate>
{
    CATHTTPMessageParser *mMessageParser;
    long long mState;
    NSMutableArray *mPendingSendContexts;
    NSObject<OS_dispatch_source> *mConnectionTimeoutTimer;
    NSError *mInterruptionError;
    NSMutableData *mReadBuffer;
    NSArray *mTrustedCertificates;
    long long mPeerTrustState;
    CATSerialOperationQueue *mStreamEventQueue;
    BOOL _usesSSL;
    id <CATRemoteConnectionDelegate> _delegate;
    NSString *_name;
    double _connectionTimeoutInterval;
    CATRemoteConnectionSocketOptions *_socketOptions;
    NSArray *_customTrustEvaluationPolicies;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSUInteger _bufferSize;
}

+ (void)createConnectionPairWithConnection:(id )arg1 andConnection:(id )arg2 bufferSize:(NSUInteger)arg3;
+ (void)createConnectionPairWithConnection:(id )arg1 andConnection:(id )arg2;
@property(nonatomic) NSUInteger bufferSize; // @synthesize bufferSize=_bufferSize;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(copy, nonatomic) NSArray *customTrustEvaluationPolicies; // @synthesize customTrustEvaluationPolicies=_customTrustEvaluationPolicies;
@property(copy, nonatomic) CATRemoteConnectionSocketOptions *socketOptions; // @synthesize socketOptions=_socketOptions;
@property(nonatomic) double connectionTimeoutInterval; // @synthesize connectionTimeoutInterval=_connectionTimeoutInterval;
@property(nonatomic) BOOL usesSSL; // @synthesize usesSSL=_usesSSL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <CATRemoteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (void)messageParser:(id)arg1 didParseRequestWithURL:(id)arg2;
- (void)messageParser:(id)arg1 didParseResponseData:(id)arg2 moreComing:(BOOL)arg3;
- (void)messageParser:(id)arg1 didParseRequestData:(id)arg2;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidClose;
- (void)delegateDidOpen;
- (void)delegateDidReceiveStreamData:(id)arg1 moreComing:(BOOL)arg2;
- (void)delegateDidFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidSendDataWithStream:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidWriteDataFromStream:(id)arg1 totalBytesWritten:(NSUInteger)arg2 totalBytesExpectedToWrite:(NSUInteger)arg3 userInfo:(id)arg4;
- (void)delegateDidWriteDataForContextIfNeeded:(id)arg1;
- (void)delegateDidReceiveDataRequestWithURL:(id)arg1;
- (void)delegateDidReceiveData:(id)arg1;
- (void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidSendData:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidSecure;
- (void)delegateWillSecure;
- (void)connectionDidInterruptWithError:(id)arg1;
- (void)connectionDidReceiveData;
- (void)sendDidFail:(id)arg1 withError:(id)arg2;
- (void)sendDidSucceed:(id)arg1;
- (BOOL)trySendingDataWithContext:(id)arg1 error:(id )arg2;
- (void)enqueueSendContext:(id)arg1;
- (void)connectionShouldSendData;
- (void)connectionTimedOut;
- (void)configureStreamSocketOptions;
- (void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(BOOL)arg1;
//  (int)applyCustomEvaluationPoliciesToTrust:(struct __SecTrust )arg1;
- (void)tryEvaluatingPeerTrustWithStream:(id)arg1;
//  (BOOL)secureUsingIdentity:(struct __SecIdentity )arg1 trustedCertificates:(id)arg2 isServer:(BOOL)arg3;
- (void)unscheduleStreams;
- (void)scheduleStreams;
- (void)close;
- (void)open;
//  (void)secureUsingServerIdentity:(struct __SecIdentity )arg1 trustedCertificates:(id)arg2;
//  (void)secureUsingClientIdentity:(struct __SecIdentity )arg1 trustedCertificates:(id)arg2;
- (void)sendDataWithStream:(id)arg1 length:(NSUInteger)arg2 userInfo:(id)arg3;
- (void)sendData:(id)arg1 userInfo:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 bufferSize:(NSUInteger)arg3;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithNetService:(id)arg1;
// property(readonly, nonatomic) struct __SecTrust peerTrust;

@end

