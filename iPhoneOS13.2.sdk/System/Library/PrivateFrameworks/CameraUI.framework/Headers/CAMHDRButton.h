//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSArray, UIImageView;

@interface CAMHDRButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>
{
    BOOL _allowsAutomaticHDR;
    BOOL _allowsHDROn;
    UIImageView *__glyphView;
    NSArray *__allowedModes;
}

@property(copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes; // @synthesize _allowedModes=__allowedModes;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) BOOL allowsHDROn; // @synthesize allowsHDROn=_allowsHDROn;
@property(nonatomic) BOOL allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
// - (void).cxx_destruct;
- (id)imageForAccessibilityHUD;
- (void)reloadData;
- (BOOL)shouldAllowExpansion;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImageForAccessibilityHUD:(BOOL)arg1;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (NSUInteger)indexForMode:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 needsReloadData:(BOOL)arg2;
- (void)_updateAllowedModes;
- (void)setAllowsAutomaticHDR:(BOOL)arg1 needsReloadData:(BOOL)arg2;
@property(nonatomic) long long HDRMode;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMHDRButtonInitialization;

@end

