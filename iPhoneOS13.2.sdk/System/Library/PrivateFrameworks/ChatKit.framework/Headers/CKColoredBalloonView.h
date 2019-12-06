//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView, UIView;
@protocol CKGradientReferenceView;

@interface CKColoredBalloonView : CKBalloonView
{
    BOOL _color;
    BOOL _wantsGradient;
    CKBalloonImageView *_mask;
    CKBalloonImageView *_effectViewMask;
    CKGradientView *_gradientView;
    CGRect _gradientOverrideFrame;
}

@property(retain, nonatomic) CKGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) CKBalloonImageView *effectViewMask; // @synthesize effectViewMask=_effectViewMask;
@property(retain, nonatomic) CKBalloonImageView *mask; // @synthesize mask=_mask;
@property(nonatomic) CGRect gradientOverrideFrame; // @synthesize gradientOverrideFrame=_gradientOverrideFrame;
@property(nonatomic) BOOL wantsGradient; // @synthesize wantsGradient=_wantsGradient;
@property(nonatomic) BOOL color; // @synthesize color=_color;
// - (void).cxx_destruct;
- (void)setEffectViewMaskImage:(id)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
//  (struct CKBalloonDescriptor_t)balloonDescriptor;
//  (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (void)updateWantsGradient;
@property(readonly, nonatomic) BOOL hasBackground;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
- (id)overlayColor;
- (BOOL)needsGroupOpacity;
- (void)setCanUseOpaqueMask:(BOOL)arg1;
- (void)setHasTail:(BOOL)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id)description;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;

@end

