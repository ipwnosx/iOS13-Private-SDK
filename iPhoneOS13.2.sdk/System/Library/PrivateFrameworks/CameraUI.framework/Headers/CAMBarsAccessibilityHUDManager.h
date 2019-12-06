//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UILongPressGestureRecognizer, UIView;
@protocol CAMBarsAccessibilityHUDManagerDelegate, CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider;

@interface CAMBarsAccessibilityHUDManager : NSObject <UIGestureRecognizerDelegate>
{
    UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider> *_view;
    id <CAMBarsAccessibilityHUDManagerDelegate> _delegate;
    UILongPressGestureRecognizer *__accessibilityLongPressGestureRecognizer;
}

@property(retain, nonatomic, setter=_setAccessibilityLongPressGestureRecognizer:) UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer; // @synthesize _accessibilityLongPressGestureRecognizer=__accessibilityLongPressGestureRecognizer;
@property(nonatomic) __weak id <CAMBarsAccessibilityHUDManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider> *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (void)preferredContentSizeChanged;
- (void)_handleAccessibilityLongPressGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (CGPoint)locationOfAccessibilityGestureInView:(id)arg1;
- (id)initWithView:(id)arg1 delegate:(id)arg2 cancelsTouchesInView:(BOOL)arg3;

@end

