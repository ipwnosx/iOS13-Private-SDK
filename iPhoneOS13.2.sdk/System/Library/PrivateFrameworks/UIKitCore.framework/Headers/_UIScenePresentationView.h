//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisibilityPropagationView.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/BSInvalidatable-Protocol.h>
#import <UIKitCore/FBSceneObserver-Protocol.h>
#import <UIKitCore/_UISceneLayerHostContainerViewDataSource-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiffInspector, FBScene, NSString, UIScenePresentationContext, _UISceneLayerHostContainerView, _UIScenePresenter;
@protocol UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIScenePresentationView : _UIVisibilityPropagationView <FBSceneObserver, _UISceneLayerHostContainerViewDataSource, BSDescriptionProviding, UIScenePresentation, BSInvalidatable>
{
    _UIScenePresenter *_presenter;
    FBScene *_scene;
    FBSSceneSettings *_effectiveSettings;
    UIScenePresentationContext *_currentPresentationContext;
    _UISceneLayerHostContainerView *_hostContainerView;
    FBSSceneSettingsDiffInspector *_geometrySettingsDiffInspector;
    BOOL _invalidated;
}

@property(retain, nonatomic) _UISceneLayerHostContainerView *hostContainerView; // @synthesize hostContainerView=_hostContainerView;
@property(retain, nonatomic) UIScenePresentationContext *currentPresentationContext; // @synthesize currentPresentationContext=_currentPresentationContext;
// - (void).cxx_destruct;
- (void)_updateFrameAndTransform;
- (void)_geometryDidUpdateWithTransitionContext:(id)arg1;
- (void)_updateBackgroundColor;
- (void)_updatePresentationContextFrom:(id)arg1 toContext:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (id)presentationContextForSceneLayerHostContainerView;
@property(readonly, nonatomic) __weak id <UIScenePresenter> presenter;
- (void)invalidate;
- (id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)dealloc;
- (id)initWithPresenter:(id)arg1;

@end

