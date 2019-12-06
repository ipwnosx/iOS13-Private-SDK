//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSceneManagerObserver-Protocol.h>
#import <SpringBoard/SBTestRecipe-Protocol.h>

@class FBScene, SBWindow;

@interface SBFullScreenOcclusionTestRecipe : NSObject <FBSceneManagerObserver, SBTestRecipe>
{
    SBWindow *_window;
    FBScene *_scene;
    FBScene *_scene2;
    BOOL _doTheThing;
}

+ (void)load;
// - (void).cxx_destruct;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(NSUInteger)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(NSUInteger)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)dealloc;
- (id)init;
- (id)title;

@end

