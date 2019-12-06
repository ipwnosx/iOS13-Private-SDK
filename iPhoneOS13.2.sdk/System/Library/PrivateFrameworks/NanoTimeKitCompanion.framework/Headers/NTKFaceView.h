//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



#import <NanoTimeKitCompanion/NTKClockHardwareInput-Protocol.h>
#import <NanoTimeKitCompanion/NTKClockIconZoomAnimator-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationDisplayWrapperViewAnimationDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKContainerViewLayoutDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravelModuleViewTapClient-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>
#import <NanoTimeKitCompanion/PUICCrownInputSequencerDelegate-Protocol.h>

@class CAFilter, CLKDevice, NSDate, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NTKClockIconView, NTKContainerView, NTKExtraLargeTimeView, NTKFaceEditView, NTKTimeTravelModuleView, UIColor, UIImage, UIImageView;
@protocol NTKFaceViewComplicationFactory, NTKFaceViewDelegate, NTKTimeView;

@interface NTKFaceView : UIView <PUICCrownInputSequencerDelegate, NTKTimeTravelModuleViewTapClient, NTKContainerViewLayoutDelegate, NTKComplicationDisplayWrapperViewAnimationDelegate, NTKClockIconZoomAnimator, NTKTimeView, NTKClockHardwareInput>
{
    double _accumulatedTimeTravelEntryRotation;
    NSTimer *_accumulateTimeTravelEntryRotationTimeoutTimer;
    NSTimer *_fastCrownModeTimeoutTimer;
    BOOL _fastCrownMode;
    BOOL _transitioningBetweenLiveAndScrubbing;
    BOOL _wasScrubbingAtStartOfTransition;
    BOOL _canHandleHardwareEvents;
    NSDate *_timeTravelEnterDate;
    NSDate *_scrubDate;
    NTKTimeTravelModuleView *_timeTravelModuleView;
    UIView *_timeTravelCaptionView;
    UIImage *_timeTravelCaptionImage;
    double _timeTravelDistanceToYesterdayStart;
    double _timeTravelDistanceToTomorrowEnd;
    NSDate *_yesterdayStart;
    NSDate *_tomorrowEnd;
    NSTimer *_crownIdleTimer;
    double _lastCrownOffset;
    NSDate *_aggdTimeTravelSessionStart;
    double _aggdTimeTravelMaximumOffset;
    BOOL _statusIconVisible;
    NTKExtraLargeTimeView *_sensitiveUIShieldView;
    NSMutableDictionary *_complicationDisplayWrappers;
    NSMutableDictionary *_complicationLayouts;
    NSMutableDictionary *_complicationPickerViews;
    NSMutableDictionary *_editConfigurations;
    NSMutableSet *_hiddenComplicationSlots;
    NSString *_timeTravelCaptionKey;
    CGSize _boundsSizeForComputedLayouts;
    NTKContainerView *_foregroundContainerView;
    NSDate *_overrideDate;
    BOOL _needsRender;
    BOOL _needsImageQueueDiscardOnRender;
    BOOL _removedFromWindowDuringThisTransaction;
    BOOL _unadornedSnapshotRemoved;
    float _complicationEditingSaturationValue;
    CAFilter *_complicationEditingSaturationFilter;
    BOOL _shouldShowUnsnapshotableContent;
    BOOL _showsCanonicalContent;
    BOOL _showContentForUnadornedSnapshot;
    BOOL _showsLockedUI;
    BOOL _zooming;
    BOOL _everyComplicationHidden;
    BOOL _frozen;
    BOOL _slow;
    BOOL _orbing;
    BOOL _complicationsShowEditingContent;
    BOOL _timeScrubbing;
    BOOL _editing;
    UIView *_contentView;
    UIView *_complicationContainerView;
    UIView *_rootContainerView;
    UIColor *_alternateComplicationColor;
    UIColor *_complicationColor;
    UIColor *_interpolatedComplicationColor;
    long long _faceStyle;
    CLKDevice *_device;
    NSString *_clientIdentifier;
    long long _dataMode;
    id <NTKFaceViewDelegate> _delegate;
    NTKFaceEditView *_editView;
    UIView *_unadornedSnapshotView;
    UIImageView *_switcherSnapshotView;
    NTKClockIconView *_zoomingIconView;
    double _minIconDiameter;
    double _maxIconDiameter;
    id <NTKFaceViewComplicationFactory> _complicationFactory;
    id /* CDUnknownBlockType */ _rampBrightnessWithDurationBlock;
    NSString *_resourceDirectory;
    NSString *_selectedComplicationSlot;
    long long _detailMode;
    UIView<NTKTimeView> *_timeView;
    long long _fromEditMode;
    long long _toEditMode;
    double _editModeTransitionFraction;
}

+ (long long)_numberOfDetailModes;
+ (long long)numberOfDetailModesForFaceStyle:(long long)arg1;
+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (void)_prewarmForDevice:(id)arg1;
+ (id)swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (long long)uiSensitivity;
+ (id)newFaceViewOfStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
+ (id)newFaceViewOfStyle:(long long)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) double editModeTransitionFraction; // @synthesize editModeTransitionFraction=_editModeTransitionFraction;
@property(readonly, nonatomic) long long toEditMode; // @synthesize toEditMode=_toEditMode;
@property(readonly, nonatomic) long long fromEditMode; // @synthesize fromEditMode=_fromEditMode;
@property(readonly, nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView<NTKTimeView> *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) long long detailMode; // @synthesize detailMode=_detailMode;
@property(readonly) BOOL timeScrubbing; // @synthesize timeScrubbing=_timeScrubbing;
@property(retain, nonatomic) NSString *selectedComplicationSlot; // @synthesize selectedComplicationSlot=_selectedComplicationSlot;
@property(nonatomic) BOOL complicationsShowEditingContent; // @synthesize complicationsShowEditingContent=_complicationsShowEditingContent;
@property(readonly, nonatomic) BOOL orbing; // @synthesize orbing=_orbing;
@property(nonatomic, getter=isSlow) BOOL slow; // @synthesize slow=_slow;
@property(nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
@property(nonatomic, getter=isEveryComplicationHidden) BOOL everyComplicationHidden; // @synthesize everyComplicationHidden=_everyComplicationHidden;
@property(copy, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(copy, nonatomic) id /* CDUnknownBlockType */ rampBrightnessWithDurationBlock; // @synthesize rampBrightnessWithDurationBlock=_rampBrightnessWithDurationBlock;
@property(retain, nonatomic) id <NTKFaceViewComplicationFactory> complicationFactory; // @synthesize complicationFactory=_complicationFactory;
@property(readonly, nonatomic) double maxIconDiameter; // @synthesize maxIconDiameter=_maxIconDiameter;
@property(readonly, nonatomic) double minIconDiameter; // @synthesize minIconDiameter=_minIconDiameter;
@property(readonly, nonatomic) NTKClockIconView *zoomingIconView; // @synthesize zoomingIconView=_zoomingIconView;
@property(readonly, nonatomic) BOOL zooming; // @synthesize zooming=_zooming;
@property(retain, nonatomic) UIImageView *switcherSnapshotView; // @synthesize switcherSnapshotView=_switcherSnapshotView;
@property(retain, nonatomic) UIView *unadornedSnapshotView; // @synthesize unadornedSnapshotView=_unadornedSnapshotView;
@property(retain, nonatomic) NTKFaceEditView *editView; // @synthesize editView=_editView;
@property(nonatomic) __weak id <NTKFaceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(nonatomic) BOOL showContentForUnadornedSnapshot; // @synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot;
@property(nonatomic) BOOL showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) BOOL shouldShowUnsnapshotableContent; // @synthesize shouldShowUnsnapshotableContent=_shouldShowUnsnapshotableContent;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long faceStyle; // @synthesize faceStyle=_faceStyle;
@property(retain, nonatomic) UIColor *interpolatedComplicationColor; // @synthesize interpolatedComplicationColor=_interpolatedComplicationColor;
@property(retain, nonatomic) UIColor *complicationColor; // @synthesize complicationColor=_complicationColor;
@property(retain, nonatomic) UIColor *alternateComplicationColor; // @synthesize alternateComplicationColor=_alternateComplicationColor;
@property(retain, nonatomic) UIView *rootContainerView; // @synthesize rootContainerView=_rootContainerView;
@property(retain, nonatomic) UIView *complicationContainerView; // @synthesize complicationContainerView=_complicationContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *foregroundContainerView; // @synthesize foregroundContainerView=_foregroundContainerView;
// - (void).cxx_destruct;
- (id)interpolatedColorForView:(id)arg1;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_setComplicationEditingSaturationValue:(float)arg1;
- (void)_updateSaturationForComplicationEditing;
- (void)_addSaturationFilterToViews:(id)arg1;
- (id)_allViewsWithComplicationEditingDesaturationFilter;
- (void)_resetSequencerBoundaries;
- (void)_prepareScrubbingSequencerBoundaries;
- (BOOL)_handlePhysicalButton:(NSUInteger)arg1 event:(NSUInteger)arg2;
- (BOOL)_wheelChangedWithEvent:(id)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (UIEdgeInsets)timeTravelModuleTouchInsets;
- (void)performTimeTravelModuleTapAction;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (CGPoint)_timeTravelStatusModuleCenter;
- (BOOL)_wantsTimeTravelStatusModule;
- (void)applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endScrubbingAnimated:(BOOL)arg1;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (double)_timeTravelCaptionLabelMaxWidth;
- (id)_createTimeTravelCaptionImage;
- (id)_timeTravelCaptionCacheKey;
- (id)_timeTravelCaptionAttributedText;
- (id)_timeTravelCaptionFontSizeOverrides;
- (id)_baseTimeTravelCaptionImageNameForEnglishOnly;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startScrubbingAnimated:(BOOL)arg1;
- (void)_setupTimeTravel;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (BOOL)_wantsDimWithDesaturationFilterDuringComplicationEditing;
- (id)_complicationContainerViewForSlot:(id)arg1;
- (void)_layoutComplicationViewWithWrapper:(id)arg1 forSlot:(id)arg2;
- (void)_layoutComplicationViewForSlot:(id)arg1;
- (void)_layoutComplicationViews;
- (id)_layoutRuleForComplicationSlot:(id)arg1 withOverride:(long long)arg2 inEditMode:(long long)arg3;
- (void)_getKeylineFrame:(CGRect )arg1 padding:(UIEdgeInsets )arg2 forComplicationSlot:(id)arg3 selected:(BOOL)arg4;
- (UIEdgeInsets)_keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1;
- (CGSize)_maxSizeForComplicationSlot:(id)arg1 layoutOverride:(long long)arg2;
- (void)_updateMaxSizeForDisplayWrapper:(id)arg1 slot:(id)arg2;
- (void)_updateComplicationMaxSize;
- (CGAffineTransform)_displayTransformForComplicationSlot:(id)arg1;
- (CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2;
- (double)_alphaForComplicationSlot:(id)arg1 inEditOption:(id)arg2 ofEditMode:(long long)arg3;
- (void)_setTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_updateTimeOffset;
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)_didLayoutComplicationViews;
@property(readonly, nonatomic) double alphaForDimmedState;
- (void)complicationDisplayWrapperView:(id)arg1 updateCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(BOOL)arg4 animationType:(NSUInteger)arg5 animationDuration:(double)arg6 animationFraction:(float)arg7;
- (BOOL)complicationDisplayWrapperView:(id)arg1 shouldStartCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(BOOL)arg4 animationType:(NSUInteger)arg5;
- (void)_updateStatusIconVisibility;
- (void)prepareForStatusChange:(BOOL)arg1;
- (double)horizontalPaddingForStatusBar;
- (double)verticalPaddingForStatusBar;
- (BOOL)wantsStatusBarIconShadow;
- (BOOL)wantsStatusBarHidden;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (void)_prepareForSnapshotting;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (NSUInteger)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_defaultKeylineViewForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)hideAppropriateComplicationsForCurrentConfiguration;
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)_teardownComplicationViewsIfNeeded;
- (void)_setupComplicationViewsIfHidden;
- (void)setComplicationHidden:(BOOL)arg1 atSlot:(id)arg2;
- (BOOL)complicationIsHiddenAtSlot:(id)arg1;
- (id)_complicationSlotsHiddenByCurrentConfiguration;
- (id)_complicationSlotsHiddenByEditOption:(id)arg1;
- (id)_editOptionThatHidesAllComplications;
- (id)allVisibleComplicationsForCurrentConfiguration;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (NSUInteger)_detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (BOOL)_shouldShowEditingPageDotsOnBottom;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_cleanupAfterOrb:(BOOL)arg1;
- (void)_prepareForOrb;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (BOOL)_usesCustomZoom;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)handleScreenBlanked;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_applySlow;
- (void)_applyFrozen;
- (void)_layoutForegroundContainerView;
- (BOOL)_needsForegroundContainerView;
- (void)_bringForegroundViewsToFront;
- (void)_adjustUIForBoundsChange;
- (void)_loadLayoutRules;
- (id)_detachedComplicationDisplays;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (id)_pickerMaskForSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double )arg1 centerAngle:(double )arg2 maxAngularWidth:(double )arg3 circleCenter:(CGPoint )arg4 interior:(BOOL )arg5 forSlot:(id)arg6;
- (BOOL)_slotSupportsCurvedText:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg1 slot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (BOOL)usesCustomZoom;
- (void)_becameInactiveFace;
- (void)_becameActiveFace;
- (BOOL)_wantsOpportunisticLiveFaceLoading;
- (BOOL)_canStartTimeScrubbing;
- (BOOL)_supportsTimeScrubbing;
- (double)_horizontalPaddingForStatusBar;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)arg1;
- (BOOL)_wantsStatusBarIconShadow;
- (BOOL)_wantsStatusBarHidden;
- (id)_blurSourceImage;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_applyShowsLockedUI;
- (void)_reorderSwitcherSnapshotView;
- (void)handleUnadornedSnapshotRemoved;
- (void)loadContentToReplaceUnadornedSnapshot;
- (void)_applyEditConfigurationsWithForce:(BOOL)arg1;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (BOOL)_supportsUnadornedSnapshot;
- (BOOL)supportsUnadornedSnapshot;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyShowsCanonicalContent;
- (void)_applyDataMode;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)reloadSnapshotContentViews;
- (void)invalidateComplicationLayout;
- (void)enumerateComplicationDisplayWrappersWithBlock:(CDUnknownBlockType)arg1;
- (id)complicationLayoutforSlot:(id)arg1;
- (void)layoutContainerView:(id)arg1;
- (BOOL)_isAnalog;
- (BOOL)isAnalog;
- (BOOL)shouldShowEditingPageDotsOnBottom;
- (id)blurSourceImage;
- (id)swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)applyRubberBandingFraction:(double)arg1 forComplicationSlot:(id)arg2;
- (void)applyBreathingFraction:(double)arg1 forComplicationSlot:(id)arg2;
- (NSUInteger)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (UIEdgeInsets)keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1;
- (CGRect)keylineFrameForComplicationSlot:(id)arg1 selected:(BOOL)arg2;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (id)pickerMaskForSlot:(id)arg1;
- (void)curvedComplicationCircleRadius:(double )arg1 centerAngle:(double )arg2 maxAngularWidth:(double )arg3 circleCenter:(CGPoint )arg4 interior:(BOOL )arg5 forSlot:(id)arg6;
- (BOOL)slotSupportsCurvedText:(id)arg1;
- (id)layoutRuleForComplicationSlot:(id)arg1 inState:(long long)arg2 layoutOverride:(long long)arg3;
- (CGRect)frameForComplicationPickerViewForSlot:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (id)complicationPickerViewForSlot:(id)arg1;
- (void)setComplicationPickerView:(id)arg1 forSlot:(id)arg2;
- (void)shiftSelectedComplicationSlotIfHidden;
- (id)closestVisibleComplicationSlotToSlot:(id)arg1;
- (id)closestVisibleSlotToSlot:(id)arg1 editMode:(long long)arg2;
- (id)customEditingViewController;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)presentedViewControllerShouldBecomeFirstResponder:(id)arg1;
- (void)cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (NSUInteger)detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (UIEdgeInsets)keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (CGRect)keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)configureForEditMode:(long long)arg1;
- (void)populateFaceViewEditOptionsFromFace:(id)arg1;
- (void)populateFaceViewEditOptionsFromFace:(id)arg1 forced:(BOOL)arg2;
- (void)cleanupAfterEditing;
- (void)prepareForEditing;
- (void)cleanupAfterOrb:(BOOL)arg1;
- (void)prepareForOrb;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)handleOrdinaryScreenWake;
- (void)handleWristRaiseScreenWake;
- (void)screenDidTurnOff;
- (void)screenWillTurnOn;
- (BOOL)needsImageQueueDiscardOnRender;
- (void)setNeedsRenderWithAdditionalWork:(CDUnknownBlockType)arg1;
- (void)setNeedsRender;
- (BOOL)renderIfNeeded;
- (void)layoutComplicationViews;
- (id)detachedComplicationDisplayWrapperForSlot:(id)arg1;
- (void)setDetachedComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (id)normalComplicationDisplayWrapperForSlot:(id)arg1;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)configureComplicationViewDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (long long)legacyComplicationLayoutOverrideForSlot:(id)arg1 complication:(id)arg2;
- (id)newLegacyComplicationViewForSlot:(id)arg1 family:(long long)arg2 complication:(id)arg3;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 forceApply:(BOOL)arg4;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
@property(readonly, nonatomic) NSDate *currentDisplayDate;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)_shouldHideUI;
@property(readonly, nonatomic) BOOL monochromeRichComplicationsEnabled;
- (void)_handleLocaleDidChange;
- (void)performScrollTestNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopOutputtingTime;
- (void)_outputTime:(id)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end

