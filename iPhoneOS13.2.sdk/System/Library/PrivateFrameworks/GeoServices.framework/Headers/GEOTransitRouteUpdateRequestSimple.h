//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEOTransitRouteUpdateRequest;

@interface GEOTransitRouteUpdateRequestSimple : GEOXPCRequest <GEOXPCRequest>
{
    GEOTransitRouteUpdateRequest *_request;
}

+ (Class)replyClass;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) GEOTransitRouteUpdateRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (BOOL)expectsReply;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

