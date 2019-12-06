//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject
{
    BOOL _isDelayed;
    NSDate *_delayedStartDate;
    NSUInteger _delayPeriod;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger delayPeriod; // @synthesize delayPeriod=_delayPeriod;
@property(retain, nonatomic) NSDate *delayedStartDate; // @synthesize delayedStartDate=_delayedStartDate;
@property(nonatomic) BOOL isDelayed; // @synthesize isDelayed=_isDelayed;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)delayUnit;
- (id)description;
- (id)delayEndDate;
- (void)dealloc;
- (id)initWithDelay:(id)arg1;

@end

