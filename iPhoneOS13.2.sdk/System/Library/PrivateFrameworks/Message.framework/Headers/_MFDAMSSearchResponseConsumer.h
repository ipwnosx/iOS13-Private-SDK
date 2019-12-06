//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/_MFDAMSBasicConsumer.h>

#import <Message/DASearchQueryConsumer-Protocol.h>

@class MFConditionLock, MFMailMessageStoreSearchResult, NSDate;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer>
{
    NSDate *latestDateToAdd;
    NSDate *earliestDateAdded;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
    MFMailMessageStoreSearchResult *searchResult;
}

@property(readonly, nonatomic) NSDate *earliestDateAdded; // @synthesize earliestDateAdded;
@property(readonly, nonatomic) MFMailMessageStoreSearchResult *searchResult; // @synthesize searchResult;
@property(retain, nonatomic) NSDate *latestDateToAdd; // @synthesize latestDateToAdd;
// - (void).cxx_destruct;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (BOOL)handleItems:(id)arg1;
- (void)resetDoneCondition;
- (void)waitUntilDone;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end

