//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CPLResourceIdentity, CPLScopedIdentifier, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying>
{
    NSUInteger _backgroundDownloadTaskIdentifier;
    BOOL _canGenerateDerivative;
    CPLResourceIdentity *_identity;
    CPLScopedIdentifier *_itemScopedIdentifier;
    NSUInteger _resourceType;
    NSUInteger _sourceResourceType;
}

+ (NSUInteger)countOfResourceTypes;
+ (void)enumerateResourceTypesWithBlock:(CDUnknownBlockType)arg1;
+ (BOOL)resourceTypeSupportsResourceExpunge:(NSUInteger)arg1;
+ (BOOL)resourceTypeTrackedForUpload:(NSUInteger)arg1;
+ (BOOL)cplShouldGenerateDerivatives;
+ (float)derivativeGenerationThreshold;
+ (NSUInteger)maxPixelSizeForResourceType:(NSUInteger)arg1;
+ (BOOL)hasPriorityBoostForResourceType:(NSUInteger)arg1;
+ (BOOL)shouldIgnoreResourceTypeOnUpload:(NSUInteger)arg1;
+ (id)shortDescriptionForResourceType:(NSUInteger)arg1;
+ (id)descriptionForResourceType:(NSUInteger)arg1;
+ (NSUInteger)resourceTypeFromShortDecription:(id)arg1;
+ (id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id )arg2;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(nonatomic) BOOL canGenerateDerivative; // @synthesize canGenerateDerivative=_canGenerateDerivative;
@property(nonatomic) NSUInteger sourceResourceType; // @synthesize sourceResourceType=_sourceResourceType;
@property(nonatomic) NSUInteger resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) CPLScopedIdentifier *itemScopedIdentifier; // @synthesize itemScopedIdentifier=_itemScopedIdentifier;
@property(retain, nonatomic) CPLResourceIdentity *identity; // @synthesize identity=_identity;
// - (void).cxx_destruct;
- (void)_setBackgroundDownloadTaskIdentifier:(NSUInteger)arg1;
- (NSUInteger)_backgroundDownloadTaskIdentifier;
- (NSUInteger)estimatedResourceSize;
- (BOOL)isTrackedForUpload;
- (id)bestFileNameForResource;
- (id)redactedDescription;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *itemIdentifier;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(NSUInteger)arg3;
- (id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(NSUInteger)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;

@end

