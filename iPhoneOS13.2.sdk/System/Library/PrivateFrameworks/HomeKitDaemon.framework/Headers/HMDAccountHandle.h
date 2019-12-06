//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDRemoteAddressable-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKUserIdentityLookupInfo, CNContact, IDSURI, NSString, NSUUID;

@interface HMDAccountHandle : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, NSCopying, NSSecureCoding>
{
    BOOL _local;
    BOOL _locallyTracked;
    NSUUID *_modelIdentifier;
    NSUUID *_modelParentIdentifier;
    NSUUID *_identifier;
    IDSURI *_URI;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)accountHandleForDestination:(id)arg1;
@property(getter=isLocallyTracked) BOOL locallyTracked; // @synthesize locallyTracked=_locallyTracked;
@property(readonly, copy) IDSURI *URI; // @synthesize URI=_URI;
@property(readonly, getter=isLocal) BOOL local; // @synthesize local=_local;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSUUID *modelParentIdentifier; // @synthesize modelParentIdentifier=_modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (id)remoteDestinationString;
- (BOOL)isBackingStorageEqual:(id)arg1;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(NSUInteger)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(NSUInteger)arg1 version:(long long)arg2;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) CKUserIdentityLookupInfo *cloudKitLookupInfo;
@property(readonly, copy) CNContact *contact;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) long long type;
- (id)attributeDescriptions;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *value;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithURI:(id)arg1 local:(BOOL)arg2;
- (id)initWithURI:(id)arg1;
- (id)init;

@end

