//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKSpendingSummary, UIImage, UIImageView;

@interface PKSpendingSummaryChartBarView : UIView
{
    UIImageView *_bar;
    UIImageView *_placeholder;
    UIImage *_image;
    UIImage *_placeholderImage;
    double _barHeight;
    double _maximumHeight;
    PKSpendingSummary *_summary;
    id /* CDUnknownBlockType */ _imageCompletion;
    _Atomic NSUInteger _generationCounter;
    BOOL _showPlaceholder;
    BOOL _blurDisabled;
    double _minimumHeight;
}

@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic, getter=isBlurDisabled) BOOL blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic) BOOL showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
// - (void).cxx_destruct;
- (void)_updatePlaceholderImage;
- (void)_updatePlaceholder;
- (void)_generateImageForSummary:(id)arg1 barHeight:(double)arg2 maximumHeight:(double)arg3 synchronous:(BOOL)arg4;
- (void)_callCompletion;
- (void)_updateImageWithImage:(id)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)configureWithSummary:(id)arg1 maximumHeight:(double)arg2 barHeight:(double)arg3 synchronous:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithFrame:(CGRect)arg1;

@end

