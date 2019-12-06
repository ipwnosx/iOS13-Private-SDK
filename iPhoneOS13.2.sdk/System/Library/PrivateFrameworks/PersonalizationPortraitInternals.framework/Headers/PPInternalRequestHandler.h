//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPInternalServerProtocol-Protocol.h>

@interface PPInternalRequestHandler : NSObject <PPInternalServerProtocol>
{
}

- (void)sysdiagnoseInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)abGroupInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetVersionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_allowableAssetIdentifiers;
- (void)downloadAssetMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end

