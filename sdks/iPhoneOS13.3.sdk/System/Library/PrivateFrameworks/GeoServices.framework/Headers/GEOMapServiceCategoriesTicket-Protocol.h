//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapServiceCancellableTicket-Protocol.h>
#import <GeoServices/GEOMapServiceThrottlableTicket-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, NSDictionary;

@protocol GEOMapServiceCategoriesTicket <GEOMapServiceCancellableTicket, GEOMapServiceThrottlableTicket>
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end
