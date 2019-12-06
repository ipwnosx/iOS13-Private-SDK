//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNSceneRendererDelegate-Protocol.h>
#import <AvatarKit/_SCNSceneRendererDelegateSPI-Protocol.h>

@class AVTAvatar, AVTAvatarEnvironment, SCNNode, SCNRenderer;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>
{
    SCNRenderer *_renderer;
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    SCNNode *_avatarNode;
    AVTAvatarEnvironment *_environment;
}

+ (CGImageRef)copyRescaledCGImage:(CGImageRef)arg1 by:(float)arg2;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (UIImage )animatedImageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (UIImage )_imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 useACopy:(BOOL)arg4;
- (UIImage )_imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (UIImage )imageWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (void)setupAvatarWithOptions:(id)arg1 useACopy:(BOOL)arg2;
- (void)_applyOptions:(id)arg1;
- (id)init;
@property(retain, nonatomic) AVTAvatar *avatar;
@property(readonly, nonatomic) SCNRenderer *renderer;

@end

