//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SFPowerSourceLEDInfo : NSObject <NSSecureCoding>
{
    int _LEDColor;
    int _LEDState;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int LEDState; // @synthesize LEDState=_LEDState;
@property(nonatomic) int LEDColor; // @synthesize LEDColor=_LEDColor;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

