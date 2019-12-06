//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOStateCapturing-Protocol.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSData, NSDictionary, NSString, NSURL;
@protocol GEORequestCounterTicket, OS_xpc_object;

@interface GEODataRequest : NSObject <GEOStateCapturing>
{
    NSURL *_URL;
    NSObject<OS_xpc_object> *_xpcRequest;
    GEOApplicationAuditToken *_auditToken;
    NSDictionary *_additionalHTTPHeaders;
    NSData *_bodyData;
    NSData *_cachedData;
    id <GEORequestCounterTicket> _requestCounterTicket;
    NSString *_backgroundSessionIdentifier;
    GEODataRequestThrottlerToken *_throttleToken;
    double _timeoutInterval;
//     CDStruct_d1a7ebee _kind;
    NSUInteger _multipathServiceType;
    NSUInteger _multipathAlternatePort;
    BOOL _needsProxy;
    BOOL _HTTPShouldHandleCookies;
    NSUInteger _constraints;
    BOOL _allowTLSSessionTicketUse;
    BOOL _allowTFOUse;
    BOOL _HTTPMethod;
}

@property(readonly, nonatomic) NSString *backgroundSessionIdentifier; // @synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier;
@property(readonly, nonatomic) NSUInteger multipathAlternatePort; // @synthesize multipathAlternatePort=_multipathAlternatePort;
@property(readonly, nonatomic) NSUInteger multipathServiceType; // @synthesize multipathServiceType=_multipathServiceType;
@property(readonly, nonatomic) id <GEORequestCounterTicket> requestCounterTicket; // @synthesize requestCounterTicket=_requestCounterTicket;
@property(readonly, nonatomic) BOOL allowTFOUse; // @synthesize allowTFOUse=_allowTFOUse;
@property(readonly, nonatomic) BOOL allowTLSSessionTicketUse; // @synthesize allowTLSSessionTicketUse=_allowTLSSessionTicketUse;
@property(readonly, nonatomic) BOOL HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
// @property(readonly, nonatomic) CDStruct_d1a7ebee kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) BOOL needsProxy; // @synthesize needsProxy=_needsProxy;
@property(readonly, nonatomic) NSDictionary *additionalHTTPHeaders; // @synthesize additionalHTTPHeaders=_additionalHTTPHeaders;
@property(copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) NSUInteger constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) BOOL HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, copy, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcRequest; // @synthesize xpcRequest=_xpcRequest;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken; // @synthesize throttleToken=_throttleToken;
// - (void).cxx_destruct;
- (id)publicLogDescription;
@property(readonly, copy) NSString *description;
// - (id)initWithKind:(CDStruct_d1a7ebee)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(BOOL)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(BOOL)arg10 constraints:(NSUInteger)arg11 allowTLSSessionTicketUse:(BOOL)arg12 allowTFOUse:(BOOL)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(NSUInteger)arg18 multipathAlternatePort:(NSUInteger)arg19 throttleToken:(id)arg20;
// - (id)initWithKind:(CDStruct_d1a7ebee)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(BOOL)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(BOOL)arg10 constraints:(NSUInteger)arg11 allowTLSSessionTicketUse:(BOOL)arg12 allowTFOUse:(BOOL)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(NSUInteger)arg18 multipathAlternatePort:(NSUInteger)arg19 backgroundSessionIdentifier:(id)arg20 throttleToken:(id)arg21;
- (id)init;
// - (id)captureStateWithHints:(struct os_state_hints_s )arg1;
- (id)newURLRequest;
- (id)updatedRequestWithNewProtobufRequest:(id)arg1;
- (id)updatedRequestWithNewBodyData:(id)arg1;
- (id)initForAnalyticsUploadRequest:(id)arg1 toURL:(id)arg2 requiresProxy:(BOOL)arg3 backgroundIdentifier:(id)arg4 compressRequest:(BOOL)arg5 allowCellular:(BOOL)arg6 allowBattery:(BOOL)arg7 timeToLive:(double)arg8 requestCounterTicket:(id)arg9 throttleToken:(id)arg10;
// - (id)initHttpOnlyRequestWithKind:(CDStruct_d1a7ebee)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 allowCellularUse:(BOOL)arg6 compressRequest:(BOOL)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(NSUInteger)arg9 multipathAlternatePort:(NSUInteger)arg10 throttleToken:(id)arg11;
// - (id)initWithKind:(CDStruct_d1a7ebee)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 auditToken:(id)arg6 timeoutInterval:(double)arg7 traits:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(NSUInteger)arg10 multipathAlternatePort:(NSUInteger)arg11 throttleToken:(id)arg12;

@end

