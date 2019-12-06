//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUITableViewController.h>

#import <SearchUI/SearchUITableHeaderViewDelegate-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSMutableSet, NSString;

@interface SearchUIResultTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _shortenTopFloatingHeader;
    NSString *_queryString;
    NSMutableSet *_expandedSections;
    NSMutableSet *_sectionsThatHaveBeenExpanded;
    NSMutableOrderedSet *_potentiallyVisibleCells;
    NSMutableOrderedSet *_latestVisibleResultsAccountedForInFeedback;
    NSUInteger _lastVisibleResultsFeedbackEvent;
    NSMutableOrderedSet *_potentiallyVisibleHeaders;
    NSArray *_latestVisibleHeadersAccountedForInFeedback;
    double _cachedHeaderHeight;
}

+ (void)fetchContactsIfNeededForTableModel:(id)arg1;
@property(nonatomic) double cachedHeaderHeight; // @synthesize cachedHeaderHeight=_cachedHeaderHeight;
@property(retain, nonatomic) NSArray *latestVisibleHeadersAccountedForInFeedback; // @synthesize latestVisibleHeadersAccountedForInFeedback=_latestVisibleHeadersAccountedForInFeedback;
@property(retain, nonatomic) NSMutableOrderedSet *potentiallyVisibleHeaders; // @synthesize potentiallyVisibleHeaders=_potentiallyVisibleHeaders;
@property(nonatomic) NSUInteger lastVisibleResultsFeedbackEvent; // @synthesize lastVisibleResultsFeedbackEvent=_lastVisibleResultsFeedbackEvent;
@property(retain, nonatomic) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback; // @synthesize latestVisibleResultsAccountedForInFeedback=_latestVisibleResultsAccountedForInFeedback;
@property(retain, nonatomic) NSMutableOrderedSet *potentiallyVisibleCells; // @synthesize potentiallyVisibleCells=_potentiallyVisibleCells;
@property(retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded; // @synthesize sectionsThatHaveBeenExpanded=_sectionsThatHaveBeenExpanded;
@property(retain, nonatomic) NSMutableSet *expandedSections; // @synthesize expandedSections=_expandedSections;
@property(nonatomic) BOOL shortenTopFloatingHeader; // @synthesize shortenTopFloatingHeader=_shortenTopFloatingHeader;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
// - (void).cxx_destruct;
- (void)toggleShowMoreForSection:(NSUInteger)arg1;
- (BOOL)view:(id)arg1 isVisibleInBounds:(CGRect)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)sendVisibleFeedbackIfNecessary;
- (void)scrollViewDidScroll:(id)arg1;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)modalViewControllerClosed;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (void)setShouldUseInsetRoundedSections:(BOOL)arg1;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(BOOL)arg2;
- (void)performExpansion:(BOOL)arg1 withSectionIndex:(NSUInteger)arg2;
- (BOOL)sectionIsClearable:(id)arg1;
- (void)expandCellsIfNeeded;
- (void)viewWillAppear:(BOOL)arg1;
- (void)clearResultsFromSection:(id)arg1;
- (void)toggleExpansionForSection:(id)arg1;
- (double)offScreenContentScrollDistance;
@property(readonly, nonatomic) double headerHeight;
- (BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg1;
- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg1 performOpenIfSo:(BOOL)arg2;
- (BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1;
- (NSUInteger)handleSelectionOfResult:(id)arg1;
- (NSUInteger)handleSelectionAtIndexPath:(id)arg1 wasPop:(BOOL)arg2;
- (void)didEngageResult:(id)arg1;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2;
- (BOOL)sectionShouldBeExpanded:(id)arg1;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
- (void)scrollSectionToTop:(NSUInteger)arg1 animate:(BOOL)arg2;
- (BOOL)updateMustAccountForLayout;
- (void)scrollTableToTop;
- (void)purgeMemory;
- (void)updateWithResultSections:(id)arg1 scrollToTop:(BOOL)arg2;
- (void)purgeAndResetTable;
- (id)init;

@end

