//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CPLScopedIdentifier, NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_uploadIdentifier;
    BOOL _shouldNotTrustCloudCache;
    BOOL _shouldFilterDefaultValuesForNewProperties;
    BOOL _isSparseFullChange;
    BOOL _shouldOnlyUploadNewResources;
    BOOL _didCacheRealResourceSizeInStorage;
    NSUInteger _cachedRealResourceSizeInStorage;
    BOOL _inTrash;
    BOOL _inExpunged;
    BOOL _serverRecordIsCorrupted;
    CPLScopedIdentifier *_scopedIdentifier;
    NSDate *_recordModificationDate;
    NSUInteger _changeType;
    NSDate *_dateDeleted;
    CPLScopedIdentifier *_resourceCopyFromScopedIdentifier;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
}

+ (id)newDeleteChangeWithIdentifier:(id)arg1;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(NSUInteger)arg2;
+ (CDUnknownBlockType)copyPropertyBlockForDirection:(NSUInteger)arg1;
+ (CDUnknownBlockType)equalityBlockForDirection:(NSUInteger)arg1;
+ (id)_descriptionForChangeType:(NSUInteger)arg1 isSparseFullChange:(BOOL)arg2 onlyUploadNewResources:(BOOL)arg3;
+ (id)descriptionForChangeType:(NSUInteger)arg1;
+ (long long)maxInlineDataSize;
+ (id)newChangeWithType:(NSUInteger)arg1;
+ (id)newDeleteChangeWithScopedIdentifier:(id)arg1;
+ (id)newChangeWithScopedIdentifier:(id)arg1 changeType:(NSUInteger)arg2;
+ (id)newRecordWithScopedIdentifier:(id)arg1;
+ (id)newRecordInScopeWithIdentifier:(id)arg1;
+ (id)newRecord;
+ (id)descriptionForDirection:(NSUInteger)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(nonatomic) BOOL serverRecordIsCorrupted; // @synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted;
@property(copy, nonatomic) NSData *recordChangeData; // @synthesize recordChangeData=_recordChangeData;
@property(copy, nonatomic) NSString *realIdentifier; // @synthesize realIdentifier=_realIdentifier;
@property(nonatomic) BOOL inExpunged; // @synthesize inExpunged=_inExpunged;
@property(nonatomic) BOOL inTrash; // @synthesize inTrash=_inTrash;
@property(copy, nonatomic) CPLScopedIdentifier *resourceCopyFromScopedIdentifier; // @synthesize resourceCopyFromScopedIdentifier=_resourceCopyFromScopedIdentifier;
@property(copy, nonatomic) NSDate *dateDeleted; // @synthesize dateDeleted=_dateDeleted;
@property(nonatomic) NSUInteger changeType; // @synthesize changeType=_changeType;
@property(copy, nonatomic) NSDate *recordModificationDate; // @synthesize recordModificationDate=_recordModificationDate;
@property(copy, nonatomic) CPLScopedIdentifier *scopedIdentifier; // @synthesize scopedIdentifier=_scopedIdentifier;
// - (void).cxx_destruct;
- (BOOL)isAssetChange;
- (BOOL)isMasterChange;
- (id)copyChangeType:(NSUInteger)arg1;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (void)copyDerivatives:(NSUInteger )arg1 count:(int)arg2 avoidResourceType:(NSUInteger)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;
- (NSUInteger)baseVideoComplemenentResourceType;
- (NSUInteger)baseDerivativeResourceType;
- (id)resourcePerType;
- (BOOL)allResourcesAreAvailable;
- (BOOL)isResourceTypeAGeneratedDerivative:(NSUInteger)arg1;
- (NSUInteger)fullChangeTypeForFullRecord;
- (BOOL)_canLowerQuota;
- (void)_setShouldNotTrustCloudCache:(BOOL)arg1;
- (BOOL)_shouldNotTrustCloudCache;
- (void)_setUploadIdentifier:(id)arg1;
- (id)_uploadIdentifier;
- (NSUInteger)estimatedRecordSize;
- (BOOL)validateChangeWithError:(id )arg1;
- (BOOL)validateFullRecord;
- (id)onlyAddedResources;
- (BOOL)changeIsOnlyAddingResourcesToRecord:(id)arg1 addedResources:(id )arg2;
- (BOOL)allowsToOnlyUploadNewResources;
- (BOOL)shouldOnlyUploadNewResources;
- (void)markToOnlyUploadNewResources;
- (void)markAsSparseFullChange;
- (BOOL)isSparseFullChange;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (BOOL)shouldFilterDefaultValuesForNewProperties;
- (void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg1;
- (BOOL)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (id)resourcesDescription;
- (id)cplFullDescription;
- (long long)dequeueOrder;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (void)clearIdentifiers;
- (id)allRelatedScopedIdentifiers;
- (id)scopedIdentifiersForQuarantine;
- (id)scopedIdentifierForQuarantine;
- (id)proposedLocalScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)secondaryIdentifier;
- (id)relatedScopedIdentifier;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)propertiesForChangeType:(NSUInteger)arg1;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(NSUInteger)arg2;
- (BOOL)resourceChangeWillOnlyChangeDerivatives:(id)arg1;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(NSUInteger)arg2 newRecord:(id )arg3;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(NSUInteger)arg2 newRecord:(id )arg3 updatedProperties:(id )arg4;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(NSUInteger)arg2 newRecord:(id )arg3 changeType:(NSUInteger)arg4 updatedProperties:(id )arg5;
- (BOOL)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(NSUInteger)arg3 direction:(NSUInteger)arg4 updatedProperty:(id )arg5;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (id)propertiesDescription;
- (NSUInteger)originalResourceSize;
- (NSUInteger)realResourceSize;
- (NSUInteger)effectiveResourceSizeToUploadUsingStorage:(id)arg1;
- (NSUInteger)totalResourceSize;
- (id)resourceForType:(NSUInteger)arg1;
- (void)setResources:(id)arg1;
- (id)resources;
- (BOOL)supportsDirectDeletion;
- (BOOL)supportsDeletion;
- (BOOL)supportsResourceType:(NSUInteger)arg1;
- (BOOL)supportsResources;
- (BOOL)isDelete;
- (BOOL)isFullRecord;
- (BOOL)hasChangeType:(NSUInteger)arg1;
- (BOOL)isInScopeWithIdentifier:(id)arg1;
- (id)realScopedIdentifier;
- (void)setScopeIndex:(long long)arg1;
- (id)_unscopedIdentifier;
@property(copy, nonatomic) NSString *identifier;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)proposedCloudScopedIdentifierWithError:(id )arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id )arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id )arg2;
- (id)scopedIdentifiersForMapping;
- (BOOL)validateRecordForTracker:(id)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;

@end

