//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>
{
    BOOL _allowsAutomaticFlash;
    BOOL _unavailable;
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
}

@property(readonly, nonatomic) UIImageView *_warningIndicatorView; // @synthesize _warningIndicatorView=__warningIndicatorView;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic, getter=isUnavailable) BOOL unavailable; // @synthesize unavailable=_unavailable;
@property(nonatomic) BOOL allowsAutomaticFlash; // @synthesize allowsAutomaticFlash=_allowsAutomaticFlash;
// - (void).cxx_destruct;
- (id)imageForAccessibilityHUD;
- (double)collapsedSelectedLabelHorizontalMargin;
- (BOOL)shouldIgnoreMenuInteraction;
- (BOOL)wantsSelectedItemToBeVisible;
- (void)reloadData;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (long long)indexForMode:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (void)setAllowsAutomaticFlash:(BOOL)arg1 needsReloadData:(BOOL)arg2;
@property(nonatomic) long long flashMode;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMFlashButtonInitialization;

@end

