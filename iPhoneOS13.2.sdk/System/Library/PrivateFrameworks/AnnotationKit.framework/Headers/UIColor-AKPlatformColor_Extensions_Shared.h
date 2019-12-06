//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface UIColor (AKPlatformColor_Extensions_Shared)
+ (CGColorSpaceRef)_getCIELABColorSpace;
+ (id)im_colorWithSRGBDescription:(id)arg1;
+ (id)akColorPickerPurple;
+ (id)akColorPickerBlue;
+ (id)akColorPickerGreen;
+ (id)akColorPickerYellow;
+ (id)akColorPickerOrange;
+ (id)akColorPickerRed;
+ (id)akBubbleFillColor;
+ (id)akSystemPurpleColor;
+ (id)akSystemPinkColor;
+ (id)akSystemBlueColor;
+ (id)akSystemGreenColor;
+ (id)akSystemYellowColor;
+ (id)akSystemRedColor;
+ (id)akButtonHoverStateColor;
+ (id)akRowSeparatorColor;
+ (id)akBoxBorderColor;
+ (id)akColorWithCIColor:(id)arg1;
+ (id)akColorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)akColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)getL:(double )arg1 a:(double )arg2 b:(double )arg3;
- (double)akDistanceFromColor:(id)arg1;
- (id)akBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)colorUsingSRGBColorSpace;
- (BOOL)akHasHueEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (BOOL)akIsEqualToColor:(id)arg1;
- (double)akAlphaComponent;
@end

