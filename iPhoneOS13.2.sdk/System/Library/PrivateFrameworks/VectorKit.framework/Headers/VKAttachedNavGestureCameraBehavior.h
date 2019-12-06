//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

#import <VectorKit/VKNavGestureCameraBehavior-Protocol.h>

@class VKNavCameraController, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKAttachedNavGestureCameraBehavior : VKGestureCameraBehavior <VKNavGestureCameraBehavior>
{
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    VKTimedAnimation *_tapZoomAnimation;
}

- (void)updatePitch:(CGPoint)arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(CGPoint)arg2;
- (void)updatePan:(CGPoint)arg1 lastScreenPoint:(CGPoint)arg2;
- (void)updateZoom:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginZoom:(CGPoint)arg1;
- (void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startZoomAnimationFrom:(double)arg1 to:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNavCameraController:(id)arg1;

@end

