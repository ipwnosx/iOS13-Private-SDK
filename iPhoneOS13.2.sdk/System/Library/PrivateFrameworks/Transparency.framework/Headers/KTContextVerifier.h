//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KTApplicationPublicKeyStore, KTLogClient, NSString, TransparencyManagedDataStore;

@interface KTContextVerifier : NSObject
{
    KTApplicationPublicKeyStore *_applicationKeyStore;
    TransparencyManagedDataStore *_dataStore;
    NSString *_applicationID;
    KTLogClient *_logClient;
}

+ (BOOL)verifyServerLoggableDatas:(id)arg1 againstSyncedLoggableDatas:(id)arg2 error:(id )arg3;
+ (BOOL)verifyReceivedWitnessesForLoggableDatas:(id)arg1 error:(id )arg2;
+ (void)addDeviceIdVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forDeviceId:(id)arg3;
+ (void)addClientDataVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forClientData:(id)arg3;
@property(retain) KTLogClient *logClient; // @synthesize logClient=_logClient;
@property(retain) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) KTApplicationPublicKeyStore *applicationKeyStore; // @synthesize applicationKeyStore=_applicationKeyStore;
// - (void).cxx_destruct;
- (BOOL)verifyInclusionProof:(id)arg1 mapLeaf:(id )arg2 error:(id )arg3;
- (BOOL)verifyResponseAccountId:(id)arg1 requestAccountId:(id)arg2 error:(id )arg3;
- (BOOL)verifyUriWitness:(id)arg1 uri:(id)arg2 error:(id )arg3;
- (BOOL)verifyDeviceWitnesses:(id)arg1 requestDevices:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id )arg5;
- (BOOL)verifyDeviceWitness:(id)arg1 deviceId:(id)arg2 uriVRFOutput:(id)arg3 error:(id )arg4;
- (BOOL)verifyClientDataWitnesses:(id)arg1 clientDatas:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id )arg5;
- (BOOL)verifyClientDataWitness:(id)arg1 clientData:(id)arg2 uriVRFOutput:(id)arg3 error:(id )arg4;
- (void)verifyKTSMTsMerged:(id)arg1 queryResponse:(id)arg2 uri:(id)arg3 accountId:(id)arg4;
- (void)verifyKTSMTs:(id)arg1;
- (void)deleteSMT:(id)arg1 error:(id)arg2;
- (void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4;
- (void)reportVerifySMTFailure:(id)arg1 error:(id)arg2;
- (BOOL)verifySMTs:(id)arg1 request:(id)arg2 error:(id )arg3;
- (id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 applicationID:(id)arg3;

@end

