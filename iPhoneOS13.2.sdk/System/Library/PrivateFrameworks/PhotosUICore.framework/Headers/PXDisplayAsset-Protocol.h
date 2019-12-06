//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayThumbnailAsset-Protocol.h>

@class NSDate, NSString;
@protocol PXAssetdestinationAssetCopyProperties, PXDisplayAsset;

@protocol PXDisplayAsset <PXDisplayThumbnailAsset>
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) NSUInteger pixelHeight;
@property(readonly, nonatomic) NSUInteger pixelWidth;
@property(readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property(readonly, nonatomic) BOOL isInCloud;
@property(readonly, nonatomic) BOOL representsBurst;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSUInteger mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (long long)isContentEqualTo:(id <PXDisplayAsset>)arg1;

@optional
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) NSUInteger burstSelectionTypes;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSUInteger thumbnailVersion;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) double duration;
- (id <PXAssetdestinationAssetCopyProperties>)destinationAssetCopyProperties;
- (NSString *)localizedDetailedGeoDescriptionForRTL:(BOOL)arg1;
- (CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (CGRect)bestCropRectForAspectRatio:(double)arg1;
@end

