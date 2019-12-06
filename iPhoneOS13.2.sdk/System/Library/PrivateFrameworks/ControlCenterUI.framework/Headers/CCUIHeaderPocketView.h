//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CCUIStatusBar, MTMaterialView, SBUIChevronView;
@protocol CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView
{
    MTMaterialView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    CCUIStatusBar *_statusBar;
    id <CCUIStatusBarDelegate> _statusBarDelegate;
    NSUInteger _mode;
    double _backgroundAlpha;
    double _contentAlpha;
    double _contentAlphaMultiplier;
    UIEdgeInsets _edgeInsets;
    CGAffineTransform _contentTransform;
}

@property(nonatomic) CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) double contentAlphaMultiplier; // @synthesize contentAlphaMultiplier=_contentAlphaMultiplier;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <CCUIStatusBarDelegate> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;
@property(readonly, nonatomic) CCUIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
// - (void).cxx_destruct;
- (void)_updateContentTransform;
- (void)_updateAlpha;
@property(nonatomic) NSUInteger chevronState; // @dynamic chevronState;
@property(nonatomic) CGAffineTransform compactScaleTransform; // @dynamic compactScaleTransform;
@property(readonly, nonatomic) CGRect contentBounds; // @dynamic contentBounds;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

