//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPKeyStore-Protocol.h>
#import <CoreHAP/HMFDumpState-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_activeControllerIdentifier;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (id)systemStore;
@property(retain, nonatomic) NSString *activeControllerIdentifier; // @synthesize activeControllerIdentifier=_activeControllerIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (int)_deleteAllPeripheralIdentifiers;
- (BOOL)deleteAllPeripheralIdentifiers:(id )arg1;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (int)_getPeripheralIdentifier:(id )arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(NSUInteger )arg3 resumeSessionID:(NSUInteger )arg4;
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(NSUInteger )arg2 resumeSessionID:(NSUInteger )arg3 error:(id )arg4;
- (int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1;
- (BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(NSUInteger)arg3 previousVersion:(NSUInteger )arg4 resumeSessionID:(NSUInteger)arg5 error:(id )arg6;
- (int)_savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(NSUInteger)arg3 resumeSessionID:(NSUInteger)arg4;
- (BOOL)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(NSUInteger)arg3 resumeSessionID:(NSUInteger)arg4 error:(id )arg5;
- (int)_removeKeychainItem:(id)arg1 leaveTombstone:(BOOL)arg2;
- (int)_addKeychainItem:(id)arg1 logDuplicateItemError:(BOOL)arg2;
- (id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(BOOL)arg4 error:(int )arg5;
- (void)_updateKeychainItemToInvisible:(id)arg1;
- (id)_auditAccessoryKeys:(id)arg1;
- (id)auditAccessoryKeys:(id)arg1;
- (int)_removeAccessoryKeyForName:(id)arg1;
- (BOOL)removeAllAccessoryKeys:(id )arg1;
- (BOOL)removeAccessoryKeyForName:(id)arg1 error:(id )arg2;
- (BOOL)registerAccessoryWithHomeKit:(id)arg1 error:(id )arg2;
- (int)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2;
- (BOOL)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id )arg3;
- (int)_getPublicKey:(id )arg1 registeredWithHomeKit:(BOOL )arg2 forAccessoryName:(id)arg3;
- (id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(BOOL )arg2 error:(id )arg3;
- (int)_createMetadataSecretKey:(id )arg1;
- (int)_getMetadataSecretKey:(id )arg1;
- (BOOL)getMetadataSecretKey:(id )arg1 error:(id )arg2;
- (int)_removeControllerKeyPairForKeyType:(id)arg1 identifier:(id)arg2 leaveTombstone:(BOOL)arg3;
- (int)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2;
- (BOOL)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2 error:(id )arg3;
- (BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)arg1 error:(id )arg2;
- (BOOL)removeControllerKeyPairWithError:(id )arg1;
- (BOOL)getCurrentiCloudIdentifier:(id )arg1 controllerPairingIdentifier:(id )arg2 error:(id )arg3;
- (int)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2;
- (BOOL)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id )arg3;
@property(readonly, nonatomic) NSString *activeControllerPairingIdentifier;
- (BOOL)updateActiveControllerPairingIdentifier:(id)arg1;
- (int)_getAllAvailableControllerPublicKeys:(id )arg1 secretKeys:(id )arg2 userNames:(id )arg3;
- (BOOL)getAllAvailableControllerPublicKeys:(id )arg1 secretKeys:(id )arg2 userNames:(id )arg3 error:(id )arg4;
- (BOOL)deserializeKeyPair:(id)arg1 publicKey:(id )arg2 secretKey:(id )arg3 error:(id )arg4;
- (int)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 keyType:(id)arg4;
- (BOOL)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 error:(id )arg4;
- (int)_createControllerPublicKey:(id )arg1 secretKey:(id )arg2 keyPair:(id )arg3 username:(id )arg4;
- (BOOL)saveLocalPairingIdentity:(id)arg1 syncable:(BOOL)arg2 error:(id )arg3;
- (id)_getControllerKeychainItemForKeyType:(id)arg1 error:(int )arg2;
- (id)_getControllerKeychainItemError:(int )arg1;
- (int)_getControllerPublicKey:(id )arg1 secretKey:(id )arg2 keyPair:(id )arg3 username:(id )arg4;
- (BOOL)getControllerPublicKey:(id )arg1 secretKey:(id )arg2 keyPair:(id )arg3 username:(id )arg4 allowCreation:(BOOL)arg5 error:(id )arg6;
- (BOOL)getControllerPublicKey:(id )arg1 secretKey:(id )arg2 username:(id )arg3 allowCreation:(BOOL)arg4 error:(id )arg5;
- (id)_getLocalPairingIdentityAllowingCreation:(BOOL)arg1 error:(id )arg2;
- (id)getOrCreateLocalPairingIdentity:(id )arg1;
- (id)getLocalPairingIdentity:(id )arg1;
- (void)ensureControllerKeyExistsForAllViews;
- (id)dumpState;

@end

