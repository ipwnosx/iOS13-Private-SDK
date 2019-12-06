//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCModifyRecordsCommand.h>

@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand
{
    NSArray *_historyItems;
    NSArray *_recordItems;
}

+ (id)desiredKeys;
@property(readonly, copy, nonatomic) NSArray *recordItems; // @synthesize recordItems=_recordItems;
@property(readonly, copy, nonatomic) NSArray *historyItems; // @synthesize historyItems=_historyItems;
// - (void).cxx_destruct;
- (BOOL)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;
- (id)recordZoneName;
- (id)initWithHistoryItems:(id)arg1 merge:(BOOL)arg2;

@end

