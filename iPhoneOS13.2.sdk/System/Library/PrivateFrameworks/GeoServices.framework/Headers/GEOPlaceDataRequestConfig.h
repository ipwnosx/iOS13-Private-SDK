//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig
{
    double _timeout;
    NSUInteger _urlType;
    NSNumber *_requestPriority;
    NSUInteger _multipathServiceType;
}

// - (void).cxx_destruct;
- (NSUInteger)multipathServiceType;
- (double)timeout;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
// - (CDStruct_d1a7ebee)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)serviceTypeNumber;
- (NSUInteger)urlType;
- (id)additionalHTTPHeaders;
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;

@end

