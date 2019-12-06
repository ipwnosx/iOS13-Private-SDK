//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAFilter, CAShapeLayer, NSMutableSet, UIActivityIndicatorView, UIColor, UIImage, _UIBackdropView;

@interface PKContinuousButton : UIButton
{
//     CDStruct_e6a35582 _configuration;
    UIImage *_image;
    NSMutableSet *_disabledImageStates;
    UIColor *_overrideTitleColor;
    CAFilter *_highlightFilter;
    UIColor *_normalInputColor;
    UIColor *_highlightInputColor;
    UIColor *_selectedInputColor;
    UIColor *_disabledInputColor;
    UIColor *_appliedInputColor;
    CAShapeLayer *_layer;
    _UIBackdropView *_backdropView;
    long long _backdropStyle;
    BOOL _updatingBackdropSettings;
    BOOL _highlighted;
    BOOL _selected;
    BOOL _enabled;
    CGSize _boundsSize;
    UIActivityIndicatorView *_activityIndicatorView;
    UIColor *_activityIndicatorColor;
    BOOL _showSpinner;
    BOOL _blurDisabled;
}

+ (id)_filterInputColorForEffect:(long long)arg1;
+ (Class)layerClass;
@property(nonatomic) BOOL blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
// - (void).cxx_destruct;
- (void)_updateFilter;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_createHighlightFilterIfNecessary;
- (void)_updateTitleColor;
- (void)_updateColor;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_updateBackdropSettings;
- (void)updateImageView;
- (void)setImageEnabled:(BOOL)arg1 forState:(NSUInteger)arg2;
- (void)updateWithImage:(id)arg1;
- (void)updateActivityIndicatorColorWithColor:(id)arg1;
- (void)updateTitleColorWithColor:(id)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tintColorDidChange;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
// - (id)initWithConfiguration:(CDStruct_e6a35582)arg1;
- (id)initWithCornerRadius:(double)arg1 effect:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end

