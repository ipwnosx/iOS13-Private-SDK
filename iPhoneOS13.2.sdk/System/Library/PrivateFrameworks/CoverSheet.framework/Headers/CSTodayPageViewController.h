//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSPageViewController.h>

#import <CoverSheet/CSPageViewControllerProtocol-Protocol.h>
#import <CoverSheet/CSTodayViewControllerDelegate-Protocol.h>
#import <CoverSheet/SBUICoronaAnimationControllerParticipant-Protocol.h>
#import <CoverSheet/SBUISpotlightInitiating-Protocol.h>

@class CSLayoutStrategy, CSTodayContentViewController, CSTodayViewController, NSString, SBViewControllerTransitionContext;

@interface CSTodayPageViewController : CSPageViewController <CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSPageViewControllerProtocol, SBUISpotlightInitiating>
{
    CSLayoutStrategy *_layoutStrategy;
    CSTodayContentViewController *_contentViewController;
}

+ (BOOL)isAvailableForConfiguration;
+ (NSUInteger)requiredCapabilities;
@property(retain, nonatomic) CSTodayContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) CSLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CSTodayViewController *todayViewController; // @dynamic todayViewController;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg1;
- (void)coverSheetTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2;
- (BOOL)_isPortrait;
- (BOOL)_listBelowDateTime;
- (double)listInsetX;
- (double)customListWidth;
- (NSUInteger)listWidthStrategy;
- (NSUInteger)listLayout;
- (double)minimumDateToListSpacing;
- (double)dateTimeInsetX;
@property(readonly, copy, nonatomic) NSString *pageRole;
- (NSUInteger)dateTimeLayout;
- (void)updateTransitionWhileRubberBandingInProgress:(BOOL)arg1;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (id)spotlightHeaderAcquiringViewController;
- (void)cleanupAfterSpotlightDismissal;
- (void)resetForSpotlightDismissalAnimated:(BOOL)arg1;
@property(retain, nonatomic) SBViewControllerTransitionContext *transitionContext;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

