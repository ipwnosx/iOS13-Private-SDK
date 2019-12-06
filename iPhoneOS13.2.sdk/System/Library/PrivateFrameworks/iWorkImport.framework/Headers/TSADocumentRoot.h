//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPDocumentRoot.h>

#import <iWorkImport/TSDImportExportDelegate-Protocol.h>
#import <iWorkImport/TSDScrollingAwareChangeSource-Protocol.h>
#import <iWorkImport/TSKPencilAnnotationSupportedDocument-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, SFUCryptoKey, TSADocumentInfo, TSADrawableFactory, TSAFunctionBrowserState, TSAShortcutController, TSCECalculationEngine, TSDFreehandDrawingToolkitUIState, TSKCustomFormatList, TSKViewState, TSPLazyReference, TSTCustomFormatList;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSADocumentRoot : TSWPDocumentRoot <TSKPencilAnnotationSupportedDocument, TSDImportExportDelegate, TSDScrollingAwareChangeSource>
{
    _Atomic int _needsToCaptureViewState;
    NSMutableDictionary *_upgradeState;
    TSPLazyReference *_viewStateReference;
    NSMutableSet *_warnings;
    NSString *_documentLanguage;
    NSUInteger _documentLanguageWritingDirection;
    TSCECalculationEngine *_calculationEngine;
    TSAFunctionBrowserState *_functionBrowserState;
    TSTCustomFormatList *_deprecatedTablesCustomFormatList;
    TSKCustomFormatList *_tablesCustomFormatList;
    TSAShortcutController *_shortcutController;
    BOOL _didLoadControllers;
    BOOL _needsMediaCompatibilityUpgrade;
    BOOL _collaborativeMediaCompatibilityUpgradeDidFail;
    BOOL _canUseHEVC;
    BOOL _isClosed;
    BOOL _documentLocaleWasUpdated;
    BOOL _didPauseRecalculationForBackgroundDocument;
    NSString *_templateIdentifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    SFUCryptoKey *_accessQueue_documentCacheDecryptionKey;
    NSObject<OS_dispatch_queue> *_fetchLatestRevisionQueue;
    BOOL _hasPreUFFVersion;
    BOOL _didLoadDocumentFromTemplate;
    BOOL _didLoadDocumentFromRevert;
    NSArray *_buildVersionHistory;
}

+ (BOOL)shouldShowImportedDataNotificationsOnOpen;
+ (id)persistenceWarningsForData:(id)arg1 flags:(NSUInteger)arg2;
+ (NSUInteger)previewTypeForCurrentDevice;
+ (CGSize)previewImageMaxSizeForType:(NSUInteger)arg1;
+ (CGSize)previewImageSizeForType:(NSUInteger)arg1;
+ (void)writePreviewImage:(id)arg1 group:(id)arg2 queue:(id)arg3 dataConsumerProvider:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;
+ (BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;
+ (id)scaledPreviewImageForType:(NSUInteger)arg1 scalableImage:(id)arg2;
+ (id)supportedPreviewImageExtensions;
+ (id)supportedScalablePreviewNames;
+ (id)buildVersionHistoryPathPreUFF;
+ (id)buildVersionHistoryPath;
+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeTableInfo:(id)arg1 templateBundle:(id)arg2 andLocale:(id)arg3;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 andLocale:(id)arg3;
@property(nonatomic) BOOL didLoadDocumentFromRevert; // @synthesize didLoadDocumentFromRevert=_didLoadDocumentFromRevert;
@property(nonatomic) BOOL didLoadDocumentFromTemplate; // @synthesize didLoadDocumentFromTemplate=_didLoadDocumentFromTemplate;
@property(nonatomic) BOOL hasPreUFFVersion; // @synthesize hasPreUFFVersion=_hasPreUFFVersion;
@property(readonly, nonatomic) BOOL isLoaded; // @synthesize isLoaded=_didLoadControllers;
@property(readonly, nonatomic) BOOL documentLocaleWasUpdated; // @synthesize documentLocaleWasUpdated=_documentLocaleWasUpdated;
@property(readonly, nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property(copy, nonatomic) NSArray *buildVersionHistory; // @synthesize buildVersionHistory=_buildVersionHistory;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isMultiPageForQuickLook;
- (BOOL)hasICloudConflict;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(BOOL)arg2;
@property(readonly, nonatomic) TSADrawableFactory *drawableFactory;
- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(BOOL)arg1;
@property(readonly, nonatomic) NSString *defaultDraftName;
@property(readonly, nonatomic) NSString *name;
- (void)removePencilAnnotationsFromDrawables:(id)arg1;
- (void)enumeratePencilAnnotationsFromRootObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePencilAnnotationsUsingBlock:(CDUnknownBlockType)arg1;
- (id)pencilAnnotationEnumeratorFromRootObect:(id)arg1;
- (double)currentDesiredPencilAnnotationDrawingScale;
- (BOOL)hasPencilAnnotations;
- (void)removePencilAnnotations;
- (BOOL)childrenCanBeAnnotatedWithPencil;
- (BOOL)canBeAnnotatedWithPencil;
- (id)allPencilAnnotations;
- (BOOL)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (CGImageSource )newImageSourceForDocumentCachePath:(id)arg1;
- (BOOL)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (void)didSaveWithEncryptionChange;
- (void)documentCacheWasInvalidated;
- (id)dataFromDocumentCachePath:(id)arg1;
- (id)documentCachePath;
- (id)referencedStylesOfClass:(Class)arg1;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
@property(readonly, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
- (void)p_upgradeRemainingOutlinedTextStylesWithFileFormatVersion:(NSUInteger)arg1;
- (void)upgradeToFixNonVariationChildStylesWithFileFormatVersion:(NSUInteger)arg1;
- (void)removeRedundantStyleOverridesAndEnsureReferencedStylesAreInStylesheet;
- (void)upgradeToSingleStylesheet;
- (void)upgradeCellStyles;
- (void)upgradeTextboxPresets;
- (void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(NSUInteger)arg1;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
- (void)p_cleanupColumnStyles;
- (void)enumerateStylesheetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_removeStyles:(id)arg1;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(NSUInteger)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(NSUInteger)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL )arg2 number:(NSUInteger )arg3;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(BOOL)arg2;
- (id)protected_defaultTextPresetOrdering;
- (void)prepareForSavingAsTemplate;
- (void)removeWarning:(id)arg1;
- (void)addWarning:(id)arg1;
- (id)warnings;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id )arg4;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 error:(id )arg3;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id )arg3;
- (void)importerDidFinish:(id)arg1;
- (void)finalizeFromSageImport;
- (void)p_registerAllFormulasAfterImport;
- (void)didDownloadRemoteData:(id)arg1;
- (void)didDownloadDocumentResources:(id)arg1;
- (void)fontUpdatedForStyleClient:(id)arg1;
- (id)tableToShowImportedDataNotificationOnOpenFor;
- (BOOL)shouldShowFontWarningNotificationForWarnings:(id)arg1;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id )arg2;
- (id)warningsByCombiningSortedWarnings:(id)arg1 withWarnings:(id)arg2;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)consolidatedDocumentWarningsFromWarnings:(id)arg1;
@property(readonly, nonatomic) NSDictionary *missingFontNamesAndWarningMessages;
@property(readonly, nonatomic) NSSet *missingFontWarningMessages;
- (void)prepareToGeneratePreview;
- (id)previewImageForSize:(CGSize)arg1;
- (id)previewImage;
- (void)blockForRecalcWithTimeout:(double)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)resumeThumbnailing;
- (void)suspendThumbnailing;
- (void)resumeBackgroundActivities;
- (void)suspendBackgroundActivities;
- (void)resetViewState;
- (void)invalidateViewState;
- (id)createViewStateRootForContinuation:(BOOL)arg1;
- (void)p_updateViewStateWithRoot:(id)arg1;
- (void)updateViewStateWithRoot:(id)arg1;
- (void)applyViewState:(id)arg1;
- (id)p_captureViewStateForImport:(BOOL)arg1;
- (id)captureViewStateForImport;
- (id)captureViewState;
- (void)captureViewStateIfNeeded;
@property(readonly, nonatomic) TSKViewState *viewState;
- (void)p_upgradeTablesIfNeeded:(NSUInteger)arg1;
- (void)p_upgradeCustomFormatList;
- (id)customFormatList;
- (void)setCustomFormatListToUpgrade:(id)arg1;
- (void)setFunctionBrowserState:(id)arg1;
- (id)functionBrowserState;
- (void)setShortcutController:(id)arg1;
- (id)shortcutController;
- (void)initializeForImport;
- (void)resumeRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)pauseRecalculation;
@property(retain, nonatomic) TSCECalculationEngine *calculationEngine;
- (void)willClose;
- (void)cleanupForImportFailure;
- (void)willUnload;
- (void)fulfillPasteboardPromises;
- (id)additionalResourceRequestsForObjectContext:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
@property(readonly, nonatomic) NSDictionary *packageDataForWrite;
//  (void)saveToArchive:(struct DocumentArchive )arg1 archiver:(id)arg2;
//  (void)loadFromArchive:(const struct DocumentArchive )arg1 unarchiver:(id)arg2;
//  (void)stashUpgradeState:(const struct DocumentArchive )arg1 unarchiver:(id)arg2;
- (id)upgradeState;
- (void)collectDocumentCloseAnalyticsWithLogger:(id)arg1;
- (void)collectDocumentOpenAnalyticsWithLogger:(id)arg1;
- (void)documentDidLoad;
- (void)backgroundDocumentDidLoad;
- (BOOL)objectsNeedToBeMigrated:(id)arg1;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
@property(readonly, nonatomic) TSADocumentInfo *documentInfo;
- (id)tsa_delegate;
- (void)dealloc;
- (NSUInteger)writingDirection;
- (void)updateWritingDirection:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL hasFloatingLocale;
- (void)p_upgradeDocumentCreationLocale;
- (BOOL)p_updateDocumentLanguageToCurrentIfNeeded;
- (id)templatesMetadataBundle;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateIdentifier:(id)arg1;
- (void)prepareNewDocumentWithTemplateIdentifier:(id)arg1 bundle:(id)arg2 documentLocale:(id)arg3;
- (void)commonInit;
- (id)initWithContext:(id)arg1;
@property(nonatomic) BOOL canUseHEVC;
@property(nonatomic) BOOL collaborativeMediaCompatibilityUpgradeDidFail;
@property(nonatomic) BOOL needsMediaCompatibilityUpgrade;
@property(copy, nonatomic) NSString *templateIdentifier;
- (void)setDocumentCreationLocale:(id)arg1;
- (void)setDocumentLanguage:(id)arg1;
- (id)documentLanguage;
- (id)namedTextStyles;

@end

