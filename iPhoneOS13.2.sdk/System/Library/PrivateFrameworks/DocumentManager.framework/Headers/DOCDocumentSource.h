//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FPProviderDomain, NSArray, NSString, UIImage;

@interface DOCDocumentSource : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _hasTemplateIcon;
    BOOL _hidden;
    NSString *_displayName;
    NSString *_providerName;
    NSString *_domainName;
    UIImage *_icon;
    NSString *_promptText;
    NSString *_identifier;
    NSArray *_documentTypes;
    FPProviderDomain *_searching_fileProviderDomain;
}

+ (BOOL)supportsSecureCoding;
+ (void)setDefaultSource:(id)arg1 forBundleIdentifier:(id)arg2;
+ (void)defaultSourceForBundleIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)endSearchingSources:(id)arg1;
+ (id)startSearchingSourcesForBundleIdentifier:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
+ (void)setDefaultSourceIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)sourceIdentifierOrderWithDefault:(id)arg1;
+ (id)defaultSourceForBundleIdentifier:(id)arg1 defaultSourceIdentifier:(id)arg2 sources:(id)arg3;
+ (void)defaultSourceForBundleIdentifier:(id)arg1 selectedSourceIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)defaultSourceIdentifierForBundleIdentifier:(id)arg1;
@property FPProviderDomain *searching_fileProviderDomain; // @synthesize searching_fileProviderDomain=_searching_fileProviderDomain;
@property(copy) NSArray *documentTypes; // @synthesize documentTypes=_documentTypes;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *promptText; // @synthesize promptText=_promptText;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property BOOL hasTemplateIcon; // @synthesize hasTemplateIcon=_hasTemplateIcon;
@property(retain) UIImage *icon; // @synthesize icon=_icon;
@property(copy) NSString *domainName; // @synthesize domainName=_domainName;
@property(copy) NSString *providerName; // @synthesize providerName=_providerName;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;
@property(readonly) BOOL isiCloudBased;
@property(readonly) BOOL appearsInMoveUI;
@property(readonly, nonatomic) NSArray *supportedSearchFilters;
@property(readonly) NSUInteger status;
- (BOOL)isValidForConfiguration:(id)arg1;
@property(readonly) BOOL isAvailableSystemWide;
- (BOOL)usesEnumeration;
- (id)sanitizedSource;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

