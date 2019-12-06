//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView, UIViewController, _UIRotatingAlertController;

@protocol _UIRotatingAlertControllerDelegate <NSObject>
- (CGRect)presentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;
- (CGRect)initialPresentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;
- (UIView *)hostViewForSheet:(_UIRotatingAlertController *)arg1;

@optional
- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerDidChange:(UIViewController *)arg2;
- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerWillChange:(UIViewController *)arg2;
@end

