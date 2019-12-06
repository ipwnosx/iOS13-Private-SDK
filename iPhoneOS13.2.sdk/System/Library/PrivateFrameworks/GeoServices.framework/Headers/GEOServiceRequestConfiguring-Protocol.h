//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOMapServiceTraits, NSArray, NSDictionary, NSNumber, NSString, PBRequest;

@protocol GEOServiceRequestConfiguring <NSObject>
- (unsigned char)requestCounterInfoTypeForRequest:(PBRequest *)arg1;
- (NSNumber *)serviceTypeNumber;
- (NSString *)debugRequestName;
// - (CDStruct_d1a7ebee)dataRequestKindForRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2;
- (NSDictionary *)additionalHTTPHeaders;
- (NSArray *)additionalURLQueryItems;
- (NSUInteger)urlType;

@optional
- (NSUInteger)multipathServiceType;
- (double)timeout;
@end

