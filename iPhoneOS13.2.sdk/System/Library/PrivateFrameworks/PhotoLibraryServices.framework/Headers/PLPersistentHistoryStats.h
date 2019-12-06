//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPersistentHistoryStats : NSObject
{
    long long _filePageCount;
    long long _transactionsPageCount;
    long long _transactionStringsPageCount;
    long long _changesPageCount;
}

+ (id)statsFromDatabase:(id)arg1;
@property(nonatomic) long long changesPageCount; // @synthesize changesPageCount=_changesPageCount;
@property(nonatomic) long long transactionStringsPageCount; // @synthesize transactionStringsPageCount=_transactionStringsPageCount;
@property(nonatomic) long long transactionsPageCount; // @synthesize transactionsPageCount=_transactionsPageCount;
@property(nonatomic) long long filePageCount; // @synthesize filePageCount=_filePageCount;
- (double)_pageCountAsPercentOfFile:(long long)arg1;
@property(readonly, nonatomic) double persistentHistoryPageCountPercent;
@property(readonly, nonatomic) double changesPageCountPercent;
@property(readonly, nonatomic) double transactionStringsPageCountPercent;
@property(readonly, nonatomic) double transactionsPageCountPercent;
@property(readonly, nonatomic) long long persistentHistoryPageCount;

@end

