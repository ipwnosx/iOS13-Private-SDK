//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    long long _scopeIndex;
    NSString *_scopeIdentifier;
    NSString *_identifier;
}

+ (id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2 defaultScopeIdentifier:(id)arg3;
+ (id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2;
+ (id)descriptionWithScopeIdentifier:(id)arg1 identifier:(id)arg2;
+ (id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)arg1;
+ (id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)arg1;
+ (id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)arg1;
+ (id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)arg1;
+ (id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)arg1;
+ (id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
// - (void).cxx_destruct;
- (id)safeFilename;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)redactedDescription;
- (id)description;
- (id)descriptionWithNoScopeIndex;
- (id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 scopeIndex:(long long)arg3;
- (id)initInMainScopeWithIdentifier:(id)arg1;
- (id)initRelativeToScopedIdentifier:(id)arg1 identifier:(id)arg2;
- (id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2;
@property(nonatomic) long long scopeIndex;
- (BOOL)isInMainScope;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)cplSpecialHash;
- (BOOL)cplSpecialIsEqual:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

@end

