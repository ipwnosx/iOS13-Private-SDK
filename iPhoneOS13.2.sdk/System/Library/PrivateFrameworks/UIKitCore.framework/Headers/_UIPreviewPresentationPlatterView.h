//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class _UIPreviewPresentationEffectView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationPlatterView : UIView
{
    BOOL _dropShadowEnabled;
    UIView *_contentView;
    _UIPreviewPresentationEffectView *_contentEffectView;
    _UIPreviewPresentationEffectView *_contentClipView;
    UIView *_contentTransformView;
    UIView *_contentShadowView;
    CGSize _contentSize;
    CGSize _contentClippingSize;
}

@property(retain, nonatomic) UIView *contentShadowView; // @synthesize contentShadowView=_contentShadowView;
@property(retain, nonatomic) UIView *contentTransformView; // @synthesize contentTransformView=_contentTransformView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *contentClipView; // @synthesize contentClipView=_contentClipView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *contentEffectView; // @synthesize contentEffectView=_contentEffectView;
@property(nonatomic, getter=isDropShadowEnabled) BOOL dropShadowEnabled; // @synthesize dropShadowEnabled=_dropShadowEnabled;
@property(nonatomic) CGSize contentClippingSize; // @synthesize contentClippingSize=_contentClippingSize;
@property(nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property(nonatomic) double blurRadius; // @dynamic blurRadius;
- (id)initWithContentView:(id)arg1;

@end

