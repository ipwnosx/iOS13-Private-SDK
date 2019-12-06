//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIMediaEntityPreflightManager : NSObject
{
}

+ (id)defaultManager;
- (BOOL)_isOnWiFi;
- (BOOL)_isOnCellular;
- (BOOL)_isMediaItemPlayableOnCellular:(id)arg1;
- (BOOL)_isRemainingTimeLeftWithinRentalPlaybackWindowWithMediaItem:(id)arg1;
- (BOOL)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_determineCellularPlaybackQualityForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentCellularPlaybackIsDisabledAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(BOOL)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_preflightDownloadWithMediaEntityType:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(BOOL)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

