//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTSourceMapsSupport.h>

@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport
{
    NSDate *_usageDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *usageDate; // @synthesize usageDate=_usageDate;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsageDate:(id)arg1;

@end

