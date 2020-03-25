//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView
{
    NTKColoringLabel *_firstLineLabel;
    NTKColoringLabel *_secondLineLabel;
}

+ (BOOL)supportsComplicationFamily:(long long)arg1;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
// - (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_updateLabelsForFontChange;
- (void)setUsesMultiColor:(BOOL)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)_updateLabelColors;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end
