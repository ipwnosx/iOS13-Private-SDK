//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SFBatteryInfo : NSObject <NSSecureCoding>
{
    double _batteryLevel;
    long long _batteryState;
    long long _batteryType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long batteryType; // @synthesize batteryType=_batteryType;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

