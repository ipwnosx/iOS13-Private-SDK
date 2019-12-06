//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSDiOSCanvasViewController, UIColor, UIGestureRecognizer, UITouch, UIView, UIViewController;

@protocol TSDiOSCanvasViewControllerDelegate <NSObject>

@optional
- (UIColor *)backgroundColorForDragUIPlatter;
- (BOOL)canvasViewController:(TSDiOSCanvasViewController *)arg1 enableSwipeGestureWithNumberOfTouches:(NSUInteger)arg2;
- (UIViewController *)viewControllerForPresentingAnnotationAuthorUI;
- (void)handleFindTapAtPoint:(CGPoint)arg1;
- (BOOL)inFindReplaceMode;
- (BOOL)allowEditMenuToAppear;
- (BOOL)isPopoverGestureInFlight;
- (Class)canvasViewClassOverride;
- (BOOL)shouldIgnoreTextGestures;
- (BOOL)canvasViewControllerShouldShowScaleFeedback:(TSDiOSCanvasViewController *)arg1;
- (BOOL)canvasViewController:(TSDiOSCanvasViewController *)arg1 shouldBeginTapHoldDragAtPoint:(CGPoint)arg2;
- (BOOL)allowTouchOutsideCanvasView:(UITouch *)arg1 forGesture:(UIGestureRecognizer *)arg2;
- (UIView *)viewForGestureRecognizer:(UIGestureRecognizer *)arg1;
@end

