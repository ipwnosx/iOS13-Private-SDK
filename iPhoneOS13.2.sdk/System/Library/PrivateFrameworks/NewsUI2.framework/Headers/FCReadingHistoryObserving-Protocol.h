//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FCReadingHistory, NSArray, NSDictionary;
@protocol FCHeadlineProviding;

@protocol FCReadingHistoryObserving <NSObject>

@optional
- (void)readingHistory:(FCReadingHistory *)arg1 didAddHeadline:(id <FCHeadlineProviding>)arg2 fromGroupType:(long long)arg3 swipedToArticle:(BOOL)arg4 withOnScreenChecker:(BOOL (^)(void))arg5;
- (void)readingHistory:(FCReadingHistory *)arg1 didChangeFeaturesForArticles:(NSDictionary *)arg2;
- (void)readingHistory:(FCReadingHistory *)arg1 didAddArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistory:(FCReadingHistory *)arg1 didRemoveArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistoryLikelyClearedRemotely:(FCReadingHistory *)arg1;
- (void)readingHistoryDidClear:(FCReadingHistory *)arg1;
@end

