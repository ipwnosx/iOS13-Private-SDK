//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPLinearGradientBrush : MFPGradientBrush
{
    CGRect mBounds;
    OITSUColor *mStartColor;
    OITSUColor *mEndColor;
}

// - (void).cxx_destruct;
- (void)createShading;
- (id)endColor;
- (id)startColor;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (void)setBounds:(CGRect)arg1;

@end

