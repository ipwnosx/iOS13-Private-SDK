//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PPSourceStats : NSObject
{
    long long _minRefCount;
    long long _maxRefCount;
    double _avgRefCount;
    double _medianRefCount;
    NSDate *_earliestDate;
    NSDate *_latestDate;
    long long _uniqueBundleIdCount;
    long long _uniqueDocIdCount;
}

@property(readonly, nonatomic) long long uniqueDocIdCount; // @synthesize uniqueDocIdCount=_uniqueDocIdCount;
@property(readonly, nonatomic) long long uniqueBundleIdCount; // @synthesize uniqueBundleIdCount=_uniqueBundleIdCount;
@property(readonly, nonatomic) NSDate *latestDate; // @synthesize latestDate=_latestDate;
@property(readonly, nonatomic) NSDate *earliestDate; // @synthesize earliestDate=_earliestDate;
@property(readonly, nonatomic) double medianRefCount; // @synthesize medianRefCount=_medianRefCount;
@property(readonly, nonatomic) double avgRefCount; // @synthesize avgRefCount=_avgRefCount;
@property(readonly, nonatomic) long long maxRefCount; // @synthesize maxRefCount=_maxRefCount;
@property(readonly, nonatomic) long long minRefCount; // @synthesize minRefCount=_minRefCount;
// - (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithMinRefCount:(long long)arg1 maxRefCount:(long long)arg2 avgRefCount:(double)arg3 medianRefCount:(double)arg4 earliestDate:(id)arg5 latestDate:(id)arg6 uniqueBundleIdCount:(long long)arg7 uniqueDocIdCount:(long long)arg8;

@end

