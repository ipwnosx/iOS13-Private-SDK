//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNetworkSession-Protocol.h>

@class NSArray, NSDate, NSMutableArray;

@interface FCNetworkSession : NSObject <FCNetworkSession>
{
    NSMutableArray *_eventGroups;
    BOOL _wifiReachable;
    long long _cellularRadioAccessTechnology;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *eventGroups; // @synthesize eventGroups=_eventGroups;
@property(nonatomic) long long cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property(nonatomic) BOOL wifiReachable; // @synthesize wifiReachable=_wifiReachable;
// - (void).cxx_destruct;
- (void)addEventGroup:(id)arg1;
- (id)generateSessionJSONDataWithOptions:(NSUInteger)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSUInteger totalFailureCount;
@property(readonly, nonatomic) NSUInteger totalSuccessCount;
- (id)init;

@end

