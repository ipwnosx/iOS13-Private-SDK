//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PencilKit/PKPaletteColorSwatchProperties-Protocol.h>

@class CAShapeLayer, PKSwatchColor;

@interface PKPaletteColorSwatch : UIView <PKPaletteColorSwatchProperties>
{
    BOOL _selected;
    BOOL _showsSelectionHighlight;
    PKSwatchColor *_swatchColor;
    long long _colorUserInterfaceStyle;
    UIView *_colorBackgroundView;
    CAShapeLayer *_selectionRingMaskLayer;
    UIView *_colorBulletView;
}

@property(retain, nonatomic) UIView *colorBulletView; // @synthesize colorBulletView=_colorBulletView;
@property(retain, nonatomic) CAShapeLayer *selectionRingMaskLayer; // @synthesize selectionRingMaskLayer=_selectionRingMaskLayer;
@property(retain, nonatomic) UIView *colorBackgroundView; // @synthesize colorBackgroundView=_colorBackgroundView;
@property(nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property(nonatomic) BOOL showsSelectionHighlight; // @synthesize showsSelectionHighlight=_showsSelectionHighlight;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) PKSwatchColor *swatchColor; // @synthesize swatchColor=_swatchColor;
// - (void).cxx_destruct;
- (BOOL)wantsColorBulletVisible;
- (BOOL)wantsBackgroundViewColor;
- (id)newColorBackgroundView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateUI;
- (void)_updateColorBulletView;
- (void)_updateBackgroundView;
- (id)_uiColor;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateSelectionHighlight;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

