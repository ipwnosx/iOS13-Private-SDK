//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIBarButtonItem, UIColor, UIImage, _UIBarButtonItemAppearanceStorage;

@protocol _UIButtonBarAppearanceDelegate <NSObject>
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
@property(readonly, nonatomic) BOOL centerTextButtons;
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) BOOL barWantsLetterpress;
@property(readonly, nonatomic) BOOL isRTL;
@property(readonly, nonatomic) BOOL compactMetrics;
@property(readonly, nonatomic) long long barType;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage;
- (double)absorptionForItem:(UIBarButtonItem *)arg1;
- (UIImage *)backIndicatorMaskImage;
- (UIImage *)backIndicatorImage;
- (NSUInteger)edgesPaddingBarButtonItem:(UIBarButtonItem *)arg1;
@end

