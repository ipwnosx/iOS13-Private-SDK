//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXOwnedDataPromise.h>


@class MIStoreMetadata, NSString;

@interface IXPlaceholder : IXOwnedDataPromise <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)_placeholderForBundle:(id)arg1 client:(NSUInteger)arg2 withParent:(id)arg3 installType:(NSUInteger)arg4 metadata:(id)arg5 error:(id )arg6;
+ (id)placeholderForInstallable:(id)arg1 client:(NSUInteger)arg2 installType:(NSUInteger)arg3 metadata:(id)arg4 error:(id )arg5;
+ (id)_infoPlistLocalizationDictionaryForBundleURL:(id)arg1 error:(id )arg2;
//  (id)_iconDataForBundle:(struct __CFBundle )arg1 error:(id )arg2;
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)arg1 client:(NSUInteger)arg2 installType:(NSUInteger)arg3 error:(id )arg4;
- (id)placeholderAttributesWithError:(id )arg1;
- (BOOL)setPlaceholderAttributes:(id)arg1 error:(id )arg2;
- (BOOL)launchProhibited:(BOOL )arg1 error:(id )arg2;
- (BOOL)setLaunchProhibited:(BOOL)arg1 error:(id )arg2;
- (id)sinfDataWithError:(id )arg1;
- (BOOL)setSinfData:(id)arg1 error:(id )arg2;
- (id)metadataWithError:(id )arg1;
- (BOOL)setMetadata:(id)arg1 error:(id )arg2;
@property(copy, nonatomic) MIStoreMetadata *metadata; // @dynamic metadata;
@property(readonly, nonatomic) NSUInteger installType; // @dynamic installType;
@property(readonly, nonatomic) NSUInteger placeholderType; // @dynamic placeholderType;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy, nonatomic) NSString *bundleName; // @dynamic bundleName;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
- (BOOL)setConfigurationCompleteWithError:(id )arg1;
@property(readonly, nonatomic) BOOL hasPlugInPlaceholderPromises;
- (id)plugInPlaceholderPromisesWithError:(id )arg1;
- (BOOL)setPlugInPlaceholderPromises:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) BOOL hasEntitlementsPromise;
- (id)entitlementsPromiseWithError:(id )arg1;
- (BOOL)setEntitlementsPromise:(id)arg1 error:(id )arg2;
- (id)infoPlistLocalizationsWithError:(id )arg1;
- (BOOL)setInfoPlistLocalizations:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) BOOL hasIconPromise;
- (id)iconPromiseWithError:(id )arg1;
- (BOOL)setIconPromise:(id)arg1 error:(id )arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_doInitWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(NSUInteger)arg3 isPlugin:(BOOL)arg4;
- (id)initPlugInPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 parentPlaceholder:(id)arg3 client:(NSUInteger)arg4;
- (id)initAppPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(NSUInteger)arg3 client:(NSUInteger)arg4;

@end

