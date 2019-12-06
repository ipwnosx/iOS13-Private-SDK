//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/ISChangeObserver-Protocol.h>
#import <PhotosUICore/PXVideoViewDelegate-Protocol.h>

@class NSString, PXVideoSession, PXVideoView, UIImage, UIImageView;
@protocol PXVideoSessionUIViewDelegate;

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate, ISChangeObserver>
{
    UIView *_videoContainerView;
    PXVideoView *_videoView;
    PXVideoView *_adoptedVideoView;
    PXVideoView *_activeVideoView;
    UIImageView *_placeholderImageView;
    BOOL _placeholderVisible;
    BOOL _allowsEdgeAntialiasing;
    PXVideoSession *_videoSession;
    UIImage *_placeholderImage;
    id <PXVideoSessionUIViewDelegate> _delegate;
    NSString *_videoGravity;
    CGRect _contentsRect;
}

@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) BOOL allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(nonatomic) CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(nonatomic) __weak id <PXVideoSessionUIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL placeholderVisible; // @synthesize placeholderVisible=_placeholderVisible;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) PXVideoSession *videoSession; // @synthesize videoSession=_videoSession;
// - (void).cxx_destruct;
- (void)_updateEdgeAntialiasing;
- (void)_updatePlaceholderVisibility;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)videoViewReadinessDidChange:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) BOOL isVideoLayerReadyForDisplay;
- (id)generateSnapshotImage;
- (void)_updateVideoViewFrame;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

