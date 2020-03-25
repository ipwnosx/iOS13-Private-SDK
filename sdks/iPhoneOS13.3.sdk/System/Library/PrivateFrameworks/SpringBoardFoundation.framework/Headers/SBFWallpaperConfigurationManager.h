//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SBFMagnifyMode, SBFWallpaperConfiguration;
@protocol SBFProceduralWallpaperProvider, SBFWallpaperConfigurationManagerDelegate;

@interface SBFWallpaperConfigurationManager : NSObject <BSDescriptionProviding>
{
    NSMutableDictionary *_wallpaperImageCache;
    int _externalNotificationToken;
    NSUInteger _batchChangeCount;
    long long _batchNotifyVariants;
    BOOL _enableWallpaperDimming;
    BOOL _cachedVariantsShareWallpaperConfiguration;
    BOOL _cachedVariantsShareWallpaperConfigurationValid;
    NSArray *_dataStores;
    id <SBFWallpaperConfigurationManagerDelegate> _delegate;
    double _wallpaperScale;
    long long _wallpaperMode;
    long long _wallpaperSizeType;
    id <SBFProceduralWallpaperProvider> _proceduralWallpaperProvider;
    SBFMagnifyMode *_magnifyMode;
    CGSize _wallpaperSize;
}

+ (void)initialize;
@property(nonatomic, getter=isCachedVariantsShareWallpaperConfigurationValid) BOOL cachedVariantsShareWallpaperConfigurationValid; // @synthesize cachedVariantsShareWallpaperConfigurationValid=_cachedVariantsShareWallpaperConfigurationValid;
@property(nonatomic) BOOL cachedVariantsShareWallpaperConfiguration; // @synthesize cachedVariantsShareWallpaperConfiguration=_cachedVariantsShareWallpaperConfiguration;
@property(retain, nonatomic) SBFMagnifyMode *magnifyMode; // @synthesize magnifyMode=_magnifyMode;
@property(nonatomic) __weak id <SBFProceduralWallpaperProvider> proceduralWallpaperProvider; // @synthesize proceduralWallpaperProvider=_proceduralWallpaperProvider;
@property(readonly, nonatomic) long long wallpaperSizeType; // @synthesize wallpaperSizeType=_wallpaperSizeType;
@property(nonatomic) BOOL enableWallpaperDimming; // @synthesize enableWallpaperDimming=_enableWallpaperDimming;
@property(nonatomic) long long wallpaperMode; // @synthesize wallpaperMode=_wallpaperMode;
@property(readonly, nonatomic) double wallpaperScale; // @synthesize wallpaperScale=_wallpaperScale;
@property(readonly, nonatomic) CGSize wallpaperSize; // @synthesize wallpaperSize=_wallpaperSize;
@property(nonatomic) __weak id <SBFWallpaperConfigurationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *dataStores; // @synthesize dataStores=_dataStores;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)getBestCropRect:(out CGRect )arg1 zoomScale:(out double )arg2 forImageSize:(CGSize)arg3 portrait:(BOOL)arg4 parallaxFactor:(double)arg5;
- (double)parallaxFactorForCropRect:(CGRect)arg1 portrait:(BOOL)arg2 forImageSize:(CGSize)arg3 zoomScale:(double)arg4;
- (CGRect)cropRectForOldCropRect:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 oldParallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 newZoomScale:(double )arg6;
- (CGRect)cropRectForViewPort:(CGRect)arg1 portrait:(BOOL)arg2 zoomScale:(double)arg3 parallaxFactor:(double)arg4 forImageSize:(CGSize)arg5 contentScaleFactor:(double)arg6;
- (void)notifyDelegateOfChangesToVariants:(long long)arg1;
- (void)wallpaperDidChangeForVariants:(long long)arg1 shouldNotify:(BOOL)arg2;
- (void)wallpaperWillChangeForVariants:(long long)arg1;
- (void)removeDataForTypes:(NSUInteger)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3;
- (void)removeAllDataExceptForTypes:(NSUInteger)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3;
- (void)removeAllDataExceptForType:(long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(BOOL)arg3;
- (void)removeWallpaperGradientForVariants:(long long)arg1;
- (BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperColorForVariant:(long long)arg1 fromDataStore:(id)arg2 colorName:(id )arg3;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (BOOL)setProceduralWallpaperIdentifier:(id)arg1 options:(id)arg2 forVariants:(long long)arg3;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (id)cleanedProceduralWallpaperInfo:(id)arg1;
- (BOOL)isProceduralWallpaperInfoValid:(id)arg1;
- (Class)proceduralWallpaperClassForIdentifier:(id)arg1;
- (void)removeVideoForVariants:(long long)arg1;
- (void)saveCroppedVideo:(id)arg1 toURL:(id)arg2 cropRect:(CGRect)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 shoudCrop:(BOOL)arg3 relativeCropRect:(CGRect)arg4 wallpaperMode:(long long)arg5;
- (id)videoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)regenerateStaticWallpaperThumbnailImages;
- (void)regenerateThumbnailsIfNecessary;
- (void)regenerateThumbnailIfNecessaryForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)safeMigrateWallpaperImageIfNecessary;
- (BOOL)safeMigrateWallpaperImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)migratedWallpaperOptionsForWallpaperOptions:(id)arg1 originalImageSize:(CGSize)arg2;
- (void)migrateWallpaperOptionsForImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2;
- (void)performMigrationWithFailureHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSUInteger numberOfCachedStaticImages;
- (void)clearCacheForVariants:(long long)arg1;
- (BOOL)setWallpaperConfigurationFromDefaultWallpaperConfiguration:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 name:(id)arg4;
- (BOOL)setWallpaperConfigurationFromDefaultWallpaperConfigurationSet:(id)arg1;
- (void)restoreDefaultWallpaperForAllVariantsAndNotify:(BOOL)arg1;
- (long long)wallpaperTypeForSharedWallpaperConfigurationForTypes:(NSUInteger)arg1;
- (BOOL)variantsShareWallpaperConfigurationForTypes:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL variantsShareWallpaperConfiguration;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeWallpaperImageDataTypes:(NSUInteger)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperImagesForVariants:(long long)arg1 variantsShareWallpaperConfiguration:(BOOL)arg2;
- (void)removeWallpaperImagesForVariants:(long long)arg1;
- (BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2;
- (BOOL)setWallpaperThumbnailFromFullsizeImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (double)thumbnailWidth;
- (id)hashDataForImage:(id)arg1;
- (id)thumbnailDataForImage:(id)arg1;
- (id)normalizeImage:(id)arg1;
- (BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 thumbnailData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(long long)arg5 options:(NSUInteger)arg6 wallpaperMode:(long long)arg7 isMigrating:(BOOL)arg8;
- (BOOL)setWallpaperImage:(id)arg1 originalImage:(id)arg2 forVariants:(long long)arg3 options:(NSUInteger)arg4;
- (BOOL)setWallpaperImage:(id)arg1 adjustedImage:(id)arg2 thumbnailData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(long long)arg5 wallpaperMode:(long long)arg6;
- (BOOL)setWallpaperImage:(id)arg1 wallpaperOptions:(id)arg2 forVariants:(long long)arg3;
- (long long)effectiveSharedVariantForVariants:(long long)arg1;
- (id)wallpaperThumbnailImageDataForFulfillingLookupForConfiguration:(id)arg1;
- (id)wallpaperThumbnailImageForFulfillingLookupForConfiguration:(id)arg1;
- (id)wallpaperThumbnailImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperThumbnailImageDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)fallbackWallpaperConfigurationForVarient:(long long)arg1;
@property(readonly, copy, nonatomic) SBFWallpaperConfiguration *homeScreenWallpaperConfiguration;
@property(readonly, copy, nonatomic) SBFWallpaperConfiguration *lockScreenWallpaperConfiguration;
- (id)wallpaperConfigurationForVariant:(long long)arg1;
- (id)homeScreenWallpaperConfigurationIncludingValuesForTypes:(NSUInteger)arg1;
- (id)lockScreenWallpaperConfigurationIncludingValuesForTypes:(NSUInteger)arg1;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(NSUInteger)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(NSUInteger)arg2;
- (BOOL)isVideoSupportedByDefaultForVariant:(long long)arg1;
- (BOOL)isVideoSupportedForVariant:(long long)arg1;
- (void)clearDelayedChangeNotifications;
- (void)delayNotifyingChangeForVariants:(long long)arg1;
- (BOOL)isInChangeBatch;
- (void)endChangeBatch;
- (void)beginChangeBatch;
@property(readonly, nonatomic) CGSize wallpaperSizeIncludingParallaxOverhang;
- (long long)parallaxDeviceType;
- (void)dealloc;
- (id)init;
- (id)initWithWallpaperDataStores:(id)arg1;
- (id)initWithWallpaperDataStores:(id)arg1 wallpaperSize:(CGSize)arg2 scale:(double)arg3 sizeType:(long long)arg4;

@end
