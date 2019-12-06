//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSADocumentRoot.h>

#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSTResolverContainerNameProvider-Protocol.h>
#import <iWorkImport/TSWPDrawableOLC-Protocol.h>

@class KNRecordingSyncMaintainer, KNShow;
@protocol KNDocumentRootDelegate;

__attribute__((visibility("hidden")))
@interface KNDocumentRoot : TSADocumentRoot <TSWPDrawableOLC, TSKModel, TSTResolverContainerNameProvider>
{
    BOOL _isObservingRecording;
    KNShow *_show;
    KNRecordingSyncMaintainer *_recordingSyncMaintainer;
}

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
@property(retain, nonatomic) KNRecordingSyncMaintainer *recordingSyncMaintainer; // @synthesize recordingSyncMaintainer=_recordingSyncMaintainer;
@property(retain, nonatomic) KNShow *show; // @synthesize show=_show;
// - (void).cxx_destruct;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)addDefaultGalleryCaptionParagraphStyleIfNeededToStylesheet:(id)arg1;
- (BOOL)validateSlideNode:(id)arg1;
- (BOOL)isSharedReadOnly;
- (NSUInteger)writingDirectionForStorage;
- (BOOL)validateUIState:(id)arg1;
@property(readonly, nonatomic) BOOL isShowcastAllowed;
- (void)prepareForSavingAsTemplate;
- (void)preprocessForSaveAsTheme;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id )arg2;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (id)resolverContainerNameForResolver:(id)arg1;
- (void)changeShowThemeUsingTemplate:(id)arg1 themeDocumentRoot:(id)arg2 toSize:(CGSize)arg3 keepChangesToThemeDefaults:(BOOL)arg4 commandGroupActionStringOverride:(id)arg5;
- (void)changeShowSizeTo:(CGSize)arg1;
- (id)slideNodeForClearedShow;
- (id)stylesToNotResizeInStylesheet:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (BOOL)isMultiPageForQuickLook;
- (id)createViewStateRootForContinuation:(BOOL)arg1;
- (id)freehandDrawingToolkitUIState;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (id)protected_defaultTextPresetOrdering;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (id)stylesheet;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)childEnumerator;
@property(nonatomic) __weak id <KNDocumentRootDelegate> delegate; // @dynamic delegate;
- (id)knDelegate;
- (void)dealloc;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (void)willClose;
- (void)documentDidLoad;
- (void)p_thumbnailUpgradeForUnity20SlideNodes:(id)arg1 andMasterSlideNodess:(id)arg2;
- (double)stickyCommentScaleMultiplier;
- (BOOL)shouldShowComments;
- (NSUInteger)applicationType;
- (id)initWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)arg1;
//  (void)saveToArchive:(struct DocumentArchive )arg1 archiver:(id)arg2;
//  (void)loadFromArchive:(const struct DocumentArchive )arg1 unarchiver:(id)arg2;

@end

