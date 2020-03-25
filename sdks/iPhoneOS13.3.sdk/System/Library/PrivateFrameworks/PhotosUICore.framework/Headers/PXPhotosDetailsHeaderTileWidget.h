//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXMovieProviderDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDetailsHeaderTileLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSlideshowSessionDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXUISlideshowViewTileDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>
#import <PhotosUICore/PXZoomAnimationObserverCoordinatorDelegate-Protocol.h>

@class NSMutableSet, NSString, OKPresentationViewController, PHAssetCollection, PHFetchResult, PXBasicUIViewTileAnimator, PXImageRequester, PXMovieProvider, PXPhotoKitUIMediaProvider, PXPhotosDataSource, PXPhotosDetailsContext, PXPhotosDetailsHeaderSpec, PXPhotosDetailsHeaderSpecManager, PXPhotosDetailsLoadCoordinationToken, PXReusableObjectPool, PXSlideshowSession, PXTilingController, PXTitleSubtitleUILabelTile, PXUIPlayButtonTile, PXUISlideshowViewTile, PXUITapGestureRecognizer, PXWidgetSpec;
@protocol OS_dispatch_queue, PXDisplayAsset, PXWidgetDelegate;

@interface PXPhotosDetailsHeaderTileWidget : NSObject <PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, UIGestureRecognizerDelegate, PXChangeObserver, PXPhotosDataSourceChangeObserver, PXPhotosDetailsHeaderTileLayoutDelegate, PXSlideshowSessionDelegate, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUISlideshowViewTileDelegate, PXZoomAnimationObserverCoordinatorDelegate, PXMovieProviderDelegate, PXScrollViewControllerObserver, PXUIWidget, PXDiagnosticsEnvironment>
{
    NSObject<OS_dispatch_queue> *_internalWorkQueue;
    PXPhotosDetailsHeaderSpecManager *_specManager;
    PXTilingController *_tilingController;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXReusableObjectPool *_tilePool;
    NSMutableSet *_tilesInUse;
    PXBasicUIViewTileAnimator *_tileAnimator;
    PXImageRequester *_primaryAssetImageRequester;
    CGRect _keyAssetCropRect;
    PXSlideshowSession *_slideshowSession;
    struct {
        BOOL keyAssets;
        BOOL assetCollection;
        BOOL curatedAssetCollection;
    } _needsUpdateFlags;
    BOOL _userInteractionEnabled;
    BOOL __basicContentLoaded;
    BOOL __canLoadContentData;
    BOOL __slideshowDidPrepare;
    BOOL __slideshowDidStart;
    BOOL __isSlideshowTileCheckedOut;
    BOOL __isPreventingSlideshowNextStep;
    BOOL __slideshowStartingDelayFinished;
    BOOL _hasLoadedContentData;
    PXPhotosDetailsContext *_context;
    id <PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    PXPhotosDataSource *__photosDataSource;
    PXPhotosDetailsHeaderSpec *__headerSpec;
    PXMovieProvider *__movieProvider;
    OKPresentationViewController *__slideshowViewController;
    PXUISlideshowViewTile *__slideshowTile;
    PXUIPlayButtonTile *__playButtonTile;
    PXTitleSubtitleUILabelTile *__titleTile;
    PXPhotosDetailsLoadCoordinationToken *__loadCoordinationToken;
    PHFetchResult *__keyAssetsFetchResult;
    PHAssetCollection *__assetCollection;
    PHAssetCollection *__curatedAssetCollection;
    PHAssetCollection *__slideshowReferenceAssetCollection;
    long long __transitionAnimationsCount;
    PXUITapGestureRecognizer *__tapGestureRecognizer;
    CGSize __contentSize;
}

+ (BOOL)canShowMiroMovieHeaderForDataSource:(id)arg1;
+ (double)preferredHeaderContentHeightForWidth:(double)arg1 screen:(id)arg2;
@property(nonatomic, setter=_setContentSize:) CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) PXUITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property(nonatomic, setter=_setTransitionAnimationsCount:) long long _transitionAnimationsCount; // @synthesize _transitionAnimationsCount=__transitionAnimationsCount;
@property(retain, nonatomic, setter=_setSlideshowReferenceAssetCollection:) PHAssetCollection *_slideshowReferenceAssetCollection; // @synthesize _slideshowReferenceAssetCollection=__slideshowReferenceAssetCollection;
@property(retain, nonatomic, setter=_setCuratedAssetCollection:) PHAssetCollection *_curatedAssetCollection; // @synthesize _curatedAssetCollection=__curatedAssetCollection;
@property(retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection; // @synthesize _assetCollection=__assetCollection;
@property(retain, nonatomic, setter=_setKeyAssetsFetchResult:) PHFetchResult *_keyAssetsFetchResult; // @synthesize _keyAssetsFetchResult=__keyAssetsFetchResult;
@property(retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken; // @synthesize _loadCoordinationToken=__loadCoordinationToken;
@property(nonatomic, setter=_setSlideshowStartingDelayFinished:) BOOL _slideshowStartingDelayFinished; // @synthesize _slideshowStartingDelayFinished=__slideshowStartingDelayFinished;
@property(nonatomic, setter=_setPreventSlideshowNextStep:) BOOL _isPreventingSlideshowNextStep; // @synthesize _isPreventingSlideshowNextStep=__isPreventingSlideshowNextStep;
@property(nonatomic, setter=_setSlideshowTileCheckedOut:) BOOL _isSlideshowTileCheckedOut; // @synthesize _isSlideshowTileCheckedOut=__isSlideshowTileCheckedOut;
@property(nonatomic, setter=_setSlideshowDidStart:) BOOL _slideshowDidStart; // @synthesize _slideshowDidStart=__slideshowDidStart;
@property(nonatomic, setter=_setSlideshowDidPrepare:) BOOL _slideshowDidPrepare; // @synthesize _slideshowDidPrepare=__slideshowDidPrepare;
@property(nonatomic, setter=_setCanLoadContentData:) BOOL _canLoadContentData; // @synthesize _canLoadContentData=__canLoadContentData;
@property(nonatomic, getter=_isBasicContentLoaded, setter=_setBasicContentLoaded:) BOOL _basicContentLoaded; // @synthesize _basicContentLoaded=__basicContentLoaded;
@property(retain, nonatomic, setter=_setTitleTile:) PXTitleSubtitleUILabelTile *_titleTile; // @synthesize _titleTile=__titleTile;
@property(retain, nonatomic, setter=_setPlayButtonTile:) PXUIPlayButtonTile *_playButtonTile; // @synthesize _playButtonTile=__playButtonTile;
@property(retain, nonatomic, setter=_setSlideshowTile:) PXUISlideshowViewTile *_slideshowTile; // @synthesize _slideshowTile=__slideshowTile;
@property(retain, nonatomic, setter=_setSlideshowViewController:) OKPresentationViewController *_slideshowViewController; // @synthesize _slideshowViewController=__slideshowViewController;
@property(retain, nonatomic, setter=_setMovieProvider:) PXMovieProvider *_movieProvider; // @synthesize _movieProvider=__movieProvider;
@property(retain, nonatomic, setter=_setHeaderSpec:) PXPhotosDetailsHeaderSpec *_headerSpec; // @synthesize _headerSpec=__headerSpec;
@property(retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource; // @synthesize _photosDataSource=__photosDataSource;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)ppt_navigateToMovieWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationDidEndWithContext:(id)arg2;
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationWillBeginWithContext:(id)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* CDUnknownBlockType */)arg5;
- (id)slideshowViewTileHostViewController:(id)arg1;
- (id)presentingViewControllerForMovieProvider:(id)arg1;
- (void)playMiroMovieWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)containsPoint:(CGPoint)arg1 forCoordinateSpace:(id)arg2;
- (id)zoomAnimationCoordinatorForContext:(id)arg1;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forContext:(id)arg2;
- (id)regionOfInterestForContext:(id)arg1;
- (void)slideshowSession:(id)arg1 didPrepareSlideshow:(id)arg2;
- (id)photosDetailsHeaderTileLayoutFontName:(id)arg1;
- (CGRect)photosDetailsHeaderTileLayout:(id)arg1 contentsRectForAspectRatio:(double)arg2;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updatePreventSlideshowNextStep;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_isPointWithinCurrentLayoutBounds:(CGPoint)arg1;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)_titleFontName;
- (id)_subtitle;
- (id)_title;
- (void )_tileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void )arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void )checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)createHeaderSnapshotViewForMemoryCreationAnimation;
- (id)_contentRegionOfInterestForTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (CGRect)_contentRectInCoordinateSpace:(id)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)_startMiroMovie;
- (void)_handleTapGesture:(id)arg1;
- (id)_scrollViewController;
- (id)extendedTraitCollection;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) BOOL hasContentForCurrentInput;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)_headerSpecDidChange;
- (BOOL)_isSlideShowReadyToStart;
- (void)_slideshowStartingDelayDidFinish;
- (void)_updateSlideshowPlayState;
- (void)_updateSlideshowTile;
- (id)viewToBeFocused;
- (void)_updateTitleTile;
- (void)_didFinishPreparingSlideshowSession:(id)arg1;
- (void)_prepareSlideshowSessionWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (void)_updateSlideshow;
- (void)_filterOutVideosFromAssetCollection:(id)arg1 filteredAssetCollection:(id )arg2 assets:(id )arg3;
- (id)keyAsset;
@property(readonly, nonatomic) id <PXDisplayAsset> presentedKeyAsset;
- (void)_updateMovieProvider;
- (void)unloadContentData;
- (void)loadContentData;
- (void)_updateBasicContent;
- (BOOL)_needsUpdate;
- (BOOL)_showPlaceholder;
- (void)_updateCuratedAssetCollectionIfNeeded;
- (void)_invalidateCuratedAssetCollection;
- (void)_updateAssetCollectionIfNeeded;
- (void)_invalidateAssetCollection;
- (void)_updateKeyAssetCropRect;
- (void)_updateKeyAssetsIfNeeded;
- (void)_invalidateKeyAssets;
- (void)_updateLayoutStyle;
- (void)setContentSize:(CGSize)arg1;
- (void)_loadBasicContent;
- (void)dealloc;
- (id)init;

@end
