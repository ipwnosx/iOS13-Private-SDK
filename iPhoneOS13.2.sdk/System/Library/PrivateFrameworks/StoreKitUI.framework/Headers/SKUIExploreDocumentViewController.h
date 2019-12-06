//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/CLLocationManagerDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUINavigationBarDisplayConfiguring-Protocol.h>
#import <StoreKitUI/SKUIStackedBarDelegate-Protocol.h>

@class CLLocationManager, NSArray, SKUIContentInsetScrollView, SKUIExploreTemplateElement, SKUIMetricsImpressionSession, SKUIStorePageSectionsViewController, UINavigationController, UISplitViewController;

__attribute__((visibility("hidden")))
@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUINavigationBarDisplayConfiguring, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController>
{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    NSArray *_contentOffsets;
    SKUIContentInsetScrollView *_contentScrollView;
    SKUIExploreTemplateElement *_exploreTemplate;
    UINavigationController *_leftVC;
    CLLocationManager *_locationManager;
    UINavigationController *_navigationController;
    BOOL _nearMeEnabled;
    SKUIStorePageSectionsViewController *_rightVC;
    UISplitViewController *_splitVC;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
// - (void).cxx_destruct;
- (void)_endAllPendingActiveImpression;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (id)_rightVCColorScheme;
- (id)_rightPageComponents;
- (id)_leftPageComponentsAtIndex:(long long)arg1;
- (double)_leftColumnWidth;
- (void)_reloadRightViewController;
- (void)_reloadSelectionForViewController:(id)arg1;
- (void)_reloadLeftViewControllers;
- (void)_reloadData;
- (id)_pageComponentsAtIndex:(long long)arg1;
- (id)_newSectionsViewControllerAtIndex:(long long)arg1;
- (void)_getPageComponents:(id )arg1 title:(id )arg2 forViewControllerAtIndex:(long long)arg3;
- (id)_rootNavigationTitle;
- (void)_contentInsetDidChange:(id)arg1;
- (BOOL)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)stackedBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (BOOL)prefersNavigationBarHidden;
- (id)navigationBarTintColor;
- (BOOL)prefersNavigationBarBackgroundViewHidden;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)impressionableViewElements;
- (void)_updateChildViewControllers;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
- (void)loadView;
- (id)contentScrollView;
- (void)setClientContext:(id)arg1;
- (BOOL)managesNavigationBarContents;
- (void)selectGenreListComponent:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

@end

