//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class NSArray, NSString;

@interface PXCuratedLibrarySettings : PXSettings
{
    BOOL _showPhotosLibrarySettingsAtTopLevel;
    BOOL _enablePlayMovieInYears;
    BOOL _enableSlideshowInYears;
    BOOL _launchToSavedAllPhotosScrollPosition;
    BOOL _emulateEmptyLibrary;
    BOOL _showStatusBar;
    BOOL _alwaysShowSecondaryToolbarAtBottom;
    BOOL _enableTapOnTitleToScroll;
    BOOL _enableCustomScrollToTopOrBottom;
    BOOL _useSaliency;
    BOOL _showSaliencyRects;
    BOOL _hideStatusFooter;
    BOOL _hideAnalyzingStatus;
    BOOL _enableNewAllPhotos;
    BOOL _enableAllPhotosZooming;
    BOOL _enableAllPhotosBadges;
    BOOL _enableAllPhotosInlineVideo;
    BOOL _enableAllPhotosOneColumn;
    BOOL _enableAllPhotosDecadesDensity;
    BOOL _allPhotosDisableSystemSelectGesture;
    BOOL _allPhotosTitleUseDateRange;
    BOOL _allPhotosUseSaliency;
    BOOL _allPhotosAutoCrossfade;
    BOOL _allPhotosTapsZoomsToLastIndividualDensity;
    BOOL _allPhotosDebugLayers;
    BOOL _enableAllPhotosHeaderBlur;
    BOOL _preheatThumbnailsWhenIdle;
    BOOL _forceFloatingHeaderVisible;
    BOOL _showDebugInformationInFloatingHeader;
    BOOL _enableShowAllButtons;
    BOOL _allowsCustomDateTitles;
    BOOL _showAllHighlights;
    BOOL _useCustomDaysCurationType;
    BOOL _hideRecents;
    BOOL _hideAggregations;
    BOOL _enableInlinePlayback;
    BOOL _forcePlayback;
    BOOL _playBestTimeRange;
    BOOL _enablePlaybackDiagnostics;
    BOOL _firstTimeExperienceAlwaysLogReadiness;
    BOOL _enbaleInteractiveTransition;
    BOOL _enableSnapshotMode;
    BOOL _enableRecentlyEditedAlbum;
    BOOL _exaggerateContrast;
    BOOL _forceBadgesOnAllAssets;
    BOOL _forceShowAllButtonsVisible;
    unsigned short _daysCurationType;
    double _recentHighlightsTimeInterval;
    NSString *_savedAllPhotosScrollPositionAnchorAssetIdentifier;
    double _bottomCenterSecondaryToolbarWidth;
    double _scrollSnapMaximumDecelerationFactor;
    double _scrollSnapMaximumAccelerationFactor;
    double _scrollSnapMinimumSpeed;
    double _floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
    double _floatingHeaderFadeOverDistance;
    double _floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
    double _floatingHeaderButtonsFadeOverDistance;
    double _monthsFloatingHeadersDistanceFromSafeAreaTop;
    double _monthsFloatingHeadersAppearanceCrossfadeStartDistance;
    double _monthsFloatingHeadersAppearanceCrossfadeDistance;
    double _monthsFloatingHeadersAppearanceCrossfadeDuration;
    double _monthsFloatingHeadersFadeoutDistance;
    double _monthsFloatingHeadersSubtitleAlpha;
    double _monthsInlineHeadersFadeoutOffset;
    double _monthsInlineHeadersFadeoutDistance;
    double _monthsInlineHeadersFadeoutMinimumAlpha;
    double _yearsHeadersFadeoutOffset;
    double _yearsHeadersFadeoutDistance;
    double _yearsHeadersFadeoutMinimumAlpha;
    long long _largeHeroDensity;
    double _largeHeroMinimumScore;
    double _aspectRatioForCompactPortraitYears;
    double _aspectRatioForCompactLandscapeYears;
    double _aspectRatioForRegularYears;
    long long _forcedNumberOfYearsColumn;
    double _aspectRatioForCompactPortraitMonths;
    double _spacingBetweenDays;
    double _interitemSpacingForDays;
    double _allowSpecialPanoHeaders;
    double _topInsetForVisibilityAnchoring;
    double _sectionShadowOpacity;
    double _skimmingScale;
    long long _sectionsToPrefetch;
    double _faultInDistance;
    double _faultOutPadding;
    long long _allPhotosZoomingHeaderStyle;
    double _allPhotosDecadesDensityScale;
    double _allPhotosDenseLevelMinimumScreensOfContent;
    double _allPhotosIndividualLevelMinimumScreensOfContent;
    double _allPhotosHeaderSpaceMinimumScreensOfContent;
    double _allPhotosShiftingRequiredScreensTopDistance;
    double _allPhotosZoomingHeaderTintOpacity;
    long long _allPhotosColumnsChoiceIndex;
    NSArray *_allPhotosColumns;
    double _allPhotosInteritemSpacing;
    long long _allPhotosRubberBandEffect;
    double _allPhotosZoomOutRubberBanding;
    double _allPhotosZoomInRubberBanding;
    double _allPhotosZoomDecelerationRate;
    double _allPhotosZoomSpringStiffness;
    double _allPhotosZoomSpringDamping;
    double _allPhotosRecenterSpringStiffness;
    double _allPhotosRecenterSpringDamping;
    double _allPhotosPinchSmoothingDuration;
    double _allPhotosSliderSmoothingDuration;
    long long _allPhotosSimulateMinimumPhotoCount;
    long long _allPhotosMaxPhotoCount;
    long long _allPhotosOnlyPhotosFromToday;
    long long _maxColumnsForIndividualItems;
    long long _maxColumnsForSaliency;
    long long _maxColumnsForSingleDate;
    long long _allPhotosPreheatDenserZoomLevels;
    double _allPhotosAlphaMaxAcceptableScale;
    double _allPhotosAlphaMinAcceptableCoverage;
    double _allPhotosAlphaMinTransitionDistance;
    double _allPhotosAlphaDistanceForDirectionChange;
    double _allPhotosAlphaModeTransitionDuration;
    double _allPhotosAlphaCrossfadeMinDuration;
    double _allPhotosAlphaCrossfadeMaxDuration;
    double _minimumVisibleHeightForTopMostSection;
    double _yearsHeaderGradientAlpha;
    double _yearsHeaderGradientHeight;
    double _monthsHeaderGradientAlpha;
    double _monthsHeaderGradientHeight;
    double _monthsSmallHeaderGradientHeight;
    double _daysHeaderGradientAlpha;
    double _daysHeaderGradientHeight;
    double _allPhotosHeaderGradientAlpha;
    double _allPhotosHeaderGradientHeight;
    double _statusBarGradientAlpha;
    double _statusBarGradientHeight;
    double _statusBarGradientAndStyleFadeDuration;
    long long _initialZoomLevel;
    double _nonInterestingPromotionScore;
    double _minAutoplaySuggestionScore;
    long long _maxNumberOfPlayingItems;
    double _playbackVisibleRectEdgeInset;
    double _livePhotoLoopingCrossfadeDuration;
    double _slideshowTriggerDelay;
    double _slideshowIntervalDelay;
    long long _firstTimeExperienceMaxNonProcessedHighlights;
    long long _firstTimeExperienceMaxNonProcessedAssets;
    double _defaultAnimationDuration;
    double _defaultZoomLevelTransitionAnimationDuration;
    double _defaultZoomLevelTransitionMaximumScaleAroundAnchor;
    double _nonAnchorYearsFadeSpeed;
    double _nonAnchorMonthsFadeSpeed;
    double _nonAnchorDaysFadeSpeed;
    double _transitionToOrFromAllPhotosAnimationDuration;
    double _transitionToOrFromAllPhotosScale;
    double _transitionScaleForDayNotMatchingMonths;
    double _zoomLevelPinchSignificantScaleDelta;
    double _swipeBackGestureMinAngle;
    double _swipeBackGestureMinTranslation;
    double _zoomLevelControlSegmentExpansionFactor;
}

+ (void)setEnableEmptyYearsMonthsDaysForTesting:(BOOL)arg1;
+ (BOOL)enableEmptyYearsMonthsDaysForTesting;
+ (BOOL)useNewAllPhotos;
+ (void)setDisableNewAllPhotosForTesting:(BOOL)arg1;
+ (BOOL)disableNewAllPhotosForTesting;
+ (id)allPhotosColumnsChoices;
+ (id)allPhotosValidColumns;
+ (id)sharedInstance;
+ (id)_printAccessibilityElementsRow;
+ (id)settingsControllerModule;
@property(nonatomic) BOOL forceShowAllButtonsVisible; // @synthesize forceShowAllButtonsVisible=_forceShowAllButtonsVisible;
@property(nonatomic) BOOL forceBadgesOnAllAssets; // @synthesize forceBadgesOnAllAssets=_forceBadgesOnAllAssets;
@property(nonatomic) BOOL exaggerateContrast; // @synthesize exaggerateContrast=_exaggerateContrast;
@property(nonatomic) BOOL enableRecentlyEditedAlbum; // @synthesize enableRecentlyEditedAlbum=_enableRecentlyEditedAlbum;
@property(nonatomic) BOOL enableSnapshotMode; // @synthesize enableSnapshotMode=_enableSnapshotMode;
@property(nonatomic) double zoomLevelControlSegmentExpansionFactor; // @synthesize zoomLevelControlSegmentExpansionFactor=_zoomLevelControlSegmentExpansionFactor;
@property(nonatomic) double swipeBackGestureMinTranslation; // @synthesize swipeBackGestureMinTranslation=_swipeBackGestureMinTranslation;
@property(nonatomic) double swipeBackGestureMinAngle; // @synthesize swipeBackGestureMinAngle=_swipeBackGestureMinAngle;
@property(nonatomic) double zoomLevelPinchSignificantScaleDelta; // @synthesize zoomLevelPinchSignificantScaleDelta=_zoomLevelPinchSignificantScaleDelta;
@property(nonatomic) double transitionScaleForDayNotMatchingMonths; // @synthesize transitionScaleForDayNotMatchingMonths=_transitionScaleForDayNotMatchingMonths;
@property(nonatomic) double transitionToOrFromAllPhotosScale; // @synthesize transitionToOrFromAllPhotosScale=_transitionToOrFromAllPhotosScale;
@property(nonatomic) double transitionToOrFromAllPhotosAnimationDuration; // @synthesize transitionToOrFromAllPhotosAnimationDuration=_transitionToOrFromAllPhotosAnimationDuration;
@property(nonatomic) double nonAnchorDaysFadeSpeed; // @synthesize nonAnchorDaysFadeSpeed=_nonAnchorDaysFadeSpeed;
@property(nonatomic) double nonAnchorMonthsFadeSpeed; // @synthesize nonAnchorMonthsFadeSpeed=_nonAnchorMonthsFadeSpeed;
@property(nonatomic) double nonAnchorYearsFadeSpeed; // @synthesize nonAnchorYearsFadeSpeed=_nonAnchorYearsFadeSpeed;
@property(nonatomic) double defaultZoomLevelTransitionMaximumScaleAroundAnchor; // @synthesize defaultZoomLevelTransitionMaximumScaleAroundAnchor=_defaultZoomLevelTransitionMaximumScaleAroundAnchor;
@property(nonatomic) double defaultZoomLevelTransitionAnimationDuration; // @synthesize defaultZoomLevelTransitionAnimationDuration=_defaultZoomLevelTransitionAnimationDuration;
@property(nonatomic) double defaultAnimationDuration; // @synthesize defaultAnimationDuration=_defaultAnimationDuration;
@property(nonatomic) BOOL enbaleInteractiveTransition; // @synthesize enbaleInteractiveTransition=_enbaleInteractiveTransition;
@property(nonatomic) BOOL firstTimeExperienceAlwaysLogReadiness; // @synthesize firstTimeExperienceAlwaysLogReadiness=_firstTimeExperienceAlwaysLogReadiness;
@property(nonatomic) long long firstTimeExperienceMaxNonProcessedAssets; // @synthesize firstTimeExperienceMaxNonProcessedAssets=_firstTimeExperienceMaxNonProcessedAssets;
@property(nonatomic) long long firstTimeExperienceMaxNonProcessedHighlights; // @synthesize firstTimeExperienceMaxNonProcessedHighlights=_firstTimeExperienceMaxNonProcessedHighlights;
@property(nonatomic) double slideshowIntervalDelay; // @synthesize slideshowIntervalDelay=_slideshowIntervalDelay;
@property(nonatomic) double slideshowTriggerDelay; // @synthesize slideshowTriggerDelay=_slideshowTriggerDelay;
@property(nonatomic) BOOL enablePlaybackDiagnostics; // @synthesize enablePlaybackDiagnostics=_enablePlaybackDiagnostics;
@property(nonatomic) double livePhotoLoopingCrossfadeDuration; // @synthesize livePhotoLoopingCrossfadeDuration=_livePhotoLoopingCrossfadeDuration;
@property(nonatomic) double playbackVisibleRectEdgeInset; // @synthesize playbackVisibleRectEdgeInset=_playbackVisibleRectEdgeInset;
@property(nonatomic) long long maxNumberOfPlayingItems; // @synthesize maxNumberOfPlayingItems=_maxNumberOfPlayingItems;
@property(nonatomic) BOOL playBestTimeRange; // @synthesize playBestTimeRange=_playBestTimeRange;
@property(nonatomic) double minAutoplaySuggestionScore; // @synthesize minAutoplaySuggestionScore=_minAutoplaySuggestionScore;
@property(nonatomic) BOOL forcePlayback; // @synthesize forcePlayback=_forcePlayback;
@property(nonatomic) BOOL enableInlinePlayback; // @synthesize enableInlinePlayback=_enableInlinePlayback;
@property(nonatomic) BOOL hideAggregations; // @synthesize hideAggregations=_hideAggregations;
@property(nonatomic) BOOL hideRecents; // @synthesize hideRecents=_hideRecents;
@property(nonatomic) double nonInterestingPromotionScore; // @synthesize nonInterestingPromotionScore=_nonInterestingPromotionScore;
@property(nonatomic) unsigned short daysCurationType; // @synthesize daysCurationType=_daysCurationType;
@property(nonatomic) BOOL useCustomDaysCurationType; // @synthesize useCustomDaysCurationType=_useCustomDaysCurationType;
@property(nonatomic) BOOL showAllHighlights; // @synthesize showAllHighlights=_showAllHighlights;
@property(nonatomic) long long initialZoomLevel; // @synthesize initialZoomLevel=_initialZoomLevel;
@property(nonatomic) double statusBarGradientAndStyleFadeDuration; // @synthesize statusBarGradientAndStyleFadeDuration=_statusBarGradientAndStyleFadeDuration;
@property(nonatomic) double statusBarGradientHeight; // @synthesize statusBarGradientHeight=_statusBarGradientHeight;
@property(nonatomic) double statusBarGradientAlpha; // @synthesize statusBarGradientAlpha=_statusBarGradientAlpha;
@property(nonatomic) double allPhotosHeaderGradientHeight; // @synthesize allPhotosHeaderGradientHeight=_allPhotosHeaderGradientHeight;
@property(nonatomic) double allPhotosHeaderGradientAlpha; // @synthesize allPhotosHeaderGradientAlpha=_allPhotosHeaderGradientAlpha;
@property(nonatomic) double daysHeaderGradientHeight; // @synthesize daysHeaderGradientHeight=_daysHeaderGradientHeight;
@property(nonatomic) double daysHeaderGradientAlpha; // @synthesize daysHeaderGradientAlpha=_daysHeaderGradientAlpha;
@property(nonatomic) double monthsSmallHeaderGradientHeight; // @synthesize monthsSmallHeaderGradientHeight=_monthsSmallHeaderGradientHeight;
@property(nonatomic) double monthsHeaderGradientHeight; // @synthesize monthsHeaderGradientHeight=_monthsHeaderGradientHeight;
@property(nonatomic) double monthsHeaderGradientAlpha; // @synthesize monthsHeaderGradientAlpha=_monthsHeaderGradientAlpha;
@property(nonatomic) double yearsHeaderGradientHeight; // @synthesize yearsHeaderGradientHeight=_yearsHeaderGradientHeight;
@property(nonatomic) double yearsHeaderGradientAlpha; // @synthesize yearsHeaderGradientAlpha=_yearsHeaderGradientAlpha;
@property(nonatomic) BOOL allowsCustomDateTitles; // @synthesize allowsCustomDateTitles=_allowsCustomDateTitles;
@property(nonatomic) BOOL enableShowAllButtons; // @synthesize enableShowAllButtons=_enableShowAllButtons;
@property(nonatomic) double minimumVisibleHeightForTopMostSection; // @synthesize minimumVisibleHeightForTopMostSection=_minimumVisibleHeightForTopMostSection;
@property(nonatomic) BOOL showDebugInformationInFloatingHeader; // @synthesize showDebugInformationInFloatingHeader=_showDebugInformationInFloatingHeader;
@property(nonatomic) BOOL forceFloatingHeaderVisible; // @synthesize forceFloatingHeaderVisible=_forceFloatingHeaderVisible;
@property(nonatomic) double allPhotosAlphaCrossfadeMaxDuration; // @synthesize allPhotosAlphaCrossfadeMaxDuration=_allPhotosAlphaCrossfadeMaxDuration;
@property(nonatomic) double allPhotosAlphaCrossfadeMinDuration; // @synthesize allPhotosAlphaCrossfadeMinDuration=_allPhotosAlphaCrossfadeMinDuration;
@property(nonatomic) double allPhotosAlphaModeTransitionDuration; // @synthesize allPhotosAlphaModeTransitionDuration=_allPhotosAlphaModeTransitionDuration;
@property(nonatomic) double allPhotosAlphaDistanceForDirectionChange; // @synthesize allPhotosAlphaDistanceForDirectionChange=_allPhotosAlphaDistanceForDirectionChange;
@property(nonatomic) double allPhotosAlphaMinTransitionDistance; // @synthesize allPhotosAlphaMinTransitionDistance=_allPhotosAlphaMinTransitionDistance;
@property(nonatomic) double allPhotosAlphaMinAcceptableCoverage; // @synthesize allPhotosAlphaMinAcceptableCoverage=_allPhotosAlphaMinAcceptableCoverage;
@property(nonatomic) double allPhotosAlphaMaxAcceptableScale; // @synthesize allPhotosAlphaMaxAcceptableScale=_allPhotosAlphaMaxAcceptableScale;
@property(nonatomic) BOOL preheatThumbnailsWhenIdle; // @synthesize preheatThumbnailsWhenIdle=_preheatThumbnailsWhenIdle;
@property(nonatomic) long long allPhotosPreheatDenserZoomLevels; // @synthesize allPhotosPreheatDenserZoomLevels=_allPhotosPreheatDenserZoomLevels;
@property(nonatomic) long long maxColumnsForSingleDate; // @synthesize maxColumnsForSingleDate=_maxColumnsForSingleDate;
@property(nonatomic) long long maxColumnsForSaliency; // @synthesize maxColumnsForSaliency=_maxColumnsForSaliency;
@property(nonatomic) long long maxColumnsForIndividualItems; // @synthesize maxColumnsForIndividualItems=_maxColumnsForIndividualItems;
@property(nonatomic) long long allPhotosOnlyPhotosFromToday; // @synthesize allPhotosOnlyPhotosFromToday=_allPhotosOnlyPhotosFromToday;
@property(nonatomic) long long allPhotosMaxPhotoCount; // @synthesize allPhotosMaxPhotoCount=_allPhotosMaxPhotoCount;
@property(nonatomic) long long allPhotosSimulateMinimumPhotoCount; // @synthesize allPhotosSimulateMinimumPhotoCount=_allPhotosSimulateMinimumPhotoCount;
@property(nonatomic) double allPhotosSliderSmoothingDuration; // @synthesize allPhotosSliderSmoothingDuration=_allPhotosSliderSmoothingDuration;
@property(nonatomic) double allPhotosPinchSmoothingDuration; // @synthesize allPhotosPinchSmoothingDuration=_allPhotosPinchSmoothingDuration;
@property(nonatomic) double allPhotosRecenterSpringDamping; // @synthesize allPhotosRecenterSpringDamping=_allPhotosRecenterSpringDamping;
@property(nonatomic) double allPhotosRecenterSpringStiffness; // @synthesize allPhotosRecenterSpringStiffness=_allPhotosRecenterSpringStiffness;
@property(nonatomic) double allPhotosZoomSpringDamping; // @synthesize allPhotosZoomSpringDamping=_allPhotosZoomSpringDamping;
@property(nonatomic) double allPhotosZoomSpringStiffness; // @synthesize allPhotosZoomSpringStiffness=_allPhotosZoomSpringStiffness;
@property(nonatomic) double allPhotosZoomDecelerationRate; // @synthesize allPhotosZoomDecelerationRate=_allPhotosZoomDecelerationRate;
@property(nonatomic) double allPhotosZoomInRubberBanding; // @synthesize allPhotosZoomInRubberBanding=_allPhotosZoomInRubberBanding;
@property(nonatomic) double allPhotosZoomOutRubberBanding; // @synthesize allPhotosZoomOutRubberBanding=_allPhotosZoomOutRubberBanding;
@property(nonatomic) long long allPhotosRubberBandEffect; // @synthesize allPhotosRubberBandEffect=_allPhotosRubberBandEffect;
@property(nonatomic) double allPhotosInteritemSpacing; // @synthesize allPhotosInteritemSpacing=_allPhotosInteritemSpacing;
@property(retain, nonatomic) NSArray *allPhotosColumns; // @synthesize allPhotosColumns=_allPhotosColumns;
@property(nonatomic) long long allPhotosColumnsChoiceIndex; // @synthesize allPhotosColumnsChoiceIndex=_allPhotosColumnsChoiceIndex;
@property(nonatomic) double allPhotosZoomingHeaderTintOpacity; // @synthesize allPhotosZoomingHeaderTintOpacity=_allPhotosZoomingHeaderTintOpacity;
@property(nonatomic) double allPhotosShiftingRequiredScreensTopDistance; // @synthesize allPhotosShiftingRequiredScreensTopDistance=_allPhotosShiftingRequiredScreensTopDistance;
@property(nonatomic) double allPhotosHeaderSpaceMinimumScreensOfContent; // @synthesize allPhotosHeaderSpaceMinimumScreensOfContent=_allPhotosHeaderSpaceMinimumScreensOfContent;
@property(nonatomic) double allPhotosIndividualLevelMinimumScreensOfContent; // @synthesize allPhotosIndividualLevelMinimumScreensOfContent=_allPhotosIndividualLevelMinimumScreensOfContent;
@property(nonatomic) double allPhotosDenseLevelMinimumScreensOfContent; // @synthesize allPhotosDenseLevelMinimumScreensOfContent=_allPhotosDenseLevelMinimumScreensOfContent;
@property(nonatomic) double allPhotosDecadesDensityScale; // @synthesize allPhotosDecadesDensityScale=_allPhotosDecadesDensityScale;
@property(nonatomic) BOOL enableAllPhotosHeaderBlur; // @synthesize enableAllPhotosHeaderBlur=_enableAllPhotosHeaderBlur;
@property(nonatomic) long long allPhotosZoomingHeaderStyle; // @synthesize allPhotosZoomingHeaderStyle=_allPhotosZoomingHeaderStyle;
@property(nonatomic) BOOL allPhotosDebugLayers; // @synthesize allPhotosDebugLayers=_allPhotosDebugLayers;
@property(nonatomic) BOOL allPhotosTapsZoomsToLastIndividualDensity; // @synthesize allPhotosTapsZoomsToLastIndividualDensity=_allPhotosTapsZoomsToLastIndividualDensity;
@property(nonatomic) BOOL allPhotosAutoCrossfade; // @synthesize allPhotosAutoCrossfade=_allPhotosAutoCrossfade;
@property(nonatomic) BOOL allPhotosUseSaliency; // @synthesize allPhotosUseSaliency=_allPhotosUseSaliency;
@property(nonatomic) BOOL allPhotosTitleUseDateRange; // @synthesize allPhotosTitleUseDateRange=_allPhotosTitleUseDateRange;
@property(nonatomic) BOOL allPhotosDisableSystemSelectGesture; // @synthesize allPhotosDisableSystemSelectGesture=_allPhotosDisableSystemSelectGesture;
@property(nonatomic) BOOL enableAllPhotosDecadesDensity; // @synthesize enableAllPhotosDecadesDensity=_enableAllPhotosDecadesDensity;
@property(nonatomic) BOOL enableAllPhotosOneColumn; // @synthesize enableAllPhotosOneColumn=_enableAllPhotosOneColumn;
@property(nonatomic) BOOL enableAllPhotosInlineVideo; // @synthesize enableAllPhotosInlineVideo=_enableAllPhotosInlineVideo;
@property(nonatomic) BOOL enableAllPhotosBadges; // @synthesize enableAllPhotosBadges=_enableAllPhotosBadges;
@property(nonatomic) BOOL enableAllPhotosZooming; // @synthesize enableAllPhotosZooming=_enableAllPhotosZooming;
@property(nonatomic) BOOL enableNewAllPhotos; // @synthesize enableNewAllPhotos=_enableNewAllPhotos;
@property(nonatomic) BOOL hideAnalyzingStatus; // @synthesize hideAnalyzingStatus=_hideAnalyzingStatus;
@property(nonatomic) BOOL hideStatusFooter; // @synthesize hideStatusFooter=_hideStatusFooter;
@property(nonatomic) double faultOutPadding; // @synthesize faultOutPadding=_faultOutPadding;
@property(nonatomic) double faultInDistance; // @synthesize faultInDistance=_faultInDistance;
@property(nonatomic) long long sectionsToPrefetch; // @synthesize sectionsToPrefetch=_sectionsToPrefetch;
@property(nonatomic) double skimmingScale; // @synthesize skimmingScale=_skimmingScale;
@property(nonatomic) double sectionShadowOpacity; // @synthesize sectionShadowOpacity=_sectionShadowOpacity;
@property(nonatomic) double topInsetForVisibilityAnchoring; // @synthesize topInsetForVisibilityAnchoring=_topInsetForVisibilityAnchoring;
@property(nonatomic) double allowSpecialPanoHeaders; // @synthesize allowSpecialPanoHeaders=_allowSpecialPanoHeaders;
@property(nonatomic) double interitemSpacingForDays; // @synthesize interitemSpacingForDays=_interitemSpacingForDays;
@property(nonatomic) double spacingBetweenDays; // @synthesize spacingBetweenDays=_spacingBetweenDays;
@property(nonatomic) double aspectRatioForCompactPortraitMonths; // @synthesize aspectRatioForCompactPortraitMonths=_aspectRatioForCompactPortraitMonths;
@property(nonatomic) long long forcedNumberOfYearsColumn; // @synthesize forcedNumberOfYearsColumn=_forcedNumberOfYearsColumn;
@property(nonatomic) double aspectRatioForRegularYears; // @synthesize aspectRatioForRegularYears=_aspectRatioForRegularYears;
@property(nonatomic) double aspectRatioForCompactLandscapeYears; // @synthesize aspectRatioForCompactLandscapeYears=_aspectRatioForCompactLandscapeYears;
@property(nonatomic) double aspectRatioForCompactPortraitYears; // @synthesize aspectRatioForCompactPortraitYears=_aspectRatioForCompactPortraitYears;
@property(nonatomic) double largeHeroMinimumScore; // @synthesize largeHeroMinimumScore=_largeHeroMinimumScore;
@property(nonatomic) long long largeHeroDensity; // @synthesize largeHeroDensity=_largeHeroDensity;
@property(nonatomic) BOOL showSaliencyRects; // @synthesize showSaliencyRects=_showSaliencyRects;
@property(nonatomic) BOOL useSaliency; // @synthesize useSaliency=_useSaliency;
@property(nonatomic) double yearsHeadersFadeoutMinimumAlpha; // @synthesize yearsHeadersFadeoutMinimumAlpha=_yearsHeadersFadeoutMinimumAlpha;
@property(nonatomic) double yearsHeadersFadeoutDistance; // @synthesize yearsHeadersFadeoutDistance=_yearsHeadersFadeoutDistance;
@property(nonatomic) double yearsHeadersFadeoutOffset; // @synthesize yearsHeadersFadeoutOffset=_yearsHeadersFadeoutOffset;
@property(nonatomic) double monthsInlineHeadersFadeoutMinimumAlpha; // @synthesize monthsInlineHeadersFadeoutMinimumAlpha=_monthsInlineHeadersFadeoutMinimumAlpha;
@property(nonatomic) double monthsInlineHeadersFadeoutDistance; // @synthesize monthsInlineHeadersFadeoutDistance=_monthsInlineHeadersFadeoutDistance;
@property(nonatomic) double monthsInlineHeadersFadeoutOffset; // @synthesize monthsInlineHeadersFadeoutOffset=_monthsInlineHeadersFadeoutOffset;
@property(nonatomic) double monthsFloatingHeadersSubtitleAlpha; // @synthesize monthsFloatingHeadersSubtitleAlpha=_monthsFloatingHeadersSubtitleAlpha;
@property(nonatomic) double monthsFloatingHeadersFadeoutDistance; // @synthesize monthsFloatingHeadersFadeoutDistance=_monthsFloatingHeadersFadeoutDistance;
@property(nonatomic) double monthsFloatingHeadersAppearanceCrossfadeDuration; // @synthesize monthsFloatingHeadersAppearanceCrossfadeDuration=_monthsFloatingHeadersAppearanceCrossfadeDuration;
@property(nonatomic) double monthsFloatingHeadersAppearanceCrossfadeDistance; // @synthesize monthsFloatingHeadersAppearanceCrossfadeDistance=_monthsFloatingHeadersAppearanceCrossfadeDistance;
@property(nonatomic) double monthsFloatingHeadersAppearanceCrossfadeStartDistance; // @synthesize monthsFloatingHeadersAppearanceCrossfadeStartDistance=_monthsFloatingHeadersAppearanceCrossfadeStartDistance;
@property(nonatomic) double monthsFloatingHeadersDistanceFromSafeAreaTop; // @synthesize monthsFloatingHeadersDistanceFromSafeAreaTop=_monthsFloatingHeadersDistanceFromSafeAreaTop;
@property(nonatomic) double floatingHeaderButtonsFadeOverDistance; // @synthesize floatingHeaderButtonsFadeOverDistance=_floatingHeaderButtonsFadeOverDistance;
@property(nonatomic) double floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop; // @synthesize floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop=_floatingHeaderButtonsFadeThresholdBetweenHeaderTopAndNextBodyTop;
@property(nonatomic) double floatingHeaderFadeOverDistance; // @synthesize floatingHeaderFadeOverDistance=_floatingHeaderFadeOverDistance;
@property(nonatomic) double floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom; // @synthesize floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom=_floatingHeaderFadeThresholdBetweenHeaderTopAndBodyBottom;
@property(nonatomic) double scrollSnapMinimumSpeed; // @synthesize scrollSnapMinimumSpeed=_scrollSnapMinimumSpeed;
@property(nonatomic) double scrollSnapMaximumAccelerationFactor; // @synthesize scrollSnapMaximumAccelerationFactor=_scrollSnapMaximumAccelerationFactor;
@property(nonatomic) double scrollSnapMaximumDecelerationFactor; // @synthesize scrollSnapMaximumDecelerationFactor=_scrollSnapMaximumDecelerationFactor;
@property(nonatomic) BOOL enableCustomScrollToTopOrBottom; // @synthesize enableCustomScrollToTopOrBottom=_enableCustomScrollToTopOrBottom;
@property(nonatomic) BOOL enableTapOnTitleToScroll; // @synthesize enableTapOnTitleToScroll=_enableTapOnTitleToScroll;
@property(nonatomic) double bottomCenterSecondaryToolbarWidth; // @synthesize bottomCenterSecondaryToolbarWidth=_bottomCenterSecondaryToolbarWidth;
@property(nonatomic) BOOL alwaysShowSecondaryToolbarAtBottom; // @synthesize alwaysShowSecondaryToolbarAtBottom=_alwaysShowSecondaryToolbarAtBottom;
@property(nonatomic) BOOL showStatusBar; // @synthesize showStatusBar=_showStatusBar;
@property(nonatomic) BOOL emulateEmptyLibrary; // @synthesize emulateEmptyLibrary=_emulateEmptyLibrary;
@property(copy, nonatomic) NSString *savedAllPhotosScrollPositionAnchorAssetIdentifier; // @synthesize savedAllPhotosScrollPositionAnchorAssetIdentifier=_savedAllPhotosScrollPositionAnchorAssetIdentifier;
@property(nonatomic) BOOL launchToSavedAllPhotosScrollPosition; // @synthesize launchToSavedAllPhotosScrollPosition=_launchToSavedAllPhotosScrollPosition;
@property(nonatomic) BOOL enableSlideshowInYears; // @synthesize enableSlideshowInYears=_enableSlideshowInYears;
@property(nonatomic) BOOL enablePlayMovieInYears; // @synthesize enablePlayMovieInYears=_enablePlayMovieInYears;
@property(nonatomic) BOOL showPhotosLibrarySettingsAtTopLevel; // @synthesize showPhotosLibrarySettingsAtTopLevel=_showPhotosLibrarySettingsAtTopLevel;
@property(nonatomic) double recentHighlightsTimeInterval; // @synthesize recentHighlightsTimeInterval=_recentHighlightsTimeInterval;
// - (void).cxx_destruct;
- (long long)version;
- (BOOL)allowsModularLayoutForZoomLevel:(long long)arg1 sizeClass:(long long)arg2 orientation:(long long)arg3;
- (CDUnknownBlockType)acceptableLargeHeroPredicate;
- (void)setDefaultValues;
- (id)parentSettings;

@end

