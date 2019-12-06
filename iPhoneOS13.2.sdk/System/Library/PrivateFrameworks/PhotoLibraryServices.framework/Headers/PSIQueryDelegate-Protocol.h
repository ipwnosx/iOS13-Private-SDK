//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSIGroupResultDelegate-Protocol.h>
#import <PhotoLibraryServices/PSITopAssetsResultDelegate-Protocol.h>

@class NSArray, NSIndexSet, NSObject, NSString, PSIDateFilter, PSIGroup, PSIGroupResult, PSIQuery, PSITokenizer;
@protocol OS_dispatch_queue;

@protocol PSIQueryDelegate <PSIGroupResultDelegate, PSITopAssetsResultDelegate>
@property(readonly) NSObject<OS_dispatch_queue> *groupResultsQueue;
@property(readonly) PSITokenizer *tokenizer;
- (NSArray *)suggestionWhitelistedScenes;
- (NSString *)meNodeIdentifier;
- (NSArray *)groupArraysFromGroupIdSets:(NSArray *)arg1 dateFilter:(PSIDateFilter *)arg2 progressBlock:(void (^)(double, BOOL ))arg3;
- (NSArray *)wordEmbeddingMatchesForToken:(NSString *)arg1;
- (PSIGroupResult *)groupResultWithDateFilter:(PSIDateFilter *)arg1 datedTokens:(NSArray *)arg2;
- (PSIGroup *)groupWithMatchingGroupId:(NSUInteger)arg1 dateFilter:(PSIDateFilter *)arg2;
//  (const struct __CFSet )groupIdsMatchingString:(NSString *)arg1 categories:(NSIndexSet *)arg2 textIsSearchable:(BOOL)arg3;
- (void)executeQuery:(PSIQuery *)arg1 resultsHandler:(void (^)(NSArray *))arg2;
@end

