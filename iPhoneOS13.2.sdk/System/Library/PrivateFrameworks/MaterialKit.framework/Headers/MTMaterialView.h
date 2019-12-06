//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MaterialKit/MTVisualStylingProviding-Protocol.h>

@class MTMaterialLayer, NSBundle, NSDictionary, NSHashTable, NSMutableDictionary, NSString, UIViewFloatAnimatableProperty;

@interface MTMaterialView : UIView <NSCopying, MTVisualStylingProviding>
{
    BOOL _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
    BOOL _recipeDynamic;
    NSMutableDictionary *_cmVisualStyleCategoriesToProviders;
    NSDictionary *_recipeNamesByTraitCollection;
    NSBundle *_recipeBundle;
    NSHashTable *_observers;
    UIView *_highlightView;
    BOOL _needsLayoutOnMoveToWindow;
    BOOL _highlighted;
    NSString *_groupNameBase;
    long long _recipe;
    long long _configuration;
    UIViewFloatAnimatableProperty *_backdropFloatAnimatableProperty;
}

+ (id)_recipeNameForTraitCollection:(id)arg1 withRecipeNamesByTraitCollection:(id)arg2;
+ (Class)layerClass;
+ (id)newDefaultHighlightAnimator;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;
+ (void)initialize;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(CDUnknownBlockType)arg5;
+ (id)materialViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(CDUnknownBlockType)arg5;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
+ (id)staticMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;
@property(retain, nonatomic, getter=_backdropFloatAnimatableProperty) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty; // @synthesize backdropFloatAnimatableProperty=_backdropFloatAnimatableProperty;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property(nonatomic) long long recipe; // @synthesize recipe=_recipe;
@property(copy, nonatomic) NSString *groupNameBase; // @synthesize groupNameBase=_groupNameBase;
// - (void).cxx_destruct;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_recipeNameForCurrentTraitCollection;
- (void)_reduceTransparencyStatusDidChange;
- (void)_reduceMotionStatusDidChange;
- (void)_updateGroupNameIfNecessary;
- (id)_groupNameWithBase:(id)arg1;
- (void)_setRecipeName:(id)arg1 withWeighting:(double)arg2;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (BOOL)addCompletionForCurrentAnimation:(CDUnknownBlockType)arg1 forMaterialLayer:(id)arg2;
- (BOOL)isManagingInterpolationForMaterialLayer:(id)arg1;
- (BOOL)isManagingOpacityForMaterialLayer:(id)arg1;
- (BOOL)managesWeightingForMaterialLayer:(id)arg1;
- (void)didMoveToWindow;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)_updateRecipeNameIfNeeded;
- (void)_setupOrInvalidateAlphaTransformer;
- (void)_invalidateAlphaTransformer;
- (void)_setupAlphaTransformer;
- (void)prune;
@property(nonatomic) double weighting;
@property(copy, nonatomic) NSString *groupName;
- (void)dealloc;
- (id)_initWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(CDUnknownBlockType)arg5;
- (id)_initWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(CDUnknownBlockType)arg4;
- (id)_initWithCoreMaterialRecipe:(id)arg1 fromBundle:(id)arg2 coreMaterialConfiguration:(id)arg3 initialWeighting:(double)arg4 scaleAdjustment:(CDUnknownBlockType)arg5;
- (id)init;
@property(nonatomic, getter=isContentReplacedWithSnapshot) BOOL contentReplacedWithSnapshot;
- (id)newShadowViewWithCaptureOnlyMaterialView:(BOOL)arg1;
- (id)newShadowView;
// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) BOOL ignoresScreenClip;
@property(nonatomic, getter=isRecipeDynamic) BOOL recipeDynamic;
@property(nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
@property(nonatomic) BOOL useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property(nonatomic) BOOL shouldCrossfade;
@property(copy, nonatomic) id /* CDUnknownBlockType */ backdropScaleAdjustment;
@property(nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property(nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property(nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
@property(copy, nonatomic) NSString *recipeName;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)arg1;
@property(readonly, nonatomic, getter=_materialLayer) MTMaterialLayer *materialLayer;
@property(nonatomic) BOOL forceCrossfadeIfNecessary;
@property(nonatomic) BOOL shouldCrossfadeIfNecessary;

@end

