//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPTopic.h>

@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic
{
    PPTopicRecord *_mostRelevantRecord;
}

// - (void).cxx_destruct;
- (double)sentimentScore;
- (id)mostRelevantRecord;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2;

@end

