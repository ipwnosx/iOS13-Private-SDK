//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKSpendingSingleSummaryViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKSpendingSummaryFetcherObserver-Protocol.h>

@class NSArray, NSCalendar, NSIndexSet, NSMutableDictionary, NSMutableSet, NSObject, NSString, PKAccount, PKPaymentPass, PKSpendingSummaryFetcher, PKSpendingSummaryFooterContainer, UIBarButtonItem, UIScrollView;
@protocol OS_dispatch_source, PKSpendingSummaryViewControllerDelegate;

@interface PKSpendingSummaryViewController : UIViewController <PKSpendingSummaryFetcherObserver, UIScrollViewDelegate, PKSpendingSingleSummaryViewControllerDelegate>
{
    PKPaymentPass *_paymentPass;
    PKAccount *_account;
    PKSpendingSummaryFetcher *_summaryFetcher;
    NSCalendar *_currentCalendar;
    NSArray *_weeks;
    NSArray *_months;
    NSString *_navTitle;
    NSArray *_currentDataSet;
    NSUInteger _currentSummaryType;
    NSUInteger _numberOfItems;
    double _currentWidth;
    double _currentHeight;
    BOOL _transitioningMode;
    BOOL _isScrolling;
    BOOL _isDragging;
    BOOL _hasPrefetchedLeft;
    BOOL _hasPrefetchedRight;
    UIBarButtonItem *_changeModeButton;
    UIScrollView *_scrollView;
    double _collectionViewVerticalOffset;
    CGRect _previousBounds;
    NSArray *_currentMonthTransactions;
    NSMutableSet *_unusedVCs;
    NSArray *_summaryVCs;
    NSMutableDictionary *_indicesToVCMapping;
    NSMutableDictionary *_nonVisibleIndicesToVCMapping;
    NSIndexSet *_visibleIndices;
    NSUInteger _primaryIndex;
    PKSpendingSummaryFooterContainer *_footerView;
    NSMutableDictionary *_pendingCollectionViewUpdates;
    BOOL _isLowEndDevice;
    NSObject<OS_dispatch_source> *_scrollTimer;
//     struct os_unfair_lock_s _lockUpdate;
    NSMutableDictionary *_pendingUpdates;
    NSUInteger _selectionType;
    id <PKSpendingSummaryViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PKSpendingSummaryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_reportTappedButtonWithTag:(id)arg1;
- (void)invalidatedSummariesAvailable;
- (void)invalidatedSpendingSummaryOfType:(NSUInteger)arg1 startingWithDate:(id)arg2;
- (void)spendingSingleSummaryViewController:(id)arg1 changedSelection:(NSUInteger)arg2;
- (void)spendingSingleSummaryViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (BOOL)_canReloadVCs;
- (void)_reloadDataForVCAtIndex:(NSUInteger)arg1 swap:(BOOL)arg2;
- (void)_switchPrimaryIndexToIndex:(NSUInteger)arg1;
- (double)_yPositionForNonPrimaryVCs;
- (double)_transitionProgress;
- (NSUInteger)_primaryIndexAtOffset:(CGPoint)arg1;
- (double)_endOfItemAtIndex:(NSUInteger)arg1;
- (double)_startOfItemAtIndex:(NSUInteger)arg1;
- (NSUInteger)_indexAtContentOffset:(CGPoint)arg1;
- (id)_visibileIndicesAtContentOffset:(CGPoint)arg1;
- (void)_retireVCForIndex:(NSUInteger)arg1;
- (id)_recoverUnusedVC;
- (id)_dequeueNonVisibleVCForIndex:(NSUInteger)arg1;
- (id)_dequeueVCForIndex:(NSUInteger)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_loadSummariesForContentOffset:(CGPoint)arg1;
- (void)_updateAlphaAndFooterDuringTransition;
- (void)_updateNavBarContent;
- (void)_updatePrimaryViewScrolling;
- (void)_reloadPendingVCs;
- (void)_scrollViewStoppedScrolling;
- (void)_performModeChange;
- (void)_changeMode;
- (void)_updateScrollViewContentSize;
- (void)_layoutCollectionViews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 fetcher:(id)arg3 weeks:(id)arg4 months:(id)arg5 type:(NSUInteger)arg6 unit:(NSUInteger)arg7 currentMonthTransactions:(id)arg8 upcomingScheduledPayments:(id)arg9;

@end
