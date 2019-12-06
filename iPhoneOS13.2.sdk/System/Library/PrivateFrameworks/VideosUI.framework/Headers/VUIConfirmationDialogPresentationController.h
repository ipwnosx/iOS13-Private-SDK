//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationDialogPresentationController : UIPresentationController
{
    UIVisualEffectView *_backdropView;
    id /* CDUnknownBlockType */ _completedAnimationBlock;
    CGSize _modalSize;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completedAnimationBlock; // @synthesize completedAnimationBlock=_completedAnimationBlock;
@property(nonatomic) CGSize modalSize; // @synthesize modalSize=_modalSize;
// - (void).cxx_destruct;
- (void)_tapGesture:(id)arg1;
- (void)_layoutPresentedView;
@property(readonly, nonatomic) UIVisualEffectView *backdropView;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (long long)presentationStyle;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

