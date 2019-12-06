//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCProfile : NSObject
{
    int _trustQueueTrustLevel;
    BOOL _trustQueueTrustHasBeenEvaluated;
    NSObject<OS_dispatch_queue> *_trustEvaluationQueue;
    NSString *_signerQueueSignerSummary;
    NSArray *_signerQueueSignerCertificates;
    NSObject<OS_dispatch_queue> *_signerEvaluationQueue;
    BOOL _encrypted;
    BOOL _isLocked;
    BOOL _needsReboot;
    BOOL _isStub;
    BOOL _mustInstallNonInteractively;
    NSString *_profileDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    long long _version;
    NSDate *_installDate;
    NSDate *_expiryDate;
    NSUInteger _targetDeviceType;
    NSString *_removalPasscode;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSDate *_removalDate;
    NSDictionary *_installOptions;
    NSString *_localizedConsentText;
}

+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id )arg3;
+ (id)profileWithData:(id)arg1 outError:(id )arg2;
+ (id)stringForDeviceType:(NSUInteger)arg1;
+ (id)newProfileSignatureVersion;
+ (id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id )arg2;
// + (id)signerSummaryOfCertificate:(struct __SecCertificate )arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(BOOL )arg3 outIsAllowedToWriteDefaults:(BOOL )arg4 outIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(BOOL )arg5;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(BOOL )arg3 outIsAllowedToWriteDefaults:(BOOL )arg4;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToWriteDefaults:(BOOL )arg3;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2;
// + (int)evaluateTrust:(struct __SecTrust )arg1;
+ (BOOL)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 errorString:(id)arg6 outError:(id )arg7;
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id )arg6;
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id )arg8;
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id )arg7;
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(long long)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(long long)arg7 invalidDataErrorString:(id)arg8 outError:(id )arg9;
+ (id)profileWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 fileName:(id)arg4 allowEmptyPayload:(BOOL)arg5 outError:(id )arg6;
+ (id)profileDictionaryFromProfileData:(id)arg1 outSignerCerts:(id )arg2 outError:(id )arg3;
+ (id)profileWithData:(id)arg1 options:(id)arg2 fileName:(id)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id )arg5;
+ (id)missingFieldErrorWithField:(id)arg1;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)_malformedProfileError;
+ (id)profileWithData:(id)arg1 options:(id)arg2 outError:(id )arg3;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id )arg4;
@property(readonly, nonatomic) NSString *localizedConsentText; // @synthesize localizedConsentText=_localizedConsentText;
@property(nonatomic) BOOL mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;
@property(retain, nonatomic) NSDictionary *installOptions; // @synthesize installOptions=_installOptions;
@property(readonly, nonatomic) NSDate *removalDate; // @synthesize removalDate=_removalDate;
@property(readonly, retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(readonly, retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly, nonatomic) BOOL isStub; // @synthesize isStub=_isStub;
@property(readonly, nonatomic) BOOL needsReboot; // @synthesize needsReboot=_needsReboot;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_isLocked;
@property(readonly, nonatomic) NSUInteger targetDeviceType; // @synthesize targetDeviceType=_targetDeviceType;
@property(retain, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isManagedByMDM;
- (void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2;
@property(readonly, nonatomic) BOOL shouldHaveFullSSLTrust;
- (id)appAccessibilityParameters;
- (id)restrictionsWithHeuristicsAppliedOutError:(id )arg1;
- (BOOL)mayInstallWithOptions:(id)arg1 hasInteractionClient:(BOOL)arg2 outError:(id )arg3;
- (BOOL)isProfileUIInstallationEffectivelyAllowed;
- (BOOL)doesSigningAllowReplacementWithProfile:(id)arg1 useOriginalCheck:(BOOL)arg2;
- (BOOL)doesSigningAllowReplacementWithProfile:(id)arg1;
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (void)evaluateSignerTrust;
@property(readonly, nonatomic) BOOL isManagedByProfileService;
@property(readonly, retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, retain, nonatomic) NSDate *earliestCertificateExpiryDate;
@property(readonly, retain, nonatomic) NSArray *localizedManagedPayloadSummaryByType;
@property(readonly, retain, nonatomic) NSArray *localizedPayloadSummaryByType;
- (id)description;
@property(readonly, retain, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) BOOL isInstalledForUser;
@property(readonly, nonatomic) BOOL isInstalledForSystem;
@property(readonly, nonatomic) long long installType;
@property(readonly, nonatomic) BOOL isSigned;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
// - (struct __SecCertificate )copyCertificateWithPersistentID:(id)arg1;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
// - (struct __SecCertificate )copyCertificateFromPayloadWithUUID:(id)arg1;
- (id)payloadWithUUID:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *managedPayloads;
@property(readonly, retain, nonatomic) NSArray *payloads;
- (id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1;
@property(readonly, retain, nonatomic) NSArray *installationWarnings;
@property(retain, nonatomic) NSArray *signerCertificates;
@property(readonly, nonatomic) NSString *signerSummary;
// @property(readonly, nonatomic) struct __SecCertificate signerCertificate;
@property(readonly, nonatomic) int trustLevel;
@property(retain, nonatomic) NSString *removalPasscode; // @synthesize removalPasscode=_removalPasscode;
- (BOOL)isUserEnrollmentProfile;
- (id)signatureVersion;
- (NSUInteger)countOfPayloadsOfClass:(Class)arg1;
- (BOOL)containsOnlyPayloadsOfClasses:(id)arg1;
- (BOOL)containsAnyPayloadOfClasses:(id)arg1;
- (BOOL)containsPayloadOfClass:(Class)arg1;
- (id)stubDictionary;
- (BOOL)writeStubToPath:(id)arg1;
- (BOOL)writeStubToDirectory:(id)arg1;
- (id)malformedProfileErrorWithError:(id)arg1;
- (id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id )arg4;
@property(readonly, retain, nonatomic) NSString *profileDataFileName;
@property(readonly, retain, nonatomic) NSString *profileIDHashFileName;
@property(readonly, retain, nonatomic) NSString *stubFileName;
- (id)payloadsWithClass:(Class)arg1;

@end

