//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

@class PHLivePhoto, PHLivePhotoView;

@interface CKLivePhotoBalloonView : CKImageBalloonView
{
    BOOL _isIrisAsset;
    PHLivePhotoView *_livePhotoView;
    PHLivePhoto *_livePhoto;
}

@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(retain, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
- (BOOL)isIrisAsset;
// - (void).cxx_destruct;
- (void)setIsIrisAsset:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;

@end

