//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@interface PXCMMPhotoKitNotifyWhenReadyActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>
{
}

- (void)performBackgroundTask;
- (BOOL)_needsToNotifyForMomentShare:(id)arg1 localAssetCount:(long long)arg2;

@end

