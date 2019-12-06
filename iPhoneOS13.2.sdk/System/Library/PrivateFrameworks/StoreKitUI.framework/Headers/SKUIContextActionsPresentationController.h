//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsPresentationController : UIPresentationController
{
    UIVisualEffectView *_backgroundView;
    id /* CDUnknownBlockType */ _dismissalAnimations;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissalAnimations; // @synthesize dismissalAnimations=_dismissalAnimations;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
// - (void).cxx_destruct;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldRemovePresentersView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

