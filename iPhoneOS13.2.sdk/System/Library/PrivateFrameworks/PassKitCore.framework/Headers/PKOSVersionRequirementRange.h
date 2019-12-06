//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying>
{
    PKOSVersionRequirement *_minimum;
    PKOSVersionRequirement *_maximum;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) PKOSVersionRequirement *maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) PKOSVersionRequirement *minimum; // @synthesize minimum=_minimum;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2;
- (id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

