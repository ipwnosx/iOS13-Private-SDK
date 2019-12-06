//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPApplicationDelegate.h>

@class NSArray, NSString, TSADocumentRoot;
@protocol TSADownloadDelegate;

__attribute__((visibility("hidden")))
@interface TSABaseApplicationDelegate : TSWPApplicationDelegate
{
    TSADocumentRoot *mDocumentRoot;
    id <TSADownloadDelegate> _downloadDelegate;
}

+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;
@property(retain, nonatomic) id <TSADownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) __weak TSADocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
// - (void).cxx_destruct;
- (void)setAppTextDefaults:(id)arg1 passphraseVerifier:(id)arg2;
- (id)iWorkTextDefaultsPassphraseVerifier;
- (id)appTextDefaults;
- (id)appTextDefaultsKey;
- (void)setIWorkAuthorPrivateID:(id)arg1;
- (id)iWorkAuthorPrivateID;
@property(readonly, nonatomic) NSArray *iWorkAuthorPrivateIDs;
- (void)clearIWorkAuthorPrivateID;
- (BOOL)isValidIWorkAuthorColorIndex:(NSUInteger)arg1;
- (void)setIWorkAuthorColorIndex:(NSUInteger)arg1;
- (NSUInteger)iWorkAuthorColorIndex;
- (id)iWorkAuthorName;
@property(readonly, nonatomic) BOOL hasIWorkAuthorName;
- (BOOL)hasApplicationBadgeCount;
- (void)setApplicationBadgeCount:(NSUInteger)arg1 forCategory:(id)arg2;
- (void)setIWorkAuthorName:(id)arg1;
- (void)setICloudPreferences:(id)arg1 forKvsDocumentKey:(id)arg2;
- (id)iCloudPreferencesForKvsDocumentKey:(id)arg1;
- (id)validICloudPreferencesForPreferences:(id)arg1 invalidKeys:(id )arg2;
- (BOOL)isICloudDocumentPreference:(id)arg1 validForKey:(id)arg2;
- (id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)arg1 isMatchingKey:(BOOL )arg2;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (id)iCloudPreferenceKeys;
- (NSUInteger)collaboratorColorIndexForKvsDocumentKey:(id)arg1;
- (id)collaboratorNameForDocumentInfo:(id)arg1 firstName:(id )arg2 lastName:(id )arg3;
- (void)clearIWorkAuthorColorIndex;
- (void)clearIWorkAuthorName;
- (void)clearICloudDocumentPreferences;
- (id)documentPreferenceKeyPrefix;
- (void)registerICloudPreferences;
- (id)existingNestedDocumentPathForPath:(id)arg1;
@property(readonly, nonatomic) BOOL showChineseNamedPointSizes;
- (BOOL)openURL:(id)arg1 displayAlertOnError:(BOOL)arg2;
@property(readonly, nonatomic) double maximumAspectRatioForPreviewImage;
@property(readonly, nonatomic) double mimimumAspectRatioForPreviewImage;
- (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
- (id)applicationTemplateVariantsForLocale:(id)arg1;
- (void)registerDefaults;
- (BOOL)isReadableDocumentType:(id)arg1;
@property(readonly, nonatomic) NSArray *importableDocumentTypes;
@property(readonly, nonatomic) NSArray *readableDocumentTypes;
@property(readonly, nonatomic) NSArray *nativeDocumentTypes;
@property(readonly, nonatomic) NSString *nativeSFFDocumentType;
@property(readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentExtension;
@property(readonly, nonatomic) NSString *templateSFFDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentType;
@property(readonly, nonatomic) NSString *nativeDocumentExtension;
@property(readonly, nonatomic) NSString *nativeDocumentType;
- (void)persistenceError:(id)arg1;
- (void)registerSOSClassTypeMappings;
@property(readonly, nonatomic) Class documentRootClass;
- (id)init;

@end

