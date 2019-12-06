//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISearchBarVisualProviding-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIDictationSearchButton, UIImage, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UIView, UIVisualEffectView, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarAppearanceStorage, _UISearchBarLayout, _UISearchBarPromptContainerView, _UISearchBarScopeBarBackground, _UISearchBarScopeContainerView, _UISearchBarSearchContainerView, _UISearchBarTransitionerBase;
@protocol _UINavigationBarTitleViewDataSource, _UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private;

__attribute__((visibility("hidden")))
@interface _UISearchBarVisualProviderIOS : NSObject <_UISearchBarVisualProviding>
{
    UIDictationSearchButton *_dictationButton;
    _UISearchBarSearchContainerView *_searchFieldContainerView;
    _UISearchBarPromptContainerView *_promptContainerView;
    _UISearchBarScopeContainerView *_scopeBarContainerView;
    UIEdgeInsets _effectiveContentInset;
    NSUInteger _overriddenContentInsetEdges;
    _UISearchBarAppearanceStorage *_appearanceStorage;
    UIBarButtonItem *_animatedAppearanceBarButtonItem;
    UINavigationItem *_searchNavigationItem;
    struct {
        unsigned int barStyle:3;
        unsigned int searchBarStyle:3;
        unsigned int barTranslucence:3;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int centerPlaceholder:1;
        unsigned int disabled:1;
        unsigned int reliesOnNavigationBarBackdrop:1;
        unsigned int hideBackground:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsCancelButton:1;
        unsigned int autoDisableCancelButton:1;
        unsigned int cancelButtonWantsLetterpress:1;
        unsigned int showsDeleteButton:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int showsBookmarkButton:1;
        unsigned int isPlacedInNavigationBar:1;
        unsigned int isPlacedInToolbar:1;
        unsigned int isHostedByNavigationBar:1;
        unsigned int showsScopeBar:1;
        unsigned int showDictationButton:1;
        unsigned int allowedToShowDictationButton:1;
        unsigned int dictationButtonSetupComplete:1;
    } _searchBarVisualProviderFlags;
    UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *_delegate;
    UISearchBarTextField *_searchField;
    UISearchBarBackground *_searchBarBackground;
    _UIBackdropView *_backdrop;
    UIVisualEffectView *_backdropVisualEffectView;
    UIView *_searchBarClippingView;
    UIButton *_cancelButton;
    UIBarButtonItem *_cancelBarButtonItem;
    NSString *_cancelButtonText;
    UINavigationButton *_leftButton;
    UILabel *_promptLabel;
    UIImageView *_separator;
    UISegmentedControl *_scopeBar;
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;
    NSArray *_scopeTitles;
    long long _selectedScope;
    NSUInteger _backdropStyle;
    UIColor *_barTintColor;
    long long _barPosition;
    NSUInteger _scopeBarPosition;
    double _tableViewIndexWidth;
    long long _navBarTitleViewLocation;
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;
    id <_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;
    long long _previousLayoutState;
    long long _layoutState;
    double _backgroundExtension;
    _UISearchBarLayout *_currentLayout;
    _UISearchBarLayout *_prospectiveLayout;
    _UISearchBarTransitionerBase *_transitioner;
    UIEdgeInsets _contentInsetPrivateMinOrOverride;
}

@property(retain, nonatomic) _UISearchBarTransitionerBase *transitioner; // @synthesize transitioner=_transitioner;
@property(retain, nonatomic) _UISearchBarLayout *prospectiveLayout; // @synthesize prospectiveLayout=_prospectiveLayout;
@property(retain, nonatomic) _UISearchBarLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property(readonly, nonatomic) long long layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) long long previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
@property(readonly, nonatomic) UIBarButtonItem *animatedAppearanceBarButtonItem; // @synthesize animatedAppearanceBarButtonItem=_animatedAppearanceBarButtonItem;
@property(nonatomic) __weak id <_UINavigationBarTitleViewDataSource> navBarTitleViewDataSource; // @synthesize navBarTitleViewDataSource=_navBarTitleViewDataSource;
@property(retain, nonatomic) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects; // @synthesize navBarTitleViewOverlayRects=_navBarTitleViewOverlayRects;
@property(nonatomic) long long navBarTitleViewLocation; // @synthesize navBarTitleViewLocation=_navBarTitleViewLocation;
@property(nonatomic) double tableViewIndexWidth; // @synthesize tableViewIndexWidth=_tableViewIndexWidth;
@property(nonatomic) UIEdgeInsets minimumContentInset; // @synthesize minimumContentInset=_contentInsetPrivateMinOrOverride;
@property(readonly, nonatomic) UIEdgeInsets effectiveContentInset; // @synthesize effectiveContentInset=_effectiveContentInset;
@property(nonatomic) NSUInteger scopeBarPosition; // @synthesize scopeBarPosition=_scopeBarPosition;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(nonatomic) NSUInteger backdropStyle; // @synthesize backdropStyle=_backdropStyle;
@property(nonatomic) long long selectedScope; // @synthesize selectedScope=_selectedScope;
@property(copy, nonatomic) NSArray *scopeTitles; // @synthesize scopeTitles=_scopeTitles;
@property(retain, nonatomic) _UISearchBarScopeBarBackground *scopeBarBackgroundView; // @synthesize scopeBarBackgroundView=_scopeBarBackgroundView;
@property(readonly, nonatomic) UIView *scopeBarContainerView; // @synthesize scopeBarContainerView=_scopeBarContainerView;
@property(retain, nonatomic) UISegmentedControl *scopeBar; // @synthesize scopeBar=_scopeBar;
@property(retain, nonatomic) UIImageView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(copy, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIView *searchBarClippingView; // @synthesize searchBarClippingView=_searchBarClippingView;
@property(retain, nonatomic) UIVisualEffectView *backdropVisualEffectView; // @synthesize backdropVisualEffectView=_backdropVisualEffectView;
@property(retain, nonatomic) _UIBackdropView *backdrop; // @synthesize backdrop=_backdrop;
@property(retain, nonatomic) UISearchBarBackground *searchBarBackground; // @synthesize searchBarBackground=_searchBarBackground;
@property(retain, nonatomic) UISearchBarTextField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)setUpSearchNavigationItem;
@property(readonly, nonatomic) UINavigationItem *searchNavigationItem;
@property(nonatomic) __weak id searchDisplayController;
- (void)setSearchDisplayControllerShowsCancelButton:(BOOL)arg1;
- (void)setShadowVisibleIfNecessary:(BOOL)arg1;
- (id)makeShadowView;
@property(readonly, nonatomic) UIImageView *shadowView;
- (void)setBackgroundLayoutNeedsUpdate;
- (void)updateBackgroundToBackdropStyle:(long long)arg1;
- (void)setDelegateSearchFieldFrameManipulationBlock:(CDUnknownBlockType)arg1;
- (void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1;
- (BOOL)isAtTop;
- (void)layoutSubviewsInBounds:(CGRect)arg1;
- (CGRect)boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configureLayout:(id)arg1 forState:(long long)arg2;
- (double)effectiveBackgroundExtension;
- (void)configureLayout:(id)arg1;
- (void)invalidateLayout;
- (BOOL)wouldCombineLandscapeBarsForSize:(CGSize)arg1;
- (BOOL)shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (double)availableBoundsWidthForSize:(CGSize)arg1;
- (double)availableBoundsWidth;
- (void)displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) CGSize intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;
- (double)navigationBarContentHeight;
- (double)defaultHeightForOrientation:(long long)arg1;
- (long long)barMetricsForOrientation:(long long)arg1;
- (double)barHeightForBarMetrics:(long long)arg1;
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;
@property(readonly, nonatomic) double searchFieldHeight;
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(UIEdgeInsets)arg2;
@property(readonly, nonatomic) BOOL scopeBarIsVisible;
- (BOOL)containsScopeBar;
@property(readonly, nonatomic) double scopeBarHeight;
@property(readonly, nonatomic) UIEdgeInsets scopeBarInsets;
- (UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1;
- (void)getOverrideContentInsets:(UIEdgeInsets )arg1 overriddenEdges:(NSUInteger )arg2;
- (void)setOverrideContentInsets:(UIEdgeInsets)arg1 forRectEdges:(NSUInteger)arg2;
- (void)updateEffectiveContentInset;
@property(readonly, nonatomic) BOOL alwaysUsesLayoutMarginsForHorizontalContentInset;
- (void)getTopInset:(double )arg1 bottomInset:(double )arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5;
- (void)getTopInset:(double )arg1 bottomInset:(double )arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;
- (BOOL)_getNavigationTitleLeadingInset:(double )arg1 trailingInset:(double )arg2 isRTL:(BOOL)arg3;
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2;
- (BOOL)isInBarButNotHosted;
- (void)setClippingViewBounds:(CGRect)arg1;
- (void)setClippingViewActive:(BOOL)arg1;
- (void)setShowsDeleteButton:(BOOL)arg1;
- (void)setShowsSeparator:(BOOL)arg1;
- (void)navigationBarSlideTransitionDidEnd;
- (void)navigationBarSlideTransitionWillBegin;
- (void)cancelTransitionToSearchLayoutState:(long long)arg1;
- (void)completeTransitionToSearchLayoutState:(long long)arg1;
- (void)animateTransitionToSearchLayoutState:(long long)arg1;
- (void)prepareForTransitionToSearchLayoutState:(long long)arg1;
- (void)driveTransitionToSearchLayoutState:(long long)arg1;
- (void)resetLayoutState;
- (void)setUpSearchField;
- (void)setUpSearchBarSearchContainerIfNecessary;
- (void)setUpScopeBar;
- (void)setUpPromptLabel;
- (void)setUpLeftButton;
- (void)setUpCancelButtonWithAppearance:(id)arg1;
- (void)setUpCancelButton;
- (void)setShowDictationButton:(BOOL)arg1 shouldUpdateView:(BOOL)arg2;
- (BOOL)wantsDictationButton;
- (void)updateForAllowedToShowDictationChange;
- (BOOL)canShowDictationButton;
- (void)setDisableDictationButton:(BOOL)arg1;
- (void)cleanUpDictationMicsWithSearchField:(id)arg1;
- (void)setUpDictationMicWithSearchField:(id)arg1;
- (void)dictationButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)dictationControllerDidFinish:(id)arg1;
- (void)dictationAvailabilityDidChange:(id)arg1;
- (void)updateSearchFieldArt;
- (void)updateSearchBarOpacity;
- (void)updateScopeBarForSelectedScope;
- (void)updateScopeBarBackground;
- (void)updateRightView;
- (void)updatePlaceholderColor;
- (void)updateNeedForBackdrop;
- (BOOL)usesBackdrop;
- (void)removeBackdropVisualEffectView;
- (void)removeLegacyBackdropView;
- (void)updateDictationButton;
- (void)updateMagnifyingGlassView;
- (void)updateIfNecessaryForOldSize:(CGSize)arg1;
- (void)updateForDrawsBackgroundInPalette;
- (void)applySearchBarStyle;
- (id)effectiveBarTintColor;
- (void)effectiveBarTintColorDidChange:(BOOL)arg1;
- (void)setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_setBarTintColor:(id)arg1;
@property(readonly, nonatomic) UIColor *textColor;
- (id)colorForComponent:(NSUInteger)arg1 disabled:(BOOL)arg2;
- (BOOL)hasDarkUIAppearance;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
@property(nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
- (id)imageForSearchBarIcon:(long long)arg1 state:(NSUInteger)arg2;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(NSUInteger)arg3;
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(NSUInteger)arg2 customImage:(BOOL )arg3;
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(NSUInteger)arg2;
- (id)searchFieldBackgroundImageForState:(NSUInteger)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(NSUInteger)arg2;
@property(retain, nonatomic) UIImage *separatorImage;
- (id)currentSeparatorImage;
- (void)destroyPromptLabel;
- (void)destroyCancelButton;
- (void)revertViewHierarchyIfNecessary;
- (void)teardown;
@property(readonly, copy, nonatomic) NSArray *runtimeOnlyViews;
- (void)prepare;
- (id)initWithDelegate:(id)arg1;
- (id)cancelBarButtonItemIfExists;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
- (id)leftButtonIfExists;
@property(readonly, nonatomic) UINavigationButton *leftButton; // @synthesize leftButton=_leftButton;
- (id)searchFieldIfExists;
@property(copy, nonatomic) NSString *prompt;
@property(nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property(nonatomic, getter=isHostedByNavigationBar) BOOL hostedByNavigationBar;
@property(nonatomic, getter=isInNavigationPalette) BOOL inNavigationPalette;
@property(nonatomic, getter=isPlacedInToolbar) BOOL placedInToolbar;
@property(nonatomic, getter=isPlacedInNavigationBar) BOOL placedInNavigationBar;
@property(readonly, nonatomic) BOOL backgroundLayoutNeedsUpdate;
@property(nonatomic) BOOL allowsInlineScopeBar;
@property(nonatomic) BOOL showsScopeBar;
- (void)_setShowsScopeBar:(BOOL)arg1;
- (void)setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2;
@property(nonatomic) BOOL showsBookmarkButton;
- (void)_setShowsBookmarkButton:(BOOL)arg1;
@property(nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
- (void)_setSearchResultsButtonSelected:(BOOL)arg1;
@property(nonatomic) BOOL showsSearchResultsButton;
- (void)_setShowsSearchResultsButton:(BOOL)arg1;
@property(nonatomic) BOOL cancelButtonWantsLetterpress;
@property(nonatomic) BOOL autoDisableCancelButton;
- (void)_setAutoDisableCancelButton:(BOOL)arg1;
@property(nonatomic) BOOL showsCancelButton;
- (void)_setShowsCancelButton:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)allowCursorToAppear:(BOOL)arg1;
@property(nonatomic) BOOL usesEmbeddedAppearance;
@property(nonatomic) BOOL drawsBackground;
- (void)_setHideBackground:(BOOL)arg1;
@property(nonatomic) BOOL drawsBackgroundInPalette;
@property(nonatomic) BOOL reliesOnNavigationBarBackdrop;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic) BOOL centerPlaceholder;
@property(nonatomic) long long searchFieldLeftViewMode;
@property(nonatomic) long long barTranslucence;
- (void)_setBarTranslucence:(long long)arg1;
- (BOOL)isTranslucent;
@property(nonatomic) NSUInteger searchBarStyle;
@property(nonatomic) long long barStyle;
- (void)_setBarStyle:(long long)arg1;
@property(readonly, nonatomic, getter=isLegacy) BOOL legacy;

@end

