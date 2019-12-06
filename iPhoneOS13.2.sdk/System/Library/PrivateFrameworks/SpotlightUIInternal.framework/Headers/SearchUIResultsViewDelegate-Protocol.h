//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SFResultSection, SFSearchResult, UIViewController;
@protocol SearchUIResultShortLook;

@protocol SearchUIResultsViewDelegate <NSObject>

@optional
- (void)dismissIfNecessaryForIconDrag;
- (void)getUserActivityForResult:(SFSearchResult *)arg1 completionHandler:(void (^)(NSUserActivity *))arg2;
- (UIViewController<SearchUIResultShortLook> *)shortLookViewControllerForResult:(SFSearchResult *)arg1;
- (BOOL)hasShortLookViewControllerForResult:(SFSearchResult *)arg1;
- (void)didScrollPastBottomOfContent;
- (void)didUpdateContentScrolledOffScreenStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didBeginScrollingResults;
- (void)didChangeExpansionStateForSection:(SFResultSection *)arg1 expanded:(BOOL)arg2;
- (BOOL)sectionShouldBeExpanded:(SFResultSection *)arg1;
- (void)clearResultsFromSection:(SFResultSection *)arg1;
- (BOOL)sectionIsClearable:(SFResultSection *)arg1;
- (void)didTapInEmptyRegion;
@end

