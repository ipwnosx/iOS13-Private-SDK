//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface WBSForYouTopic : NSObject
{
    NSString *_title;
    NSString *_identifier;
    NSArray *_associatedTopics;
    NSDate *_relevancyDate;
    NSUInteger _source;
}

@property(nonatomic) NSUInteger source; // @synthesize source=_source;
@property(readonly, nonatomic) NSDate *relevancyDate; // @synthesize relevancyDate=_relevancyDate;
@property(copy, nonatomic) NSArray *associatedTopics; // @synthesize associatedTopics=_associatedTopics;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 relevancyDate:(id)arg3 source:(NSUInteger)arg4;

@end

