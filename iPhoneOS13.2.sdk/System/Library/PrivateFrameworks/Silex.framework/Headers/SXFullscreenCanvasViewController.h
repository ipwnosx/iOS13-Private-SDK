//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SXFullscreenCanvasViewControllerDelegate;

@interface SXFullscreenCanvasViewController : UIViewController
{
    BOOL _isTransitioning;
    long long _statusBarStyle;
    id <SXFullscreenCanvasViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SXFullscreenCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
// - (void).cxx_destruct;
- (void)dismiss;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

