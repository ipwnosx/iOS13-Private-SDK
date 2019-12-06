//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPHTTPClientDebugDelegate-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>

@class HMFNetAddress, NSObject, NSString;
@protocol HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, OS_dispatch_queue;

@interface HAPHTTPClient : HMFObject <HAPHTTPClientDebugDelegate, HMFLogging>
{
//     struct HTTPClientPrivate _httpClient;
    BOOL _invalidated;
    BOOL _invalidateRequested;
    NSString *_dnsName;
    long long _port;
    NSObject<OS_dispatch_queue> *_queue;
    id <HAPHTTPClientDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HAPHTTPClientDebugDelegate> _debugDelegate;
    NSObject<OS_dispatch_queue> *_debugDelegateQueue;
}

+ (id)logCategory;
@property(nonatomic) BOOL invalidateRequested; // @synthesize invalidateRequested=_invalidateRequested;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *debugDelegateQueue; // @synthesize debugDelegateQueue=_debugDelegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *dnsName; // @synthesize dnsName=_dnsName;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (BOOL)_debugDelegateRespondsToSelector:(SEL)arg1;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id )arg2;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id )arg2;
// - (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate )arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(NSUInteger)arg4 timeout:(double)arg5 activity:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(NSUInteger)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(NSUInteger)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(NSUInteger)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char [32])arg1 writeKey:(unsigned char [32])arg2 error:(id )arg3;
- (int)_initializeCoreUtilsHTTPClientWithPort:(long long)arg1 withEventsEnabled:(BOOL)arg2;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) NSString *peerEndpointDescription;
@property(readonly, nonatomic) HMFNetAddress *peerAddress;
- (id)initWithDNSName:(id)arg1 port:(long long)arg2 eventsEnabled:(BOOL)arg3 queue:(id)arg4;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;

@end

