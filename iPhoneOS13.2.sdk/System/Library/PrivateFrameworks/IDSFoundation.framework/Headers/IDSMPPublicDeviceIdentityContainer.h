//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMPPublicLegacyIdentity, IDSNGMPublicDeviceIdentity, NSNumber;

@interface IDSMPPublicDeviceIdentityContainer : NSObject
{
    IDSMPPublicLegacyIdentity *_legacyPublicIdentity;
    IDSNGMPublicDeviceIdentity *_ngmPublicDeviceIdentity;
    NSNumber *_ngmVersion;
}

+ (id)identityWithDataRepresentation:(id)arg1 error:(id )arg2;
+ (id)identityWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id )arg4;
@property(readonly, nonatomic) NSNumber *ngmVersion; // @synthesize ngmVersion=_ngmVersion;
@property(readonly, nonatomic) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity; // @synthesize ngmPublicDeviceIdentity=_ngmPublicDeviceIdentity;
@property(readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyPublicIdentity; // @synthesize legacyPublicIdentity=_legacyPublicIdentity;
// - (void).cxx_destruct;
- (id)dataRepresentationWithError:(id )arg1;
- (id)_ngmSealMessage:(id)arg1 signedWithFullIdentity:(id)arg2 error:(id )arg3;
- (id)_legacySealMessage:(id)arg1 signedWithFullIdentity:(id)arg2 error:(id )arg3;
- (id)debugDescription;
- (id)description;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 usedIdentityWithIdentifier:(id )arg3 error:(id )arg4;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 usingIdentitiesWithIdentifier:(id)arg3 error:(id )arg4;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3;

@end

