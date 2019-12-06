//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAsset-Protocol.h>

@class NSData, NSDate, PHAsset, PHMomentShare, UIImage;

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset>
{
    UIImage *_cachedImage;
    PHMomentShare *_momentShare;
    PHAsset *_underlyingAsset;
}

@property(readonly, nonatomic) PHAsset *underlyingAsset; // @synthesize underlyingAsset=_underlyingAsset;
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
// - (void).cxx_destruct;
- (CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
@property(readonly, nonatomic) double aspectRatio;
- (CGSize)size;
- (CGRect)bestCropRectForAspectRatio:(double)arg1;
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) NSData *previewImageData;
@property(readonly, nonatomic) BOOL isPreviewImageDataAvailable;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) NSUInteger thumbnailIndex;
@property(readonly, nonatomic) NSUInteger pixelHeight;
@property(readonly, nonatomic) NSUInteger pixelWidth;
@property(readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property(readonly, nonatomic) BOOL isInCloud;
@property(readonly, nonatomic) BOOL representsBurst;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSUInteger mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)init;
- (id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2;

@end

