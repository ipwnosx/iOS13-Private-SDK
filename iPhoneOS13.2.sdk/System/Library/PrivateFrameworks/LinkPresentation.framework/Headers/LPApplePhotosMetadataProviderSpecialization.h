//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

#import <LinkPresentation/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class LPApplePhotosMomentMetadata, PHFetchResult, PHPhotoLibrary;

__attribute__((visibility("hidden")))
@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization <PXPhotoLibraryUIChangeObserver>
{
    BOOL _cancelled;
    int _pendingImageRequest;
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_keyAssetFetch;
    LPApplePhotosMomentMetadata *_metadata;
}

+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (NSUInteger)specialization;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)didFetchKeyAsset:(id)arg1;
- (void)completeWithMetadata:(id)arg1;
- (void)fail;
- (void)cancel;
- (void)start;
- (void)dealloc;

@end

