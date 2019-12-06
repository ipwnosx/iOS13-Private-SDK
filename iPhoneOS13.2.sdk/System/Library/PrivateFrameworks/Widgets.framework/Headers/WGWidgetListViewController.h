//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <Widgets/WGWidgetDebugging-Protocol.h>
#import <Widgets/WGWidgetDiscoveryObserving-Protocol.h>
#import <Widgets/WGWidgetExtensionVisibilityProviding-Protocol.h>
#import <Widgets/WGWidgetHostingViewControllerDelegate-Protocol.h>
#import <Widgets/WGWidgetListItemViewControllerDelegate-Protocol.h>

@class MTMaterialView, NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, UIControl, UIScrollView, UIStackView, WGWidgetDiscoveryController;
@protocol WGWidgetListViewControllerDelegate;

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate, WGWidgetExtensionVisibilityProviding>
{
    WGWidgetDiscoveryController *_discoveryController;
    MTMaterialView *_captureOnlyMaterialView;
    NSMutableDictionary *_userInterfaceStylesToCaptureOnlyMaterialViews;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSMutableDictionary *_cancelTouchesAssertionsByWidgetID;
    NSMutableDictionary *_widgetIDsToItemVCs;
    CGSize _maxVisibleContentSize;
    BOOL _shouldBlurContent;
    BOOL _editingIcons;
    id <WGWidgetListViewControllerDelegate> _delegate;
    UIControl *_editButton;
    NSArray *_previouslyVisibleWidgetIDs;
    NSLayoutConstraint *_stackViewBottomConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *stackViewBottomConstraint; // @synthesize stackViewBottomConstraint=_stackViewBottomConstraint;
@property(retain, nonatomic, getter=_previouslyVisibleWidgetIDs, setter=_setPreviouslyVisibleWidgetIDs:) NSArray *previouslyVisibleWidgetIDs; // @synthesize previouslyVisibleWidgetIDs=_previouslyVisibleWidgetIDs;
@property(nonatomic, getter=isEditingIcons) BOOL editingIcons; // @synthesize editingIcons=_editingIcons;
@property(retain, nonatomic) UIControl *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) BOOL shouldBlurContent; // @synthesize shouldBlurContent=_shouldBlurContent;
@property(nonatomic) __weak id <WGWidgetListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)isWidgetExtensionVisible:(id)arg1;
- (id)widgetListItemViewController:(id)arg1 widgetHostWithIdentifier:(id)arg2;
- (CGRect)visibleFrameForWidget:(id)arg1;
- (BOOL)managingContainerIsVisibleForWidget:(id)arg1;
- (void)remoteViewControllerDidDisconnectForWidget:(id)arg1;
- (void)brokenViewDidAppearForWidget:(id)arg1;
- (void)remoteViewControllerViewDidHideForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (UIEdgeInsets)layoutMarginForWidget:(id)arg1;
- (UIEdgeInsets)marginInsetsForWidget:(id)arg1;
- (void)unregisterWidgetForRefreshEvents:(id)arg1;
- (void)registerWidgetForRefreshEvents:(id)arg1;
- (CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (CGSize)_maxVisibleContentSize;
- (CGRect)_visibleContentFrameForBounds:(CGRect)arg1 withContentOccludingInsets:(UIEdgeInsets)arg2;
- (void)widgetDiscoveryController:(id)arg1 orderDidChangeForWidgetIdentifiers:(id)arg2;
- (void)widgetDiscoveryControllerSignificantWidgetsChange:(id)arg1;
- (void)_scrollViewDidStop;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_presentEditViewController;
- (id)_wrapperViewForWidgetPlatterView:(id)arg1;
- (void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1;
- (id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
- (void)_invokeBlockWithPlatterViewsVisibleInBounds:(CDUnknownBlockType)arg1;
- (void)_invokeBlockWithPlatterViewsVisibleInRect:(CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)_invokeBlockWithAllPlatterViews:(CDUnknownBlockType)arg1;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 withPlatterViewsPassingTest:(CDUnknownBlockType)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)resizeWidgetWrapperView:(id)arg1 toSize:(CGSize)arg2 withTransitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)_adjustContentOffsetToInsideContent:(BOOL)arg1;
- (void)_enableTouchesOnAllWidgets;
- (void)_disableTouchesOnAllWidgets;
- (void)_invalidateAllCancelTouchesAssertions;
- (void)_cancelTouchesForWidget:(id)arg1;
- (void)_cancelTouchesForHitWidgetIfNecessaryAndDisableTouchesOnAllWidgets;
- (id)_platterViewAtLocation:(CGPoint)arg1;
- (void)_repopulateStackView;
- (void)_updateBackgroundViewForPlatter:(id)arg1;
- (id)_scrollViewIfLoaded;
- (id)_scrollViewLoadingIfNecessary:(BOOL)arg1;
- (void)_configureScrollView;
- (void)_invalidateAllAlternateCaptureOnlyMaterialViews;
- (void)_invalidateAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1;
- (void)_configureAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1;
- (void)_configureCaptureOnlyMaterialView;
- (id)_newCaptureOnlyMaterialView;
- (void)_pruneAlternateCaptureOnlyMaterialViews;
- (CDUnknownBlockType)_insert:(BOOL)arg1 listItem:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(BOOL)arg4;
- (void)_didUpdateStackViewArrangedSubviews;
- (CDUnknownBlockType)_beginInsertion:(BOOL)arg1 ofListItem:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(BOOL)arg4;
- (NSUInteger)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3;
- (void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (void)_configureStackView;
- (id)_platterViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2;
- (id)_listItemViewControllerForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2;
@property(readonly, nonatomic, getter=_group) NSString *group;
@property(readonly, nonatomic) NSUInteger widgetCount;
@property(readonly, nonatomic) UIScrollView *widgetListView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)visibleWidgetIdentifiers;

@end

