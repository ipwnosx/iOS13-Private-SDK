//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEODataSession;

@interface GEOProtobufSession : NSObject
{
    id <GEODataSession> _dataSession;
    _Atomic NSUInteger _lastTaskIdentifier;
}

+ (id)sharedDelegateQueue;
+ (id)sharedProtobufSession;
@property(readonly, nonatomic) id <GEODataSession> dataSession; // @synthesize dataSession=_dataSession;
// - (void).cxx_destruct;
- (id)taskWithRequest:(id)arg1 requestTypeCode:(unsigned int)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)initWithDataSession:(id)arg1;
- (id)init;
// - (id)taskWithRequestKind:(CDStruct_d1a7ebee)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 auditToken:(id)arg6 traits:(id)arg7 delegate:(id)arg8 delegateQueue:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(NSUInteger)arg11 multipathAlternatePort:(NSUInteger)arg12 throttleToken:(id)arg13;

@end

