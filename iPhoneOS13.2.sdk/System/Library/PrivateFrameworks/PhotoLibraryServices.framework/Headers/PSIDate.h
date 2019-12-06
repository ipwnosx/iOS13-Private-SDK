//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSIDate : NSObject
{
    long long _int64Representation;
    long long _int64RepresentationMask;
}

+ (id)distantFuture;
+ (id)distantPast;
@property(readonly) long long int64RepresentationMask; // @synthesize int64RepresentationMask=_int64RepresentationMask;
@property(readonly) long long int64Representation; // @synthesize int64Representation=_int64Representation;
- (id)dateComponents;
- (id)description;
@property(readonly) long long day;
@property(readonly) long long month;
@property(readonly) long long year;
@property(readonly) long long era;
- (id)initWithInt64Representation:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithDateComponents:(id)arg1;
- (id)initWithUniversalDate:(id)arg1 calendar:(id)arg2;

@end

