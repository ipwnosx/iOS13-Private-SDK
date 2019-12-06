//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/MWFeedParserDelegate-Protocol.h>

@class MWFeedParser;

@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate>
{
    MWFeedParser *_parser;
}

@property(retain, nonatomic) MWFeedParser *parser; // @synthesize parser=_parser;
// - (void).cxx_destruct;
- (void)feedParser:(id)arg1 didFailWithError:(id)arg2;
- (void)feedParserDidFinish:(id)arg1;
- (void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

