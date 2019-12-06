//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUIFoundation/PKMotionManagerClientProtocol-Protocol.h>

@class MISSING_TYPE, NSCache, NSMutableArray, PKMotionManager, SCNMaterial;
@protocol OS_dispatch_queue;

@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol>
{
    NSCache *_cache;
    SCNMaterial *_textMaterial;
    NSObject<OS_dispatch_queue> *_scenesQueue;
    NSObject<OS_dispatch_queue> *_sceneLoadingQueue;
    NSMutableArray *_activeScenes;
//     CDStruct_14d5dc5e _rotationMatrix;
    MISSING_TYPE *_skew;
    MISSING_TYPE *_lastRollPitch;
//     CDStruct_14d5dc5e _staticRotationMatrix;
    MISSING_TYPE *_staticSkew;
    PKMotionManager *_motionManager;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)nodeForCharacter:(id)arg1;
- (void)charactersForText:(id)arg1 completion:(CDUnknownBlockType)arg2 synchronously:(BOOL)arg3;
- (id)material;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)sceneDidBecomeInactive:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)relinquishScene:(id)arg1;
- (void)newSceneWithCompletion:(CDUnknownBlockType)arg1 synchronously:(BOOL)arg2;
- (id)init;

@end

