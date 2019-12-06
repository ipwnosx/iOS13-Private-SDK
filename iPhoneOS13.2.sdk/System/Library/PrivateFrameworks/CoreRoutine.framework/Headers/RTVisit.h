//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, RTLocation;

@interface RTVisit : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_date;
    long long _type;
    RTLocation *_location;
    NSDate *_entry;
    NSDate *_exit;
    double _confidence;
    long long _dataPointCount;
}

+ (BOOL)supportsSecureCoding;
+ (long long)visitIncidentTypeFromString:(id)arg1;
+ (id)stringFromVisitIncidentType:(long long)arg1;
@property(readonly, nonatomic) long long dataPointCount; // @synthesize dataPointCount=_dataPointCount;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) NSDate *exit; // @synthesize exit=_exit;
@property(readonly, copy, nonatomic) NSDate *entry; // @synthesize entry=_entry;
@property(readonly, copy, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVisit:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 dataPointCount:(long long)arg6 confidence:(double)arg7;
- (id)init;

@end

