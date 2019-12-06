//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollViewPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPinchGestureRecognizer : NSObject
{
    double _scale;
    double _velocity;
    long long _state;
    UIScrollViewPinchGestureRecognizer *_gestureRecognizer;
}

@property(retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
// - (void).cxx_destruct;
- (id)_activeTouchesForEvent:(id)arg1;
- (CGPoint)anchorPoint;
- (double)velocity;
- (double)scale;
@property(nonatomic) long long state;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)simulateScale:(double)arg1 velocity:(double)arg2;

@end

