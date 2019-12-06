//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>



#import <NanoTimeKitCompanion/NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate-Protocol.h>

@class CLKUIQuadView, CLKUIResourceProviderKey, NSMapTable, NSMutableSet, NTKColorCircularUtilitarianFaceViewComplicationFactory, NTKRoundedCornerOverlayView, UIColor;

@interface NTKKaleidoscopeFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate>
{
    CLKUIQuadView *_quadView;
    NTKRoundedCornerOverlayView *_cornerView;
    NTKColorCircularUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    double _crownOffset;
    unsigned int _frameCounter;
    double _contentScale;
        UIColor *_complicationPlatterColor;
    double _lastComplicationUpdateTime;
    CGColorSpaceRef _extendedSRGBcolorSpace;
    CLKUIResourceProviderKey *_resourceProviderKey;
    float _crownTurnsPerRotation;
    double _dayDuration;
    NSMapTable *_quadPathfinderMapTable;
    NSMutableSet *_loadedAssets;
    NSUInteger _currentAsset;
    NSUInteger _currentStyle;
}

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
@property(nonatomic) NSUInteger currentStyle; // @synthesize currentStyle=_currentStyle;
@property(nonatomic) NSUInteger currentAsset; // @synthesize currentAsset=_currentAsset;
// - (void).cxx_destruct;
- (id)_snapshotWithAsset:(NSUInteger)arg1 style:(NSUInteger)arg2 size:(CGSize)arg3;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)_swatchForAsset:(NSUInteger)arg1;
- (BOOL)_wantsConstantSpeedZoom;
- (id)_quadWithStyle:(NSUInteger)arg1 asset:(NSUInteger)arg2;
- (id)_textureChromaForAsset:(NSUInteger)arg1;
- (id)_textureLumaForAsset:(NSUInteger)arg1;
- (id)_pathfinderForAsset:(NSUInteger)arg1;
- (id)_imageForAsset:(NSUInteger)arg1;
- (void)_updateComplications;
- (void)_updatePathForTime:(double)arg1;
- (id)_updatePathForQuadView:(id)arg1 time:(double)arg2 crownOffset:(double)arg3;
- (void)_updateRotationForQuadView:(id)arg1 time:(double)arg2 crownOffset:(double)arg3;
- (void)_updateUserContent;
- (float)_crownTurnsForStyle:(NSUInteger)arg1;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_contentScaleForEditMode:(long long)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_handAlphaForEditMode:(long long)arg1;
- (void)_updateDayDuration;
- (id)resourceProviderKey;
- (id)provideAtlasBacking:(id)arg1;
- (BOOL)_supportsUnadornedSnapshot;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (NSUInteger)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (NSUInteger)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (BOOL)_isEditOptionFullscreen:(id)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (double)_verticalPaddingForStatusBar;
- (CGPoint)_contentCenterOffset;
- (long long)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg1 slot:(id)arg2;
- (id)_pickerMaskForSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double )arg1 centerAngle:(double )arg2 maxAngularWidth:(double )arg3 circleCenter:(CGPoint )arg4 interior:(BOOL )arg5 forSlot:(id)arg6;
- (BOOL)_slotSupportsCurvedText:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)_configureTimeView:(id)arg1;
- (double)_kaleidoscopeTimeForAsset:(NSUInteger)arg1;
- (void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (BOOL)slotUsesCurvedText:(id)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_updateWithAsset:(NSUInteger)arg1;
- (void)_loadCurrentQuad;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

