//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <FrontBoard/FBSceneLayerManagerObserver-Protocol.h>
#import <FrontBoard/_FBSceneGeometryObserver-Protocol.h>

@class FBScene, NSArray, NSMutableArray, NSString;
@protocol FBSceneLayerHostContainerViewDataSource;

@interface FBSceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, _FBSceneGeometryObserver>
{
    FBScene *_scene;
    id <FBSceneLayerHostContainerViewDataSource> _dataSource;
    NSMutableArray *_hostViews;
    NSMutableArray *_hostedLayers;
    BOOL _clippingDisabled;
}

@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(nonatomic, getter=isClippingDisabled) BOOL clippingDisabled; // @synthesize clippingDisabled=_clippingDisabled;
@property(nonatomic) __weak id <FBSceneLayerHostContainerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSArray *hostedLayers; // @synthesize hostedLayers=_hostedLayers;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_updateRenderingMode;
- (void)_rebuildLayers;
- (id)window;
- (id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)updateRenderingMode;
- (void)rebuildLayers;
- (BOOL)hasContent;
- (BOOL)isHosting;
- (void)_adjustHostViewFrame:(id)arg1;
- (id)_createHostViewForLayer:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (id)init;

@end

