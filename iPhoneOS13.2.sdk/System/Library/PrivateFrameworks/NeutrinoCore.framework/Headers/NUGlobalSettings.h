//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NUGlobalSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

+ (void)setLogPeakRenderCIUsuage:(BOOL)arg1;
+ (BOOL)logPeakRenderCIUsuage;
+ (void)setUpCacheNodeDirectoryWithComponent:(id)arg1;
+ (void)setRenderTransparencyOpaque:(BOOL)arg1;
+ (BOOL)renderTransparencyOpaque;
+ (void)setRenderTransparencyOverBlack:(BOOL)arg1;
+ (BOOL)renderTransparencyOverBlack;
+ (void)setDisplayDisableColorMatching:(BOOL)arg1;
+ (BOOL)displayDisableColorMatching;
+ (void)setDisplayForceDeepColor:(BOOL)arg1;
+ (BOOL)displayForceDeepColor;
+ (void)setDisplayDisableDeepColor:(BOOL)arg1;
+ (BOOL)displayDisableDeepColor;
+ (void)setImageLayerDebug:(BOOL)arg1;
+ (BOOL)imageLayerDebug;
+ (void)setPipelineSourceURL:(id)arg1;
+ (id)pipelineSourceURL;
+ (void)setPlatformHasWideColor:(BOOL)arg1;
+ (BOOL)platformHasWideColor;
+ (void)setRenderVideoLive:(BOOL)arg1;
+ (BOOL)renderVideoLive;
+ (void)setCacheNodeDirectoryURL:(id)arg1;
+ (id)cacheNodeDirectoryURL;
+ (void)setViewDebugEnabled:(BOOL)arg1;
+ (BOOL)isViewDebugEnabled;
+ (void)setCacheNodeImageCompression:(double)arg1;
+ (double)cacheNodeImageCompression;
+ (void)setCacheNodeFilePermissions:(long long)arg1;
+ (long long)cacheNodeFilePermissions;
+ (void)setCacheNodeCacheSizeLimit:(long long)arg1;
+ (long long)cacheNodeCacheSizeLimit;
+ (void)setImageSourceDisableCacheImmediately:(BOOL)arg1;
+ (BOOL)imageSourceDisableCacheImmediately;
+ (void)setImageSourceDisableRAW:(BOOL)arg1;
+ (BOOL)imageSourceDisableRAW;
+ (void)setImageTileBorder:(long long)arg1;
+ (long long)imageTileBorder;
+ (void)setImageTileSize:(long long)arg1;
+ (long long)imageTileSize;
+ (void)setRendererUseP3Linear:(BOOL)arg1;
+ (BOOL)rendererUseP3Linear;
+ (void)setRendererClampToAlpha:(BOOL)arg1;
+ (BOOL)rendererClampToAlpha;
+ (void)setRendererUseHalfFloat:(BOOL)arg1;
+ (BOOL)rendererUseHalfFloat;
+ (void)setRenderJSPipelineTimeout:(double)arg1;
+ (double)renderJSPipelineTimeout;
+ (void)setImageRenderJobUseTextureRenderer:(BOOL)arg1;
+ (BOOL)imageRenderJobUseTextureRenderer;
+ (void)setImageRenderJobUseSurfaceRenderer:(BOOL)arg1;
+ (BOOL)imageRenderJobUseSurfaceRenderer;
+ (void)setBufferStorageFactoryUsePool:(BOOL)arg1;
+ (BOOL)bufferStorageFactoryUsePool;
+ (void)setSurfaceStorageFactoryUsePool:(BOOL)arg1;
+ (BOOL)surfaceStorageFactoryUsePool;
+ (void)setStoragePoolMigrationDelay:(double)arg1;
+ (double)storagePoolMigrationDelay;
+ (void)setStoragePoolPurgeableLimit:(long long)arg1;
+ (long long)storagePoolPurgeableLimit;
+ (void)setStoragePoolNonPurgeableLimit:(long long)arg1;
+ (long long)storagePoolNonPurgeableLimit;
+ (void)setDeviceDefaultSampleMode:(long long)arg1;
+ (long long)deviceDefaultSampleMode;
+ (void)setDevicePrintRenderer:(BOOL)arg1;
+ (BOOL)devicePrintRenderer;
+ (void)setDeviceDisableOpenGL:(BOOL)arg1;
+ (BOOL)deviceDisableOpenGL;
+ (void)setDeviceDisableMetal:(BOOL)arg1;
+ (BOOL)deviceDisableMetal;
+ (void)reset;
+ (id)globalSettings;
// - (void).cxx_destruct;
- (id)urlSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)stringSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (double)doubleSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (long long)integerSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (BOOL)boolSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)_settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)init;

@end

