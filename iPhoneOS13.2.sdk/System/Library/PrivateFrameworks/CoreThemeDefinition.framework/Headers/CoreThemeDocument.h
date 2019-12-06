//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDPersistentDocument.h>

@class NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL, NSUUID, TDCatalogGlobals, TDDeviceTraits, TDHistorian, TDThreadMOCOrganizer;
@protocol TDAssetManagementDelegate, TDCustomAssetProvider;

@interface CoreThemeDocument : TDPersistentDocument
{
    NSMutableDictionary *constantArrayControllers;
    NSMutableDictionary *cachedConstantArrays;
    long long cachedMaxIdentifierInUse;
    TDHistorian *m_historian;
    TDThreadMOCOrganizer *m_mocOrganizer;
    NSManagedObjectModel *m_managedObjectModel;
    NSString *pathToRepresentedDocument;
    NSString *_relativePathToProductionData;
    NSString *_targetPlatform;
    NSMutableDictionary *_packableRenditions;
    NSMutableDictionary *_explicitlyPackedIdentifiers;
    NSMutableDictionary *_explicitlyPackedPackings;
    NSMutableDictionary *_explicitlyPackedContents;
    BOOL m_didMigrate;
    int _updateVersionMetadataState;
    NSString *_minimumDeploymentVersion;
    int _majorVersion;
    int _minorVersion;
    int _patchVersion;
    NSMutableArray *_deviceTraits;
//     struct _renditionkeyfmt _keyFormat;
    TDCatalogGlobals *_catalogGlobals;
    NSMutableArray *_cachedAppearances;
    NSMutableSet *_cachedUnknownAppearanceIds;
    NSMutableArray *_cachedLocalizations;
    NSMutableSet *_cachedUnknownLocalizationIds;
    NSMutableArray *_cachedModelAssets;
    BOOL _donotstoreDocumentChecksum;
    id <TDAssetManagementDelegate> _assetManagementDelegate;
    id <TDCustomAssetProvider> _customAssetProvider;
}

+ (id)defaultThemeBitSourceURLForDocumentURL:(id)arg1;
+ (void)doneWithColorConversion;
+ (int)shouldConvertColorsFromColorSpaceWithIdentifier:(NSUInteger)arg1 toIdentifier:(NSUInteger)arg2 error:(id )arg3;
+ (NSUInteger)standardColorSpaceID;
+ (BOOL)defaultAllowsExtendedRangePixelFormats;
+ (void)closeMigrationProgress;
+ (void)presentMigrationProgress;
+ (id)dataModelNameForVersion:(long long)arg1;
+ (long long)dataModelVersion;
+ (long long)targetPlatformForMOC:(id)arg1;
+ (long long)defaultTargetPlatform;
+ (long long)platformForPersistentString:(id)arg1;
+ (id)persistentStringForPlatform:(long long)arg1;
+ (id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id )arg3;
+ (id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id )arg3;
+ (long long)dataModelVersionFromMetadata:(id)arg1;
+ (id)createConfiguredDocumentAtURL:(id)arg1 targetPlatform:(long long)arg2 error:(id )arg3;
+ (id)createConfiguredDocumentAtURL:(id)arg1 error:(id )arg2;
+ (void)_addThemeDocument:(id)arg1;
+ (id)_sharedDocumentList;
+ (BOOL)deepmap2CompressionEnabled;
+ (BOOL)deepmapCompressionEnabled;
+ (BOOL)HEVCCompressionEnabled;
+ (int)maximumAreaOfPackableImageForScale:(NSUInteger)arg1;
+ (void)initialize;
@property(nonatomic) id <TDCustomAssetProvider> customAssetProvider; // @synthesize customAssetProvider=_customAssetProvider;
@property(nonatomic) id <TDAssetManagementDelegate> assetManagementDelegate; // @synthesize assetManagementDelegate=_assetManagementDelegate;
@property(copy) NSString *pathToRepresentedDocument; // @synthesize pathToRepresentedDocument;
@property(copy, nonatomic) NSString *minimumDeploymentVersion; // @synthesize minimumDeploymentVersion=_minimumDeploymentVersion;
- (BOOL)_clampMetrics;
- (id)_cachedModelAssets;
- (void)_processModelProductions;
- (void)_automaticP3GenerationFromSRGB;
- (void)_automaticSRGBGenerationFromP3;
- (BOOL)_matchesAllExceptGamut:(id)arg1 andKeySpec:(id)arg2;
- (void)_optimizeForDeviceTraits;
- (void)incrementallyPackRenditionsSinceDate:(id)arg1 error:(id )arg2;
- (void)packRenditionsError:(id )arg1;
- (void)_groupPackableRenditions;
- (BOOL)_updateRenditionPackings:(id)arg1 error:(id )arg2;
- (void)_insertRendition:(id)arg1 forKey:(id)arg2;
- (void)_delete:(id)arg1 withRendition:(id)arg2;
- (void)_removeRedundantPDFBasedRenditions:(id)arg1;
- (void)_removeRedundantPDFBasedRenditionsForAssets:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1 createProductions:(BOOL)arg2;
@property(readonly, nonatomic) NSURL *themeBitSourceURL;
- (void)_configureAfterFirstSave;
- (void)_synchronousSave;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id )arg3;
- (BOOL)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id )arg3;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id )arg5;
- (id)updatedVersionsMetadataFromMetadata:(id)arg1;
- (id)persistentStoreTypeForFileType:(id)arg1;
@property(readonly) TDCatalogGlobals *catalogGlobals;
- (void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id )arg2 getUnupdatedCursors:(id )arg3;
- (void)exportCursorsToURL:(id)arg1;
- (id)namedEffectProductions;
- (id)namedArtworkProductions;
- (id)schemaPartDefinitionWithElementID:(long long)arg1 partID:(long long)arg2;
- (id)schemaDefinitionWithElementID:(long long)arg1;
- (BOOL)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 nameElement:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id )arg5;
- (BOOL)customizeSchemaMaterialDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id )arg3;
- (BOOL)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id )arg3;
- (BOOL)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id )arg4;
- (void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (BOOL)customizationExistsForSchemaDefinition:(id)arg1;
- (id)_customizedSchemaDefinitionsForEntity:(id)arg1;
- (id)customizedSchemaMaterialDefinitions;
- (id)customizedSchemaEffectDefinitions;
- (id)customizedSchemaElementDefinitions;
- (BOOL)usesCUISystemThemeRenditionKey;
- (long long)renditionKeySpecAttributeCount;
- (int)renditionKeySemantics;
// - (const struct _renditionkeyfmt )renditionKeyFormat;
// - (const struct _renditionkeyfmt )untrimmedRenditionKeyFormat;
- (void)_updateKeyFormatWithContext:(id)arg1;
- (BOOL)_canremoveKeyAttribte:(unsigned short)arg1;
- (void)convertColorsFromColorSpaceWithIdentifier:(NSUInteger)arg1 toIdentifier:(NSUInteger)arg2;
- (NSUInteger)colorSpaceID;
- (void)setAllowsExtendedRangePixelFormats:(BOOL)arg1;
- (BOOL)allowsExtendedRangePixelFormats;
- (BOOL)didMigrate;
- (void)primeArrayControllers;
- (void)resetThemeConstants;
- (void)buildModel;
@property long long targetPlatform;
- (void)_updateDeviceTraits;
- (void)setArtworkFormat:(id)arg1;
- (id)artworkFormat;
- (unsigned int)checksum;
@property(copy, nonatomic) NSUUID *uuid;
- (NSUInteger)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1;
- (NSUInteger)countOfRenditionsMatchingRenditionKeySpec:(id)arg1;
- (id)renditionsMatchingRenditionKeySpec:(id)arg1;
- (BOOL)isCustomLook;
- (void)setRelativePathToProductionData:(id)arg1;
- (id)relativePathToProductionData;
- (id)rootPathForProductionData;
- (id)pathToAsset:(id)arg1;
- (void)setMetadatum:(id)arg1 forKey:(id)arg2;
- (id)metadatumForKey:(id)arg1;
- (id)_addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id )arg6;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2;
- (id)addAssetsAtFileURLs:(id)arg1;
- (id)assetAtFileURL:(id)arg1;
- (id)assetAtPath:(id)arg1;
- (id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned int)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5;
- (id)createAssetWithName:(id)arg1 scaleFactor:(unsigned int)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4;
- (id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3;
- (id)createElementProductionWithAsset:(id)arg1;
- (id)_genericPartDefinition;
- (void)importCustomAssetsWithImportInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)createCustomArtworkProductionsForCustomAssets:(id)arg1 withImportInfos:(id)arg2 error:(id )arg3;
- (id)_addAssetsFromCustomAssetInfos:(id)arg1 bitSource:(id)arg2 error:(id )arg3;
- (void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canImportNamedAssetImportInfo:(id)arg1;
- (void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_backwardsCompatibilityPatchForLayoutDirection;
- (void)_generateWatchImages;
- (BOOL)_production:(id)arg1 containsScale:(unsigned int)arg2 andIdiom:(unsigned int)arg3 andSubtype:(unsigned int)arg4;
- (void)createNamedRenditionGroupProductionsForImportInfos:(id)arg1 error:(id )arg2;
- (void)_tidyUpRecognitionImages;
- (void)_tidyUpLayerStacks;
- (void)_makeRadiosityImages;
- (void)_addResolvedLayerReferenceToFlattenedImageRendition:(id)arg1 usingArtworkRendition:(id)arg2 andLayerReference:(id)arg3;
- (long long)_compareFlattenedKeySpec1:(id)arg1 toKeySpec2:(id)arg2;
- (id)updateAutomaticTexturesForCustomInfos:(id)arg1 allTextureInfos:(id)arg2;
- (void)createNamedGlyphVectorForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id )arg4;
- (void)createNamedRecognitionObjectsForAssets:(id)arg1 customInfos:(id)arg2 error:(id )arg3;
- (void)createNamedModelsForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id )arg4;
- (void)createNamedTexturesForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id )arg4;
- (id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id )arg3;
- (void)_createForwardstopRenditions;
- (void)createForwardstops:(id)arg1;
- (BOOL)needToCreateForwardstopFor2019DeploymentVariant:(id)arg1;
- (BOOL)needToCreateForwardstopFor2018DeploymentVariant:(id)arg1;
- (BOOL)isArtworkRenditionEligibleForForwardstop:(id)arg1;
- (BOOL)needToCreateForwardstopForPlatform;
- (id)_sizeIndexesByNameFromNamedAssetImportInfos:(id)arg1;
- (id)createNamedColorProductionsForImportInfos:(id)arg1 error:(id )arg2;
- (id)createTextStyleProductionsForImportInfos:(id)arg1 error:(id )arg2;
// - (id)slicesComputedForImageSize:(CGSize)arg1 usingSliceInsets:(CDStruct_3c058996)arg2 resizableSliceSize:(CGSize)arg3 withRenditionType:(long long)arg4;
- (id)namedArtworkProductionWithName:(id)arg1;
- (id)elementProductionsWithName:(id)arg1;
- (id)namedElementsForElementDefinition:(id)arg1;
- (id)namedElementWithName:(id)arg1;
- (id)_createNamedElementWithIdentifier:(long long)arg1;
- (id)_createNamedElementWithNextAvailableIdentifier;
- (id)_namedImagePartDefinition;
- (id)_createPhotoshopElementProductionWithAsset:(id)arg1;
- (id)createNamedEffectProductionWithName:(id)arg1 isText:(BOOL)arg2;
- (id)_namedImageEffectPartDefinition;
- (id)_namedTextEffectPartDefinition;
- (id)namedEffectProductionWithName:(id)arg1;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1;
- (void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 nameElement:(id)arg4 shouldReplaceExisting:(BOOL)arg5 error:(id )arg6;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id )arg5;
- (BOOL)allowMultipleInstancesOfElementID:(long long)arg1;
- (BOOL)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id )arg3;
- (id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)_themeBitSource:(id )arg1;
- (id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id )arg4;
- (id)defaultPathComponentsForPartDefinition:(id)arg1;
- (id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2;
- (id)minimalDisplayNameForThemeConstant:(id)arg1;
- (void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (void)deleteObject:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (id)newObjectForEntity:(id)arg1;
- (NSUInteger)countForEntity:(id)arg1 withPredicate:(id)arg2;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 withContext:(id)arg4 error:(id )arg5;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id )arg4;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id )arg3;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2;
- (id)mappingForPhotoshopLayerIndex:(long long)arg1 themeDrawingLayerIdentifier:(long long)arg2;
- (id)glyphSizeWithIdentifier:(long long)arg1;
- (id)glyphWeightWithIdentifier:(long long)arg1;
- (id)localizationWithIdentifier:(long long)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)localizationWithIdentifier:(long long)arg1;
- (id)appearanceWithIdentifier:(long long)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)appearanceWithIdentifier:(long long)arg1;
- (id)artworkDraftTypeWithIdentifier:(long long)arg1;
- (id)psdImageRefForAsset:(id)arg1;
- (id)constantWithName:(id)arg1 forIdentifier:(long long)arg2;
- (id)textureInterpretaitionWithIdentifier:(unsigned int)arg1;
- (id)textureFaceWithIdentifier:(long long)arg1;
- (id)pixelFormatWithIdentifier:(long long)arg1;
- (id)iterationTypeWithIdentifier:(int)arg1;
- (id)renditionSubtypeWithIdentifier:(unsigned int)arg1;
- (id)renditionTypeWithIdentifier:(long long)arg1;
- (id)effectComponentWithType:(unsigned int)arg1 inRendition:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectParameterValueWithType:(unsigned int)arg1 inComponent:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectParameterTypeWithIdentifier:(unsigned int)arg1;
- (id)effectTypeWithIdentifier:(unsigned int)arg1;
- (id)schemaCategoryWithIdentifier:(long long)arg1;
- (id)compressionTypeWithIdentifier:(long long)arg1;
- (id)templateRenderingModeWithIdentifier:(long long)arg1;
- (id)sizeClassWithIdentifier:(long long)arg1;
- (id)deploymentTargetWithIdentifier:(long long)arg1;
- (id)displayGamutWithIdentifier:(long long)arg1;
- (id)graphicsFeatureSetClassWithIdentifier:(long long)arg1;
- (id)idiomWithIdentifier:(long long)arg1;
- (id)drawingLayerWithIdentifier:(long long)arg1;
- (id)previousValueWithIdentifier:(long long)arg1;
- (id)valueWithIdentifier:(long long)arg1;
- (id)presentationStateWithIdentifier:(long long)arg1;
- (id)previousStateWithIdentifier:(long long)arg1;
- (id)stateWithIdentifier:(long long)arg1;
- (id)directionWithIdentifier:(long long)arg1;
- (id)sizeWithIdentifier:(long long)arg1;
- (id)partWithIdentifier:(long long)arg1;
- (id)elementWithIdentifier:(long long)arg1;
- (id)themeConstant:(id)arg1 withIdentifier:(long long)arg2;
- (id)_cachedConstantsForEntity:(id)arg1;
- (void)recacheThemeConstant:(id)arg1;
- (id)historian;
- (id)mocOrganizer;
- (id)managedObjectModel;
- (id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id )arg1;
- (void)checkVersionsAndUpdateIfNecessary;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id )arg3;
- (id)initWithType:(id)arg1 error:(id )arg2;
- (id)initWithType:(id)arg1 targetPlatform:(long long)arg2 error:(id )arg3;
- (id)init;
- (void)_getFilename:(id )arg1 scaleFactor:(unsigned int )arg2 category:(id )arg3 bitSource:(id )arg4 forFileURL:(id)arg5;
- (id)_predicateForRenditionKeySpec:(id)arg1;
- (void)changedObjectsNotification:(id)arg1;
- (BOOL)shouldCreate2019ForwardstopForLossless;
- (BOOL)shouldCreate2018ForwardstopForLossless;
- (BOOL)shouldCreateForwardstopForLossy;
- (BOOL)shouldAllowDeepmap2CompressionForDeploymentTarget:(unsigned int)arg1;
- (BOOL)shouldAllowDeepmap2Compression;
- (BOOL)shouldAllowDeepmapCompressionForDeploymentTarget:(unsigned int)arg1;
- (BOOL)shouldAllowDeepmapCompression;
- (BOOL)shouldAllowHevcCompressionForDeploymentTarget:(unsigned int)arg1;
- (BOOL)shouldAllowHevcCompression;
- (BOOL)shouldPerformHistogramBasedPacking;
- (BOOL)shouldAllowPaletteImageCompressionForDeploymentTarget:(unsigned int)arg1;
- (BOOL)shouldAllowPaletteImageCompression;
- (BOOL)shouldSupportCompactCompression;
- (void)updateRenditionSpec:(id)arg1;
- (id)deviceTraitsUsedForOptimization;
- (void)removeDeviceTraitsForOptimization;
- (void)addDeviceTraitForOptimization:(id)arg1;
@property(retain, nonatomic) TDDeviceTraits *optimizeForDeviceTraits;
@property(readonly, nonatomic) int patchVersion;
@property(readonly, nonatomic) int minorVersion;
@property(readonly, nonatomic) int majorVersion;

@end

