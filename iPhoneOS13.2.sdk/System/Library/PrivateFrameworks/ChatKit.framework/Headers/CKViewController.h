//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface CKViewController : UIViewController
{
    BOOL _appeared;
    BOOL _deferredAppeared;
    BOOL _appearing;
    BOOL _dissapearing;
}

@property(nonatomic) BOOL dissapearing; // @synthesize dissapearing=_dissapearing;
@property(nonatomic) BOOL appearing; // @synthesize appearing=_appearing;
@property(nonatomic) BOOL deferredAppeared; // @synthesize deferredAppeared=_deferredAppeared;
@property(nonatomic) BOOL appeared; // @synthesize appeared=_appeared;
- (void)childViewControllersPerform:(SEL)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)performResumeDeferredSetup;
- (void)systemApplicationWillEnterForeground;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)significantTimeChange;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

