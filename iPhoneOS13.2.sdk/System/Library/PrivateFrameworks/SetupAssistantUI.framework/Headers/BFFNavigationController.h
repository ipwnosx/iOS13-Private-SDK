//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSRootController.h>


@class NSMutableArray, NSMutableDictionary, UIColor;

@interface BFFNavigationController : PSRootController <UINavigationControllerDelegate>
{
    NSMutableArray *_observers;
    NSMutableDictionary *_appearanceHandlers;
    long long _pendingShowOperation;
    UIColor *_backgroundColor;
    BOOL _animating;
    BOOL _pushWithoutDeferringTransitionsWhileInBackground;
    BOOL _inBackground;
}

@property(nonatomic, getter=isInBackground) BOOL inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) BOOL pushWithoutDeferringTransitionsWhileInBackground; // @synthesize pushWithoutDeferringTransitionsWhileInBackground=_pushWithoutDeferringTransitionsWhileInBackground;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
// - (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)removeDelegateObserver:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)addDelegateObserver:(id)arg1;
- (void)_reapObservers;
- (void)setDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)popToViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (long long)preferredStatusBarStyle;
@property(retain, nonatomic) UIColor *backgroundColor;
- (BOOL)_canShowTextServices;
- (BOOL)_usesTransitionController;
- (NSUInteger)supportedInterfaceOrientations;
- (id)init;

@end

