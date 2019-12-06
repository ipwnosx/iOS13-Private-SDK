//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/CLLocationManagerDelegate-Protocol.h>
#import <PlacesKit/MKMapViewDelegate-Protocol.h>
#import <PlacesKit/PXPlacesGeotaggedItemDataSourceDelegate-Protocol.h>

@class CLLocationManager, NSMapTable, NSMutableDictionary, NSOrderedSet, NSSet, PXPlacesImageCache, PXPlacesMapPipelineExecutionContext, PXPlacesMapView;
@protocol MKAnnotation, OS_dispatch_queue, OS_dispatch_source, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerFocusDelegate, PXPlacesMapControllerLoadingStateDelegate, PXPlacesMapControllerSelectionDelegate;

@interface PXPlacesMapController : NSObject <MKMapViewDelegate, CLLocationManagerDelegate, PXPlacesGeotaggedItemDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_pipelinesQueue;
    NSObject<OS_dispatch_queue> *_dataSourcesQueue;
    NSObject<OS_dispatch_queue> *_executionContextQueue;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    NSMapTable *_dataSourceExecutionContexts;
    NSMapTable *_pendingDataSourceChanges;
    BOOL _pipelineExecutionAllowed;
    BOOL _mapViewIsVisible;
    BOOL _signalFocusWhenMapViewBecomesVisible;
    int _currentLocationAuthorizationStatus;
    id <PXPlacesMapControllerSelectionDelegate> _selectionDelegate;
    id <PXPlacesMapControllerChangeDelegate> _changeDelegate;
    id <PXPlacesMapControllerFocusDelegate> _focusDelegate;
    id <PXPlacesMapControllerLoadingStateDelegate> _stateDelegate;
    id <MKAnnotation> _currentSelection;
    NSSet *_dataSources;
    NSMapTable *_dataSourceToPipelineMap;
    PXPlacesMapView *_mapView;
    PXPlacesMapPipelineExecutionContext *_currentExecutionContext;
    PXPlacesImageCache *_cache;
    CLLocationManager *_locationManager;
    NSMutableDictionary *_showDebugMapRectColors;
//     struct CLLocationCoordinate2D _initialCenterCoordinate;
    UIEdgeInsets _initialEdgePadding;
//     CDStruct_02837cd9 _signalFocusMapRect;
}

// + (void)launchMapsAtCoordinate:(struct CLLocationCoordinate2D)arg1 withTitle:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *showDebugMapRectColors; // @synthesize showDebugMapRectColors=_showDebugMapRectColors;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) PXPlacesImageCache *cache; // @synthesize cache=_cache;
// @property(nonatomic) CDStruct_02837cd9 signalFocusMapRect; // @synthesize signalFocusMapRect=_signalFocusMapRect;
@property(nonatomic) BOOL signalFocusWhenMapViewBecomesVisible; // @synthesize signalFocusWhenMapViewBecomesVisible=_signalFocusWhenMapViewBecomesVisible;
@property BOOL mapViewIsVisible; // @synthesize mapViewIsVisible=_mapViewIsVisible;
@property BOOL pipelineExecutionAllowed; // @synthesize pipelineExecutionAllowed=_pipelineExecutionAllowed;
@property(retain) PXPlacesMapPipelineExecutionContext *currentExecutionContext; // @synthesize currentExecutionContext=_currentExecutionContext;
@property(retain, nonatomic) PXPlacesMapView *mapView; // @synthesize mapView=_mapView;
@property(retain) NSMapTable *dataSourceToPipelineMap; // @synthesize dataSourceToPipelineMap=_dataSourceToPipelineMap;
@property(retain) NSSet *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) id <MKAnnotation> currentSelection; // @synthesize currentSelection=_currentSelection;
@property(nonatomic) int currentLocationAuthorizationStatus; // @synthesize currentLocationAuthorizationStatus=_currentLocationAuthorizationStatus;
@property(nonatomic) UIEdgeInsets initialEdgePadding; // @synthesize initialEdgePadding=_initialEdgePadding;
// @property(nonatomic) struct CLLocationCoordinate2D initialCenterCoordinate; // @synthesize initialCenterCoordinate=_initialCenterCoordinate;
@property __weak id <PXPlacesMapControllerLoadingStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property __weak id <PXPlacesMapControllerFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
@property __weak id <PXPlacesMapControllerChangeDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property __weak id <PXPlacesMapControllerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
// - (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (void)mapContainerViewDidDisappear;
- (void)mapContainerViewWillDisappear;
- (void)mapContainerViewDidAppear;
- (void)mapContainerViewWillAppear;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)dataSource:(id)arg1 didChange:(id)arg2;
@property(readonly, nonatomic) NSOrderedSet *currentSelectedGeotaggables;
- (double)_zPositionForAnnotationIndex:(long long)arg1;
- (void)_executeUpdatePlanResults:(id)arg1;
- (double)_fadeOutAnimationDuration;
- (double)_fadeInAnimationDuration;
- (double)_defaultAnimationDuration;
- (void)_updateMapWithDataSource:(id)arg1 dataSourceChange:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)executePipeline:(id)arg1 dataSourceChange:(id)arg2 context:(id)arg3;
- (void)_updateMapWithDataSources:(id)arg1 dataSourceChangeTable:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateMapWithAllDataSources:(CDUnknownBlockType)arg1;
// - (CDStruct_02837cd9)_ensureMinimumSize:(CDStruct_02837cd9)arg1;
- (void)setVisibleMapRelativeToViewPort:(id)arg1 andViewSize:(CGSize)arg2 forRenderer:(id)arg3;
// - (void)_setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3;
// - (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forRenderer:(id)arg2 animated:(BOOL)arg3;
// - (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forPipeline:(id)arg2 animated:(BOOL)arg3;
// - (void)_showDebugMapRect:(CDStruct_02837cd9)arg1 color:(id)arg2;
// - (CDStruct_02837cd9)mapRectForNearbyQueriesFromRect:(CDStruct_02837cd9)arg1 atScale:(double)arg2 targetViewSize:(CGSize)arg3;
// - (CDStruct_02837cd9)mapRectForGeotaggablesFromDataSource:(id)arg1 renderer:(id)arg2 mapViewSize:(CGSize)arg3 fitAdjusted:(BOOL )arg4;
// - (CDStruct_02837cd9)_mapRectForGeotaggablesFromPipeline:(id)arg1 fitAdjusted:(BOOL )arg2;
- (void)focusOnGeotaggablesFromPipelineImmediately:(id)arg1;
- (void)focusOnGeotaggablesFromPipeline:(id)arg1 animated:(BOOL)arg2;
- (id)visibleGeotaggableFromDataSource:(id)arg1;
- (void)runPipelines;
- (void)resumePipelines:(CDUnknownBlockType)arg1;
- (void)suspendPipelines;
- (void)removePipeline:(id)arg1;
- (void)removeDataSource:(id)arg1;
- (void)addPipeline:(id)arg1;
- (id)createTrackingBarButtonItem;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

