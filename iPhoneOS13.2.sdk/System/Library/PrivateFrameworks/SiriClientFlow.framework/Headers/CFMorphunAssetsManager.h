//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CFMorphunAssetsManager : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
}

+ (id)sharedMorphunAssetsManager;
// - (void).cxx_destruct;
- (void)registerPath:(id)arg1 withLanguage:(id)arg2;
- (id)replaceLanguageCodeFormat:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)downloadAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAssets:(id)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)downloadedLocalAsset:(id)arg1 forLanguage:(id)arg2 error:(id )arg3;
- (void)downloadAssetsForAssetType:(id)arg1 forLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerMorphunAssetsManagement;
- (id)morphunAssetsPathForLanguage:(id)arg1;
- (id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2;
- (id)init;

@end

