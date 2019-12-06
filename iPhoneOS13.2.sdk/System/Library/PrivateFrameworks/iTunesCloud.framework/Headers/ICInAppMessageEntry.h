//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICIAMApplicationMessage, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSMutableDictionary *_metadata;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_resourceCache;
    BOOL _shouldDownloadResources;
    ICIAMApplicationMessage *_applicationMessage;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldDownloadResources; // @synthesize shouldDownloadResources=_shouldDownloadResources;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) ICIAMApplicationMessage *applicationMessage; // @synthesize applicationMessage=_applicationMessage;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allCachedResourceLocations;
- (void)clearCachedResources;
- (void)setCacheLocation:(id)arg1 forResourceWithIdentifier:(id)arg2;
- (id)cachedLocationForResourceWithIdentifier:(id)arg1;
- (void)updateMetadataValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *metadata;
- (id)description;
- (id)initWithApplicationMessage:(id)arg1 bundleIdentifier:(id)arg2;

@end

