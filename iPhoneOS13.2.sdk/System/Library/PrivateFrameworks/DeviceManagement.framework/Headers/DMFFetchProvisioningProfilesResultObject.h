//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject
{
    NSArray *_profiles;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1;

@end

