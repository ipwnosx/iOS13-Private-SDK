//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICViewControllerManager, UINavigationController, UIWindowScene;

@interface UIViewController (IC)
+ (void)ic_enableUIViewAnimations:(BOOL)arg1 forBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIWindowScene *ic_windowScene;
@property(readonly, nonatomic) UINavigationController *ic_rootNavigationController;
- (id)ic_embedInNavigationControllerForModalPresentation;
- (id)ic_topViewController;
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2;
- (id)ic_safeAreaLayoutGuide;
- (double)ic_safeAreaDistanceFromBottom;
- (double)ic_safeAreaDistanceFromTop;
- (BOOL)ic_isViewVisible;
- (void)ic_showViewController:(id)arg1 animated:(BOOL)arg2 sender:(id)arg3;
@property(readonly, nonatomic) BOOL ic_isRTL;
@property(readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@end

