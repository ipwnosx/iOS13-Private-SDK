//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class PXMomentShareStatusPresentation, UILabel, UIProgressView, UIVisualEffectView;
@protocol PXCMMProgressBannerViewLayoutDelegate;

@interface PXCMMProgressBannerView : UIView <PXChangeObserver>
{
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    UIVisualEffectView *_visualEffectView;
    UILabel *_activityLabel;
    UILabel *_pauseLabel;
    UIProgressView *_progressView;
    double _layoutHeight;
    id <PXCMMProgressBannerViewLayoutDelegate> _layoutDelegate;
}

@property(readonly, nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(nonatomic) __weak id <PXCMMProgressBannerViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateFonts;
- (CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_updateProgress;
- (void)_updatePauseTitle;
- (void)_updateActivityTitle;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end
