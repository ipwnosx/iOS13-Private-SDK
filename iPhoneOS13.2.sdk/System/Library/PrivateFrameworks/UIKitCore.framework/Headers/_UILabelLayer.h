//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

__attribute__((visibility("hidden")))
@interface _UILabelLayer : CALayer
{
    _UILabelContentLayer *_contentLayer;
    BOOL _contentInsetsValid;
    UIEdgeInsets _contentInsets;
}

// - (void).cxx_destruct;
- (void)setContentsScale:(double)arg1;
- (void)setContentsMultiplyColor:(CGColorRef)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setContentsGravity:(id)arg1;
- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(BOOL)arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)_clearContents;
- (void)_updateContentLayer;
- (void)invalidateContentInsets;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)_setFrameOrBounds:(CGRect)arg1 settingAction:(CDUnknownBlockType)arg2;
- (void)layoutSublayers;
- (void)updateContentLayerSize;
- (void)updateContentInsets;

@end

