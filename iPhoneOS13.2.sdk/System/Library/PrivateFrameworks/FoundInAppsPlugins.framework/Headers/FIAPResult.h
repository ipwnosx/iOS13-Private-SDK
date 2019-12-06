//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSError;

@interface FIAPResult : NSObject <NSSecureCoding>
{
    NSArray *_historicalDataRequests;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
+ (id)resultWithHistoricalDataRequests:(id)arg1 error:(id)arg2;
+ (id)success;
+ (id)new;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *historicalDataRequests; // @synthesize historicalDataRequests=_historicalDataRequests;
// - (void).cxx_destruct;
- (BOOL)isEqualToResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithHistoricalDataRequests:(id)arg1 error:(id)arg2;
- (id)init;

@end

