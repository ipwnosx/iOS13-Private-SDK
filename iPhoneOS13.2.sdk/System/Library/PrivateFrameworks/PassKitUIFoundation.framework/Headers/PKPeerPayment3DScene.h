//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNScene.h>

@class MISSING_TYPE, SCNMaterial, SCNNode;

@interface PKPeerPayment3DScene : SCNScene
{
    SCNNode *_lightNode;
    SCNNode *_cameraNode;
    SCNNode *_textContainerNode;
    SCNMaterial *_textMaterial;
    MISSING_TYPE *_currentSkew;
    MISSING_TYPE *_currentRollPitch;
//     CDStruct_14d5dc5e _currentRotationMatrix;
}

+ 
+ 
+ (MISSING_TYPE *)staticRollPitch;
@property(nonatomic) MISSING_TYPE *currentRollPitch; // @synthesize currentRollPitch=_currentRollPitch;
@property(nonatomic) MISSING_TYPE *currentSkew; // @synthesize currentSkew=_currentSkew;
// @property(nonatomic) CDStruct_14d5dc5e currentRotationMatrix; // @synthesize currentRotationMatrix=_currentRotationMatrix;
@property(retain, nonatomic) SCNMaterial *textMaterial; // @synthesize textMaterial=_textMaterial;
@property(retain, nonatomic) SCNNode *textContainerNode; // @synthesize textContainerNode=_textContainerNode;
@property(retain, nonatomic) SCNNode *cameraNode; // @synthesize cameraNode=_cameraNode;
@property(retain, nonatomic) SCNNode *lightNode; // @synthesize lightNode=_lightNode;
// - (void).cxx_destruct;
- (void)resetScene;
- (id)init;

@end

