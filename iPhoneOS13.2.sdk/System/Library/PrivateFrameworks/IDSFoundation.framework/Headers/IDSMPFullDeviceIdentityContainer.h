//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSMPFullLegacyIdentity, IDSNGMFullDeviceIdentity, NSData, NSNumber;

@interface IDSMPFullDeviceIdentityContainer : NSObject
{
    IDSMPFullLegacyIdentity *_legacyFullIdentity;
    IDSNGMFullDeviceIdentity *_ngmFullDeviceIdentity;
    NSNumber *_ngmVersion;
    NSData *_cachedLegacySerializedData;
}

+ (id)_identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4 error:(id )arg5;
+ (id)identityWithDataRepresentation:(id)arg1 error:(id )arg2;
+ (id)identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id )arg4;
@property(retain, nonatomic) NSData *cachedLegacySerializedData; // @synthesize cachedLegacySerializedData=_cachedLegacySerializedData;
@property(readonly, nonatomic) NSNumber *ngmVersion; // @synthesize ngmVersion=_ngmVersion;
@property(readonly, nonatomic) IDSNGMFullDeviceIdentity *ngmFullDeviceIdentity; // @synthesize ngmFullDeviceIdentity=_ngmFullDeviceIdentity;
@property(readonly, nonatomic) IDSMPFullLegacyIdentity *legacyFullIdentity; // @synthesize legacyFullIdentity=_legacyFullIdentity;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)_legacyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id )arg3;
- (id)_ngmUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2;
- (id)_ngmSynchronouslyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id )arg3;
- (id)_ngmValidateEncryptingAndSigningIdentity:(id)arg1 forMessage:(id)arg2;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3 error:(id )arg4;
- (id)dataRepresentationWithError:(id )arg1;
- (id)publicIdentityWithError:(id )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFullLegacyIdentity:(id)arg1 ngmFullDeviceidentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4;

@end

