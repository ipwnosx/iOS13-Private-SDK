//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIBarButtonItem, UIColor, UIImage, _UIBarButtonItemAppearanceStorage;

@protocol _UIButtonBarAppearanceDelegate 
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin;
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
@property(readonly, nonatomic) _Bool centerTextButtons;
@property(readonly, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) _Bool barWantsLetterpress;
@property(readonly, nonatomic) _Bool isRTL;
@property(readonly, nonatomic) _Bool compactMetrics;
@property(readonly, nonatomic) long long barType;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage;
- (double)absorptionForItem:(UIBarButtonItem *)arg1;
- (UIImage *)backIndicatorMaskImage;
- (UIImage *)backIndicatorImage;
- (unsigned long long)edgesPaddingBarButtonItem:(UIBarButtonItem *)arg1;
@end
