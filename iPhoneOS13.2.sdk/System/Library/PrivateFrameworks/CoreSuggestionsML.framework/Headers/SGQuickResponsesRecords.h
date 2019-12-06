//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGQuickResponsesRecords : NSObject
{
    NSArray *_replyRecords;
    double _totalOpportunities;
    double _totalDisplayed;
    double _totalSelected;
    double _totalMatched;
    double _totalUnmatched;
}

@property(readonly, nonatomic) double totalUnmatched; // @synthesize totalUnmatched=_totalUnmatched;
@property(readonly, nonatomic) double totalMatched; // @synthesize totalMatched=_totalMatched;
@property(readonly, nonatomic) double totalSelected; // @synthesize totalSelected=_totalSelected;
@property(readonly, nonatomic) double totalDisplayed; // @synthesize totalDisplayed=_totalDisplayed;
@property(readonly, nonatomic) double totalOpportunities; // @synthesize totalOpportunities=_totalOpportunities;
@property(readonly, nonatomic) NSArray *replyRecords; // @synthesize replyRecords=_replyRecords;
// - (void).cxx_destruct;
- (id)initWithReplyRecords:(id)arg1 totalOpportunities:(double)arg2 totalDisplayed:(double)arg3 totalSelected:(double)arg4 totalMatched:(double)arg5 totalUnmatched:(double)arg6;

@end

