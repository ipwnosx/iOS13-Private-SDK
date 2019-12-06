//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString;

@interface IXPlaceholderAttributes : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _launchProhibited;
    BOOL _watchOnlyApp;
    BOOL _runsIndependentlyOfCompanionApp;
    NSString *_bundleVersion;
    NSDictionary *_extensionDictionary;
    NSString *_minimumOSVersion;
    NSDictionary *_requiredDeviceCapabilities;
    NSArray *_sbAppTags;
    NSArray *_lsCounterpartIdentifiers;
    NSString *_sbIconMasqueradeIdentifier;
    NSString *_companionBundleIdentifierForWatchApp;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL runsIndependentlyOfCompanionApp; // @synthesize runsIndependentlyOfCompanionApp=_runsIndependentlyOfCompanionApp;
@property(nonatomic) BOOL watchOnlyApp; // @synthesize watchOnlyApp=_watchOnlyApp;
@property(copy, nonatomic) NSString *companionBundleIdentifierForWatchApp; // @synthesize companionBundleIdentifierForWatchApp=_companionBundleIdentifierForWatchApp;
@property(copy, nonatomic) NSString *sbIconMasqueradeIdentifier; // @synthesize sbIconMasqueradeIdentifier=_sbIconMasqueradeIdentifier;
@property(copy, nonatomic) NSArray *lsCounterpartIdentifiers; // @synthesize lsCounterpartIdentifiers=_lsCounterpartIdentifiers;
@property(copy, nonatomic) NSArray *sbAppTags; // @synthesize sbAppTags=_sbAppTags;
@property(copy, nonatomic) NSDictionary *requiredDeviceCapabilities; // @synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities;
@property(copy, nonatomic) NSString *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(copy, nonatomic) NSDictionary *extensionDictionary; // @synthesize extensionDictionary=_extensionDictionary;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(nonatomic) BOOL launchProhibited; // @synthesize launchProhibited=_launchProhibited;
// - (void).cxx_destruct;
- (id)description;
- (id)infoPlistContent;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)arg1;
- (id)initWithInfoPlistDictionary:(id)arg1;
//  (id)initWithInfoPlistFromBundle:(struct __CFBundle )arg1 error:(id )arg2;
- (id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id )arg2;
- (id)_plistKeys;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

