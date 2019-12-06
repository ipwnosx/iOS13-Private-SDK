//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView
{
    UIView<NTKColoringView> *_label;
    double _labelScale;
}

// - (void).cxx_destruct;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (void)_setLayoutTransformToView:(id)arg1 origin:(CGPoint)arg2 centerScale:(double)arg3;
- (void)_layoutLabel;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (id)_labelFont;
- (id)_createLabelViewWithFont:(id)arg1;
- (id)label;
- (id)init;

@end

