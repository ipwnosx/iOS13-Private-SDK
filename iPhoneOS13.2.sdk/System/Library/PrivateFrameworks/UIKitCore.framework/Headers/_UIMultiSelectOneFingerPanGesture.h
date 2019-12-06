//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIPanGestureRecognizer.h"

@class UIEvent, UITouch;
@protocol _UIMultiSelectOneFingerPanGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer
{
    UITouch *_activeTouch;
    UIEvent *_activeEvent;
    id <_UIMultiSelectOneFingerPanGestureDelegate> _oneFingerPanDelegate;
}

@property(nonatomic) __weak id <_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate; // @synthesize oneFingerPanDelegate=_oneFingerPanDelegate;
@property(readonly, nonatomic) UIEvent *activeEvent; // @synthesize activeEvent=_activeEvent;
@property(readonly, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
// - (void).cxx_destruct;
- (BOOL)_affectedByGesture:(id)arg1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)_preventsDragInteractionGestures;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

