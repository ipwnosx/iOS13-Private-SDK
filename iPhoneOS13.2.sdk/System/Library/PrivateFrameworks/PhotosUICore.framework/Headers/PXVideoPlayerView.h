//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ISWrappedAVPlayer, NSArray, PXVideoView, UIImage, UIImageView;
@protocol PXVideoPlayerViewDelegate;

@interface PXVideoPlayerView : UIView
{
    PXVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    long long _placeholderVisibilityRequestID;
    id /* CDUnknownBlockType */ _visibilityChangeCompletionHandler;
    BOOL _displayingPlaceholder;
    BOOL _allowsEdgeAntialiasing;
    id <PXVideoPlayerViewDelegate> _delegate;
    ISWrappedAVPlayer *_player;
    UIImage *_placeholderImage;
    NSArray *_placeholderImageFilters;
    double _videoAppearanceCrossfadeDuration;
    long long _placeholderDisplayMode;
    long long _videoViewContentMode;
    CGRect _placeholderImageContentsRect;
}

@property(nonatomic) BOOL allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(nonatomic) long long videoViewContentMode; // @synthesize videoViewContentMode=_videoViewContentMode;
@property(readonly, nonatomic, getter=isDisplayingPlaceHolder) BOOL displayingPlaceholder; // @synthesize displayingPlaceholder=_displayingPlaceholder;
@property(nonatomic) long long placeholderDisplayMode; // @synthesize placeholderDisplayMode=_placeholderDisplayMode;
@property(nonatomic) CGRect placeholderImageContentsRect; // @synthesize placeholderImageContentsRect=_placeholderImageContentsRect;
@property(nonatomic) double videoAppearanceCrossfadeDuration; // @synthesize videoAppearanceCrossfadeDuration=_videoAppearanceCrossfadeDuration;
@property(copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) ISWrappedAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <PXVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)generateSnapshotImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (void)_runVisibilityChangeCompletionHandler;
- (void)_setDisplayingPlaceholder:(BOOL)arg1 requestID:(long long)arg2;
- (void)_updateSubviewsVisibility;
- (void)_updateEdgeAntialiasing;
- (void)_updateContentMode;
- (void)_updateVideoView;
- (void)setPlaceholderDisplayMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

