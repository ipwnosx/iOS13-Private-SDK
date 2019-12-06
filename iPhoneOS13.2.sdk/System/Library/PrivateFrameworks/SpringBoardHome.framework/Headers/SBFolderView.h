//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListPageControlDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListViewDragDelegate-Protocol.h>
#import <SpringBoardHome/SBIconScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, SBFolder, SBFolderIconImageCache, SBFolderTitleTextField, SBHIconImageCache, SBIconLayoutOverrideStrategy, SBIconListPageControl, SBIconListView, SBIconPageIndicatorImageSetCache, SBIconScrollView, UIPanGestureRecognizer, UIScrollView, _UILegibilitySettings;
@protocol SBFolderViewDelegate, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, SBIconScrollViewDelegate, BSDescriptionProviding, SBIconListViewDragDelegate>
{
    NSMutableArray *_iconListViews;
    NSMutableSet *_scrollingDisabledReasons;
    NSMutableSet *_pageControlDisabledReasons;
    SBIconListPageControl *_pageControl;
    SBIconScrollView *_scrollView;
    SBFolderTitleTextField *_titleTextField;
    NSMutableSet *_scrollViewIsScrollingOverrides;
    UIView *_scalingView;
//    struct SBVisibleColumnRange _visibleColumnRange;
//    struct SBFolderPredictedVisibleColumn _predictedVisibleColumn;
    BOOL _isScalingViewBorrowed;
    BOOL _wasScrolling;
    NSMutableArray *_scrollFrames;
    NSUInteger _scrollFrameCount;
    double _scrollStartContentOffset;
    NSUInteger _ignoreScrollingDidEndNotificationsCount;
    NSMutableArray *_scrollCompletionBlocks;
    NSMutableArray *_rotationCompletionBlocks;
    SBIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
    double _headerHeight;
    BOOL _isEditing;
    BOOL _rotating;
    BOOL _occluded;
    BOOL _hasEverBeenInAWindow;
    long long _currentPageIndex;
    double _statusBarHeight;
    id <SBFolderViewDelegate> _delegate;
    SBFolder *_folder;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    long long _orientation;
    NSUInteger _allowedOrientations;
    id <SBIconViewProviding> _iconViewProvider;
    double _effectiveStatusBarHeight;
    NSUInteger _userInterfaceLayoutDirectionHandling;
    UIView *_headerView;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconPageIndicatorImageSetCache *_iconPageIndicatorImageSetCache;
    UIPanGestureRecognizer *_scrollingDisabledGestureRecognizer;
}

+ (NSUInteger)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (NSUInteger)_pageOffsetForOffset:(double)arg1 behavior:(long long)arg2 pageWidth:(double)arg3 pageCount:(NSUInteger)arg4 userInterfaceLayoutDirection:(long long)arg5 fractionOfDistanceThroughPage:(double )arg6;
+ (id)defaultIconLocation;
+ (Class)defaultIconListViewClass;
+ (Class)_scrollViewClass;
@property(retain, nonatomic) SBIconListPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIPanGestureRecognizer *scrollingDisabledGestureRecognizer; // @synthesize scrollingDisabledGestureRecognizer=_scrollingDisabledGestureRecognizer;
@property(nonatomic) BOOL hasEverBeenInAWindow; // @synthesize hasEverBeenInAWindow=_hasEverBeenInAWindow;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // @synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(nonatomic, getter=isOccluded) BOOL occluded; // @synthesize occluded=_occluded;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) NSUInteger userInterfaceLayoutDirectionHandling; // @synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling;
@property(readonly, nonatomic) double effectiveStatusBarHeight; // @synthesize effectiveStatusBarHeight=_effectiveStatusBarHeight;
@property(readonly, nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(nonatomic, getter=isRotating) BOOL rotating; // @synthesize rotating=_rotating;
@property(readonly, nonatomic) NSUInteger allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBIconLayoutOverrideStrategy *iconLayoutOverrideStrategy; // @synthesize iconLayoutOverrideStrategy=_iconLayoutOverrideStrategy;
@property(readonly, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) __weak id <SBFolderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isScalingViewBorrowed) BOOL scalingViewBorrowed; // @synthesize scalingViewBorrowed=_isScalingViewBorrowed;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(readonly, nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
// - (void).cxx_destruct;
- (void)_updateScrollingIfNeeded;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)willMoveToWindow:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettingsForIconListViews;
- (id)accessibilityLegibilitySettingsForRect:(CGRect)arg1 tintStyle:(NSUInteger)arg2;
- (id)accessibilityTintColorForRect:(CGRect)arg1 tintStyle:(NSUInteger)arg2;
- (void)_updateIconListLegibilitySettings;
- (void)_updateTitleLegibilitySettings;
- (id)_legibilitySettingsWithPrimaryColor:(id)arg1;
- (void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
- (BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (void)iconListView:(id)arg1 performIconDrop:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3;
- (id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
- (BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_setFolderName:(id)arg1;
- (void)pageControl:(id)arg1 didReceiveTouchInDirection:(NSUInteger)arg2;
- (BOOL)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(CGPoint)arg2;
- (BOOL)iconScrollView:(id)arg1 shouldSetContentOffset:(CGPoint )arg2 animated:(BOOL)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(id)arg1;
- (CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)transitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)cleanUpAfterTransition;
- (void)prepareForTransition;
- (void)prepareToOpen;
- (unsigned int)userInterfaceLayoutDirectionAwareScrollingDirection;
- (unsigned int)scrollingDirection;
- (void)_updateScrollingState:(BOOL)arg1;
- (void)_checkIfScrollStateChanged;
- (void)removeScrollViewIsScrollingOverrideReason:(id)arg1;
- (void)addScrollViewIsScrollingOverrideReason:(id)arg1;
- (BOOL)_shouldIgnoreScrollingDidEndNotifications;
- (void)_unignoreScrollingDidEndNotifications;
- (void)_ignoreScrollingDidEndNotifications;
- (void)_purgeListViews;
- (void)noteUserIsInteractingWithIcons;
- (void)validateVisibleColumnRange;
- (void)clearVisibleColumnRange;
- (void)updateVisibleColumnRange;
- (void)updateVisibleColumnRangeWithTotalLists:(NSUInteger)arg1 columnsPerList:(NSUInteger)arg2 iconVisibilityHandling:(long long)arg3;
@property(readonly, nonatomic) BOOL updatesPredictedVisibleColumnWhileScrolling;
@property(readonly, nonatomic) long long iconVisibilityHandling;
- (void)updateIconListIndexAndVisibility:(BOOL)arg1;
- (void)updateIconListIndexAndVisibility;
@property(readonly, nonatomic) double additionalScrollWidthToKeepVisibleInOneDirection;
//  (struct SBVisibleColumnRange)visibleColumnRangeWithTotalLists:(NSUInteger)arg1 columnsPerList:(NSUInteger)arg2 iconVisibilityHandling:(long long)arg3 predictedVisibleColumn:(struct SBFolderPredictedVisibleColumn )arg4;
@property(readonly, nonatomic) double maximumVisibleScrollOffset;
@property(readonly, nonatomic) double minimumVisibleScrollOffset;
@property(readonly, nonatomic) double scrollableWidthForVisibleColumnRange;
- (void)_updateEditingStateAnimated:(BOOL)arg1;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3;
- (void)resetIconListViews;
- (void)tearDownListViews;
- (id)allIconListViews;
- (id)additionalIconListViews;
@property(readonly, nonatomic) SBIconListView *currentIconListView;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtPoint:(CGPoint)arg1;
- (id)lastIconListView;
- (id)firstIconListView;
- (id)iconListViewAtIndex:(NSUInteger)arg1;
- (long long)_pageIndexForOffset:(double)arg1 behavior:(long long)arg2 fractionOfDistanceThroughPage:(double )arg3;
- (long long)_pageIndexForOffset:(double)arg1;
- (CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(NSUInteger)arg2;
- (CGSize)_scrollViewContentSize;
- (void)_updateIconListFrames;
- (void)_updateIconListContainment:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)updateIconListViews;
- (void)_resetIconListViews;
- (void)_addIconListViewsForModels:(id)arg1;
- (id)_createIconListViewForList:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)iconLocationForListAtIndex:(NSUInteger)arg1;
@property(readonly, copy, nonatomic) NSString *iconLocation;
- (Class)listViewClass;
- (id)_interactionTintColor;
- (void)enumerateIconListViewsWithOptions:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateIconListViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)iconListViewWithList:(id)arg1;
- (void)_removeIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (double)_titleFontSize;
- (BOOL)_showsTitle;
- (BOOL)_isValidIconListViewIndex:(long long)arg1;
- (BOOL)_isValidPageIndex:(long long)arg1;
//  (struct SBHFloatRange)_scrollRangeForContentAtPageIndex:(long long)arg1 pageWidth:(double)arg2;
//  (struct SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;
//  (struct SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1;
- (double)_scrollOffsetForContentAtPageIndex:(long long)arg1;
- (double)_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;
- (double)_scrollOffsetForPageAtIndex:(long long)arg1;
- (double)_scrollOffsetForFirstListView;
- (double)_pageWidth;
- (NSUInteger)typeForPage:(long long)arg1;
@property(readonly, nonatomic) NSUInteger pageCount;
@property(readonly, nonatomic) long long maximumPageIndex;
@property(readonly, nonatomic) long long minimumPageIndex;
- (BOOL)_hasTrailingCustomPages;
- (NSUInteger)_trailingCustomPageCount;
- (BOOL)_hasLeadingCustomPages;
- (NSUInteger)_leadingCustomPageCount;
@property(readonly, nonatomic) long long lastIconPageIndex;
@property(readonly, nonatomic) long long firstIconPageIndex;
@property(readonly, nonatomic) long long defaultPageIndex;
@property(readonly, nonatomic) double pageControlAreaHeight;
- (void)_updatePageControlNumberOfPages;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (BOOL)_useParallaxOnPageControl;
- (id)_newPageControl;
@property(readonly, nonatomic) double headerHeight;
- (void)_updateScalingViewFrame;
- (CGRect)_frameForScalingView;
- (void)_layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setNeedsLayout;
@property(readonly, nonatomic, getter=isRTL) BOOL RTL;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
- (void)updateAccessibilityTintColors;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
@property(readonly, nonatomic, getter=_titleTextField) SBFolderTitleTextField *titleTextField;
- (void)setContentAlpha:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)didTransitionAnimated:(BOOL)arg1;
- (void)willTransitionAnimated:(BOOL)arg1 withSettings:(id)arg2;
- (BOOL)locationCountsAsInsideFolder:(CGPoint)arg1;
- (void)returnScalingView;
- (id)borrowScalingView;
- (CGRect)scalingViewFrame;
- (void)_willScrollToPageIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)animateScrollToDefaultPageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetContentOffsetToCurrentPageAnimated:(BOOL)arg1;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)canChangeCurrentPageIndexToIndex:(NSUInteger)arg1;
- (BOOL)doesPageContainIconListView:(long long)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (long long)closestIconPageIndexForPageIndex:(long long)arg1;
- (long long)pageIndexForIconListViewIndex:(NSUInteger)arg1;
- (NSUInteger)iconListViewIndexForPageIndex:(long long)arg1;
@property(readonly, nonatomic) NSUInteger iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews; // @synthesize iconListViews=_iconListViews;
- (void)_orientationDidChange:(long long)arg1;
@property(nonatomic) double pageControlAlpha;
@property(nonatomic, getter=isPageControlHidden) BOOL pageControlHidden;
- (void)_updatePageControlCurrentPage;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1;
- (void)_currentPageIndexDidChange;
- (void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(BOOL)arg2;
- (void)_setCurrentPageIndex:(long long)arg1;
- (void)scrollingDisabledGestureDidUpdate:(id)arg1;
- (void)_setScrollingDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_setPageControlDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)_addScrollingCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelScrolling;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property(readonly, nonatomic) UIView *scalingView;
- (void)folderDidChange;
- (void)folderWillChange:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

