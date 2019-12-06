//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotoLibrary/PLTilePlaceholderView-Protocol.h>

@class PLRoundProgressView, UIButton;
@protocol PLPhotoTileCloudPlaceholderViewDelegate;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView>
{
    PLRoundProgressView *_loadingIndicatorView;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    BOOL _indicatorIsVisible;
    BOOL _showingError;
    BOOL _showingLoading;
    CGRect _imageRect;
    BOOL _toolbarVisible;
    double _lastViewPhaseChangeDate;
    id <PLPhotoTileCloudPlaceholderViewDelegate> _delegate;
}

- (void)layoutSubviews;
- (void)setImageRect:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_retryDownload;
- (void)setRetryDelegate:(id)arg1;
- (void)setToolbarVisible:(BOOL)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

