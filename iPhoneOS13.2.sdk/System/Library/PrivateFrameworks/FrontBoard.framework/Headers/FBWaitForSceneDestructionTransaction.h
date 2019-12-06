//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBSceneManagerObserver-Protocol.h>

@class FBScene, FBSceneManager;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver>
{
    FBSceneManager *_sceneManager;
    FBScene *_sceneToWaitForDeath;
}

@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_sceneToWaitForDeath;
// - (void).cxx_destruct;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

@end

