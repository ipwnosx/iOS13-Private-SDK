//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <VideosUI/VUISBIconProgressViewDelegate-Protocol.h>

@class UIImage, UIImageView, VUISBIconProgressView;

__attribute__((visibility("hidden")))
@interface VUIAppInstallView : UIView <VUISBIconProgressViewDelegate>
{
    UIImageView *_appIconImageView;
    UIView *_backgroundKnockoutView;
    id /* CDUnknownBlockType */ _completion;
    VUISBIconProgressView *_progressView;
    UIImage *_appIcon;
    double _installProgress;
}

+ (CGSize)_appIconSize;
+ (double)_appIconRadius;
+ (id)_progressMaskImage;
@property(nonatomic) double installProgress; // @synthesize installProgress=_installProgress;
@property(retain, nonatomic) UIImage *appIcon; // @synthesize appIcon=_appIcon;
// - (void).cxx_destruct;
- (void)setWaiting;
- (void)finishInstallationWithCompletion:(CDUnknownBlockType)arg1;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (id)initWithFrame:(CGRect)arg1;

@end

