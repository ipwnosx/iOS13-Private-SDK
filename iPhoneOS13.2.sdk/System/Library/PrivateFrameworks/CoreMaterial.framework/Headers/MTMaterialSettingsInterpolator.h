//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTColor, NSArray, NSString;
@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialSettingsInterpolator : NSObject
{
    double _previousWeighting;
    double _weighting;
    id <MTRecipeMaterialSettingsProviding> _finalSettings;
    NSString *_finalConfiguration;
    id <MTRecipeMaterialSettingsProviding> _initialSettings;
    NSString *_initialConfiguration;
    id /* CDUnknownBlockType */ _blurRadiusTransformer;
}

+ (id)_filteringProtocolGetterNames;
@property(copy, nonatomic) id /* CDUnknownBlockType */ blurRadiusTransformer; // @synthesize blurRadiusTransformer=_blurRadiusTransformer;
@property(copy, nonatomic) NSString *initialConfiguration; // @synthesize initialConfiguration=_initialConfiguration;
@property(retain, nonatomic) id <MTRecipeMaterialSettingsProviding> initialSettings; // @synthesize initialSettings=_initialSettings;
@property(copy, nonatomic) NSString *finalConfiguration; // @synthesize finalConfiguration=_finalConfiguration;
@property(retain, nonatomic) id <MTRecipeMaterialSettingsProviding> finalSettings; // @synthesize finalSettings=_finalSettings;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
// - (void).cxx_destruct;
- (id)description;
- (id)_backdropScaleWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_colorMatrixColorWithSettings:(id)arg1 configuration:(id)arg2 alpha:(double)arg3;
- (id)_zoomWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_tintAlphaWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_colorMatrixWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_brightnessWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_saturationWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_luminanceAmountWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_blurRadiusWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_filteringProperty:(id)arg1 withSettings:(id)arg2 configuration:(id)arg3;
- (BOOL)_isTintEnabledWithSettings:(id)arg1 configuration:(id)arg2;
- (BOOL)_isBackdropRequiredWithSettings:(id)arg1 configuration:(id)arg2;
- (BOOL)_isBackdropRequiredWithSubSettings:(id)arg1;
- (id)_subSettingsForRecipeSettings:(id)arg1 configuration:(id)arg2;
- (id)_luminanceInputValues;
- (id)_colorWithGetterBlock:(CDUnknownBlockType)arg1;
- (double)_floatPropertyValueForProperty:(id)arg1;
- (double)_floatPropertyValueForProperty:(id)arg1 withTransformer:(CDUnknownBlockType)arg2;
- (id)_propertyValueForProperty:(id)arg1 withTransformer:(CDUnknownBlockType)arg2;
- (BOOL)_isPropertyEnabled:(id)arg1 consideringWeighting:(BOOL)arg2;
@property(readonly, copy, nonatomic) MTColor *tintColor;
@property(readonly, nonatomic, getter=isBlurAtEnd) BOOL blurAtEnd;
@property(readonly, copy, nonatomic) NSString *blurInputQuality;
@property(readonly, nonatomic) double backdropScale;
@property(readonly, nonatomic) double zoom;
@property(readonly, nonatomic) double tintAlpha;
// @property(readonly, nonatomic) struct CAColorMatrix colorMatrix;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, copy, nonatomic) NSArray *luminanceValues;
@property(readonly, nonatomic) double luminanceAmount;
@property(readonly, nonatomic) double blurRadius;
@property(readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property(readonly, nonatomic, getter=isTintEnabled) BOOL tintEnabled;
@property(readonly, nonatomic, getter=isColorMatrixEnabled) BOOL colorMatrixEnabled;
@property(readonly, nonatomic, getter=isBrightnessEnabled) BOOL brightnessEnabled;
@property(readonly, nonatomic, getter=isSaturationEnabled) BOOL saturationEnabled;
@property(readonly, nonatomic, getter=isLuminanceEnabled) BOOL luminanceEnabled;
@property(readonly, nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property(readonly, nonatomic, getter=isOverlay) BOOL overlay;
@property(readonly, nonatomic, getter=isBackdropRequiredEver) BOOL backdropRequiredEver;
@property(readonly, nonatomic, getter=isBackdropRequiredFinally) BOOL backdropRequiredFinally;
@property(readonly, nonatomic, getter=isBackdropRequiredInitially) BOOL backdropRequiredInitially;
- (void)finalizeWeighting;
@property(readonly, nonatomic, getter=isWeightingChanging) BOOL weightingChanging;
- (id)initWithSettings:(id)arg1 configuration:(id)arg2;

@end

