//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIViewPropertyAnimator;

@protocol CCUIContentModuleContentViewController <NSObject>
@property(readonly, nonatomic) double preferredExpandedContentHeight;

@optional
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property(readonly, nonatomic) BOOL providesOwnPlatter;
@property(readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)displayWillTurnOff;
- (void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(void (^)(void))arg2;
- (BOOL)canDismissPresentedContent;
- (void)didTransitionToExpandedContentMode:(BOOL)arg1;
- (void)willTransitionToExpandedContentMode:(BOOL)arg1;
- (BOOL)shouldFinishTransitionToExpandedContentModule;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
@end

