//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVVideoComposition;

@interface _PXLivePhotoTrimScrubberLoupeViewImageRequest : NSObject
{
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _scale;
    CGSize _imageSize;
//     CDStruct_1b6d18a9 _sourceTime;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CGSize imageSize; // @synthesize imageSize=_imageSize;
// @property(nonatomic) CDStruct_1b6d18a9 sourceTime; // @synthesize sourceTime=_sourceTime;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;

@end

