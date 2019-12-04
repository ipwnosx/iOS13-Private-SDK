//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIPanGestureRecognizer, UIView, _UIDynamicAnimationGroup;
@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate>
{
    double _prevResizingOffset;
    double _resizingOffset;
    double _foregroundOpacity;
    _UIDynamicAnimationGroup *_resizingAnimationGroup;
    UIView *_grabber;
    UIColor *_grabberColor;
    _Bool _isResizing;
    id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> _delegate;
    UIPanGestureRecognizer *_gestureRecognizer;
}

+ (double)savedResizingOffset;
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) double resizingOffset; // @synthesize resizingOffset=_resizingOffset;
@property(nonatomic) __weak id <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(_Bool)arg2;
- (void)handleResizeGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)stopResizing;
- (void)uninstallGestureRecognizers;
- (void)updateGestureRecognizers;
- (void)dimKeys:(id)arg1;
- (void)setRenderConfig:(id)arg1;
@property(readonly, nonatomic) _Bool isResizing;
- (void)saveResizingStopIndex:(unsigned long long)arg1;
- (void)reloadResizingOffset;
- (void)updateGrabber;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
