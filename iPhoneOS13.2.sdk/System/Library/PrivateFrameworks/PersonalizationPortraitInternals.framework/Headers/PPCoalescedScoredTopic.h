//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject
{
    unsigned short _occurrencesInSource;
//     struct PPScoredItem _scoredTopic;
}

@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) PPScoredItem *scoredTopic; // @synthesize scoredTopic=_scoredTopic;
// - (void).cxx_destruct;
- (id)init;
// - (id)initWithScoredTopic:(struct PPScoredItem )arg1 occurrencesInSource:(unsigned short)arg2;

@end

