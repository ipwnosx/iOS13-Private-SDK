//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKIdentityServiceFetchPrivateKeysTaskResultObject : CATTaskResultObject
{
    NSDictionary *_identityPrivateKeySetsByKeyPairMarkers;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *identityPrivateKeySetsByKeyPairMarkers; // @synthesize identityPrivateKeySetsByKeyPairMarkers=_identityPrivateKeySetsByKeyPairMarkers;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

