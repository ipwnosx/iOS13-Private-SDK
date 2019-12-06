//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICAgeVerifier, ICUserIdentity, NSError, NSURL;

@interface ICAgeVerificationState : NSObject <NSCopying>
{
    long long _status;
    ICUserIdentity *_userIdentity;
    long long _treatment;
    NSURL *_verificationURL;
    NSError *_error;
    ICAgeVerifier *_ageVerifier;
}

+ (id)_stateFromDictionaryRepresentation:(id)arg1 DSID:(id)arg2;
+ (id)cachedStateForDSID:(id)arg1;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2 verificationURL:(id)arg3;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withError:(id)arg2;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1;
@property(readonly, copy, nonatomic) ICAgeVerifier *ageVerifier; // @synthesize ageVerifier=_ageVerifier;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSURL *verificationURL; // @synthesize verificationURL=_verificationURL;
@property(readonly, nonatomic) long long treatment; // @synthesize treatment=_treatment;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
// - (void).cxx_destruct;
- (id)_dictionaryRepresentationWithDSID:(id)arg1;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)saveToUserDefaults;
@property(readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property(readonly, nonatomic, getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
- (id)initWithUserIdentity:(id)arg1 ageVerifier:(id)arg2 treatment:(long long)arg3 verificationURL:(id)arg4;
- (id)_initWithUserIdentity:(id)arg1 status:(long long)arg2 treatment:(long long)arg3 verificationURL:(id)arg4 error:(id)arg5;

@end

