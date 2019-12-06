//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/MediaControlsCollectionViewController.h>

#import <MediaControls/CCUIContentModuleContentViewController-Protocol.h>
#import <MediaControls/MRPlatterViewControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsCollectionViewDataSource-Protocol.h>
#import <MediaControls/MediaControlsCollectionViewDelegate-Protocol.h>
#import <MediaControls/MediaControlsEndpointsManagerDelegate-Protocol.h>

@class AVExternalPlaybackMonitor, MPAVEndpointRoute, MPAVOutputDeviceRoutingDataSource, MPAVRoutingViewController, MPMediaControlsConfiguration, MediaControlsEndpointsManager, NSString;

@interface MediaControlsEndpointsViewController : MediaControlsCollectionViewController <MRPlatterViewControllerDelegate, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate, MediaControlsEndpointsManagerDelegate, CCUIContentModuleContentViewController>
{
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;
    long long _lastSelectedModeForActivePlatterViewController;
    BOOL _didRetrieveActiveSystemRouteOnce;
    BOOL _shouldReselectActiveSystemRoute;
    BOOL _prewarming;
    BOOL _shouldTransitionToVisibleWhenReady;
    BOOL _didTransitionToVisible;
    BOOL _shouldPresentUsingViewService;
    BOOL _dismissing;
    BOOL _onScreen;
    MPMediaControlsConfiguration *_configuration;
    id /* CDUnknownBlockType */ _routingCornerViewTappedBlock;
    id /* CDUnknownBlockType */ _homeGestureDismissalAllowedBlock;
    MediaControlsEndpointsManager *_endpointsManager;
    MPAVRoutingViewController *_routingViewController;
    MPAVEndpointRoute *_selectedRoute;
    NSString *_routingContextUID;
    AVExternalPlaybackMonitor *_externalPlaybackMonitor;
}

+ (BOOL)_shouldTransitionEarlyOnSystemRoute;
@property(retain, nonatomic) AVExternalPlaybackMonitor *externalPlaybackMonitor; // @synthesize externalPlaybackMonitor=_externalPlaybackMonitor;
@property(copy, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
@property(retain, nonatomic) MPAVEndpointRoute *selectedRoute; // @synthesize selectedRoute=_selectedRoute;
@property(retain, nonatomic) MPAVRoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // @synthesize endpointsManager=_endpointsManager;
@property(nonatomic, getter=isOnScreen) BOOL onScreen; // @synthesize onScreen=_onScreen;
@property(nonatomic, getter=isDismissing) BOOL dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) BOOL shouldPresentUsingViewService; // @synthesize shouldPresentUsingViewService=_shouldPresentUsingViewService;
@property(copy, nonatomic) id /* CDUnknownBlockType */ homeGestureDismissalAllowedBlock; // @synthesize homeGestureDismissalAllowedBlock=_homeGestureDismissalAllowedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ routingCornerViewTappedBlock; // @synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock;
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;
- (void)_transitionToVisibleIfNeeded;
- (BOOL)_isReadyForAppearanceTransition;
- (void)_selectActiveSystemRouteIfNeeded;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_setSelectedRoute:(id)arg1 isUserSelected:(BOOL)arg2 animated:(BOOL)arg3;
- (void)endUpdates;
- (void)_setupRoutingViewController;
- (void)_setupEndpointsManager;
- (void)_updateSupportedModesForSelectedPlatterViewController;
- (void)_updateModesForSelectedPlatterViewController;
- (void)_supportedModesForSelectedRoute:(NSUInteger )arg1 selectedMode:(long long )arg2;
- (void)_updateEndpointRouteForOutputDeviceDataSource:(id)arg1;
- (void)_assignRouteViewControllerToSelectedPanelViewController;
- (void)_updateDiscoveryMode;
- (BOOL)_isSelectedRouteInRoutes;
- (void)endpointsManager:(id)arg1 defersRoutesReplacement:(CDUnknownBlockType)arg2;
- (void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2;
- (void)mediaControlsCollectionViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (BOOL)mediaControlsCollectionViewController:(id)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(id)arg1 didEndDisplayingViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 didDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 willDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (long long)defaultSelectedItemIndexForCollectionViewController:(id)arg1;
- (id)mediaControlsCollectionViewController:(id)arg1 viewControllerForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCollectionViewController:(id)arg1;
- (double)preferredItemHeightGivenWidth:(double)arg1;
- (double)preferredItemHeight;
- (void)_transitionToVisible:(BOOL)arg1;
- (void)reloadData;
- (void)setDisplayMode:(long long)arg1;
- (void)updateContentInsets;
- (void)dismissPlatterViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)platterViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)platterViewController:(id)arg1 homeGestureDismisalAllowedDidChange:(BOOL)arg2;
- (BOOL)shouldPresentUsingViewServicePlatterViewController:(id)arg1;
- (id)platterViewController:(id)arg1 presentingViewForPresentedViewController:(id)arg2;
- (void)platterViewController:(id)arg1 willToggleRoutingPicker:(BOOL)arg2;
- (void)platterViewController:(id)arg1 didToggleRoutingPicker:(BOOL)arg2;
- (void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canDismissPresentedContent;
@property(readonly, nonatomic) BOOL providesOwnPlatter;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
- (void)stopPrewarming;
- (void)startPrewarming;
- (void)didSelectEndpoint:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

