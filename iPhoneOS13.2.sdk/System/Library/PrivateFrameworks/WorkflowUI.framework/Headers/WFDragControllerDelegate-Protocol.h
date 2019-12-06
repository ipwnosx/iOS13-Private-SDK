//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIViewController, WFDragController;
@protocol WFDragControllerDelegate;

@protocol WFDragControllerDelegate <NSObject>

@optional
- (void)dragController:(WFDragController *)arg1 wasAcceptedByDelegate:(id <WFDragControllerDelegate>)arg2;
- (void)dragController:(WFDragController *)arg1 willBeAcceptedByDelegate:(id <WFDragControllerDelegate>)arg2;
- (BOOL)dragController:(WFDragController *)arg1 shouldAcceptViewWithCompletion:(void (^)(void))arg2;
- (void)dragController:(WFDragController *)arg1 movedInsideViewControllers:(NSArray *)arg2;
- (void)dragController:(WFDragController *)arg1 didExitViewController:(UIViewController *)arg2;
- (void)dragController:(WFDragController *)arg1 didEnterViewController:(UIViewController *)arg2;
- (void)dragControllerWillBeginDragging:(WFDragController *)arg1;
@end

