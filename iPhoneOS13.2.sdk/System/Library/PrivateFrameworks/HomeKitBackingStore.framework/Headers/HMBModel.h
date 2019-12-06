//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBModelProperties-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBModelContainer, HMFVersion, NSMutableDictionary, NSSet, NSString, NSUUID;

@interface HMBModel : HMFObject <HMFLogging, HMBModelProperties>
{
    NSMutableDictionary *_hmbReserved;
    NSUUID *_hmbModelID;
    NSUUID *_hmbParentModelID;
    NSString *_hmbType;
    HMFVersion *_hmbDataVersion;
    NSUInteger _hmbRecordRow;
    NSSet *_hmbUnavailableProperties;
    NSSet *_hmbReadOnlyProperties;
    HMBModelContainer *_hmbModelContainer;
}

+ (id)shortDescription;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)logCategory;
+ (id)hmbExternalProperties;
+ (id)formattedStringForValue:(id)arg1;
+ (BOOL)propertyDiffersFrom:(id)arg1 to:(id)arg2;
+ (Class)hmbGenericRepresentation;
+ (id)hmbReadOnlyBefore;
+ (id)hmbExternalRecordType;
+ (id)hmbSchemaHashRoot;
+ (id)hmbQueries;
+ (id)hmbPropertyNames;
+ (id)hmbProperties;
+ (id)properties;
+ (void)setHmbShouldLogPrivateInformation:(BOOL)arg1;
+ (BOOL)hmbShouldLogPrivateInformation;
+ (id)sort:(id)arg1;
@property(nonatomic) __weak HMBModelContainer *hmbModelContainer; // @synthesize hmbModelContainer=_hmbModelContainer;
@property(retain, nonatomic) NSSet *hmbReadOnlyProperties; // @synthesize hmbReadOnlyProperties=_hmbReadOnlyProperties;
@property(retain, nonatomic) NSSet *hmbUnavailableProperties; // @synthesize hmbUnavailableProperties=_hmbUnavailableProperties;
@property(nonatomic) NSUInteger hmbRecordRow; // @synthesize hmbRecordRow=_hmbRecordRow;
@property(retain, nonatomic) HMFVersion *hmbDataVersion; // @synthesize hmbDataVersion=_hmbDataVersion;
@property(retain, nonatomic) NSString *hmbType; // @synthesize hmbType=_hmbType;
@property(retain, nonatomic) NSUUID *hmbParentModelID; // @synthesize hmbParentModelID=_hmbParentModelID;
@property(retain, nonatomic) NSUUID *hmbModelID; // @synthesize hmbModelID=_hmbModelID;
@property(retain, nonatomic) NSMutableDictionary *hmbReserved; // @synthesize hmbReserved=_hmbReserved;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic) NSString *hmbDescription;
- (void)dumpDebug;
- (void)dumpDebug:(id)arg1;
- (BOOL)hmbPropertyIsExternal:(id)arg1;
@property(nonatomic) BOOL hmbExternallyFetched;
- (id)copy;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)hmbCanonicalTypeInferred;
@property(readonly, nonatomic) NSString *hmbCanonicalType;
@property(readonly, copy) NSString *description;
- (id)hmbPropertyNamed:(id)arg1;
- (id)hmbDefaultValueForPropertyNamed:(id)arg1;
- (id)hmbPropertyNamed:(id)arg1 isSet:(BOOL )arg2;
- (void)hmbUnsetPropertyNamed:(id)arg1;
- (void)hmbSetProperty:(id)arg1 named:(id)arg2;
@property(readonly, nonatomic) BOOL hmbIgnoreModel;
@property(retain, nonatomic) HMFVersion *hmbIgnoredBefore;
- (BOOL)hmbIsDifferentFromModel:(id)arg1 differingFields:(id )arg2;
- (id)hmbMerge:(id)arg1 isFromCloud:(BOOL)arg2;
- (BOOL)hmbValidForStorage:(id)arg1;
- (BOOL)hmbPropertyIsAvailable:(id)arg1;
- (BOOL)hmbPropertyIsReadOnly:(id)arg1;
@property(readonly, nonatomic) BOOL hmbIsModelGenericRepresentation;
@property(readonly, nonatomic) BOOL hmbIsModelReadOnly;
- (BOOL)hmbPropertyWasSet:(id)arg1;
@property(readonly, nonatomic) NSSet *hmbSetProperties;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)prepareForStorageLocation:(NSUInteger)arg1 using:(id)arg2 updatedModelIDs:(id)arg3 error:(id )arg4;
- (id)hmbPrepareForStorageLocation:(NSUInteger)arg1;
- (id)validateType:(id)arg1 path:(id)arg2;
- (BOOL)_validateType:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSSet *hmbDependentUUIDs;
@property(readonly, nonatomic) HMFVersion *hmbContainerDataVersion;
- (void)hmbAssociateWithContainer:(id)arg1;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;
- (id)populateModelWithDictionary:(id)arg1 fromStorageLocation:(NSUInteger)arg2;

@end

