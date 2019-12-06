//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpotlightUIInternal/APUIShortLookViewControllerDelegate-Protocol.h>
#import <SpotlightUIInternal/SFFeedbackListener-Protocol.h>
#import <SpotlightUIInternal/SPUIResultsViewDelegate-Protocol.h>
#import <SpotlightUIInternal/SPUISearchHeaderDelegate-Protocol.h>
#import <SpotlightUIInternal/SearchUIFirstTimeExperienceDelegate-Protocol.h>
#import <SpotlightUIInternal/SearchUIResultsViewDelegate-Protocol.h>

@class NSMutableSet, SPUILockScreenFooterView, SPUIResultsViewController, SPUISearchFirstTimeViewController, SPUISearchHeader, SPUITestingHelper, _UILegibilitySettings;
@protocol SPUISearchViewControllerDelegate;

@interface SPUISearchViewController : UIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SPUIResultsViewDelegate, UIGestureRecognizerDelegate, SFFeedbackListener, SearchUIResultsViewDelegate, APUIShortLookViewControllerDelegate>
{
    BOOL _internetOverrideForPPT;
    BOOL _lastQueryWasAuthenticated;
    id <SPUISearchViewControllerDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    SPUISearchHeader *_searchHeader;
    NSMutableSet *_allHeaderViews;
    SPUISearchFirstTimeViewController *_firstTimeExperienceViewController;
    SPUIResultsViewController *_searchResultViewController;
    SPUIResultsViewController *_proactiveResultViewController;
    SPUILockScreenFooterView *_lockScreenFooterView;
    NSUInteger _presentationMode;
    double _timeAtDismissal;
    SPUITestingHelper *_testingHelper;
    NSUInteger _queryId;
}

+ (BOOL)isFeedbackSelector:(SEL)arg1;
+ (void)_updateHeaderView:(id)arg1 fromText:(id)arg2 fromToken:(id)arg3;
+ (BOOL)shouldShowAsTypedSuggestion;
@property NSUInteger queryId; // @synthesize queryId=_queryId;
@property(retain) SPUITestingHelper *testingHelper; // @synthesize testingHelper=_testingHelper;
@property double timeAtDismissal; // @synthesize timeAtDismissal=_timeAtDismissal;
@property BOOL lastQueryWasAuthenticated; // @synthesize lastQueryWasAuthenticated=_lastQueryWasAuthenticated;
@property BOOL internetOverrideForPPT; // @synthesize internetOverrideForPPT=_internetOverrideForPPT;
@property NSUInteger presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain) SPUILockScreenFooterView *lockScreenFooterView; // @synthesize lockScreenFooterView=_lockScreenFooterView;
@property(retain) SPUIResultsViewController *proactiveResultViewController; // @synthesize proactiveResultViewController=_proactiveResultViewController;
@property(retain) SPUIResultsViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
@property(retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController; // @synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController;
@property(retain) NSMutableSet *allHeaderViews; // @synthesize allHeaderViews=_allHeaderViews;
@property(retain) SPUISearchHeader *searchHeader; // @synthesize searchHeader=_searchHeader;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SPUISearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)_canShowWhileLocked;
- (void)hideKeyboard;
- (void)didBeginScrollingResults;
- (void)cancelButtonPressed;
- (BOOL)queryIsPresent;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (BOOL)allowInternet;
- (void)willUpdateFromResults;
- (void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(BOOL)arg3;
- (id)proactiveResultsTestingObject;
- (id)searchResultsTestingObject;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)setInternetOverrideToDisable:(BOOL)arg1;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)activateFirstTimeExperienceViewAnimate:(BOOL)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)activateViewController:(id)arg1 animate:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (id)activeViewController;
- (void)didUpdateContentScrolledOffScreenStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (id)currentQuery;
- (id)contentScrollView;
- (void)didChangeExpansionStateForSection:(id)arg1 expanded:(BOOL)arg2;
- (BOOL)sectionShouldBeExpanded:(id)arg1;
- (id)viewControllerForPresenting;
- (void)didScrollPastBottomOfContent;
- (void)didTapInEmptyRegion;
- (void)searchViewDidDismissWithReason:(NSUInteger)arg1;
- (void)clearSearchResults;
- (void)returnKeyPressed;
- (void)clearTimerExpired;
- (void)searchViewWillDismissWithReason:(NSUInteger)arg1;
- (void)searchViewDidPresentFromSource:(NSUInteger)arg1;
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (void)dismissCancelButtonAnimated;
- (void)showVerticalScrollIndicators:(BOOL)arg1;
- (void)purgeMemory;
- (void)searchViewDidUpdatePresentationProgress:(double)arg1;
- (void)searchViewWillPresentFromSource:(NSUInteger)arg1;
- (void)performSearchWithSuggestion:(id)arg1;
- (void)performTestSearchWithQuery:(id)arg1 event:(NSUInteger)arg2 sourcePreference:(long long)arg3;
- (void)performSearchWithQuery:(id)arg1 forSuggestions:(BOOL)arg2;
- (void)shortLookViewController:(id)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(BOOL)arg3 shouldClearAction:(BOOL)arg4;
- (void)sendActionFeedbackFromShortLookViewController:(id)arg1 isPunchout:(BOOL)arg2;
- (void)shortLookViewController:(id)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(BOOL)arg3 shouldClearAction:(BOOL)arg4;
- (void)shortLookViewController:(id)arg1 didCompleteActionWithResult:(long long)arg2;
- (void)shortLookViewController:(id)arg1 willDisplayLongLookWithReason:(long long)arg2;
- (id)shortLookViewControllerForResult:(id)arg1;
- (BOOL)hasShortLookViewControllerForResult:(id)arg1;
- (id)userActivityFromIntent:(id)arg1;
- (void)getUserActivityForResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)launchSiriWithUtteranceText:(id)arg1 source:(long long)arg2;
- (void)didEngageResult:(id)arg1;
- (void)dismissIfNecessaryForIconDrag;
- (void)searchThroughPunchoutForResult:(id)arg1 forQuery:(id)arg2;
- (void)updateHeaderViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)createAdditionalHeaderView;
@property(readonly, nonatomic) SPUISearchHeader *headerView;
- (void)dealloc;
- (void)checkClearTimer;
- (id)init;

@end

