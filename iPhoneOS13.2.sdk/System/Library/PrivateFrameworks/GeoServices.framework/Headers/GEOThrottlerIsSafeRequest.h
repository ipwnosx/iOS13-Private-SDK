//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEODataRequestThrottlerToken;

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest <GEOXPCRequest>
{
    int _requestKindType;
    int _requestKindSubtype;
    BOOL _nextSafeRequestTime;
    BOOL _availableRequestCount;
    BOOL _includeToken;
    GEODataRequestThrottlerToken *_throttlerToken;
}

+ (Class)replyClass;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken; // @synthesize throttlerToken=_throttlerToken;
@property(nonatomic) BOOL includeToken; // @synthesize includeToken=_includeToken;
@property(nonatomic) BOOL availableRequestCount; // @synthesize availableRequestCount=_availableRequestCount;
@property(nonatomic) BOOL nextSafeRequestTime; // @synthesize nextSafeRequestTime=_nextSafeRequestTime;
@property(nonatomic) int requestKindSubtype; // @synthesize requestKindSubtype=_requestKindSubtype;
@property(nonatomic) int requestKindType; // @synthesize requestKindType=_requestKindType;
// - (void).cxx_destruct;
- (BOOL)expectsReply;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

