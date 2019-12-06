//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecLegacySearchResult.h>

#import <SafariShared/WBSParsecSearchMapsResult-Protocol.h>

@class WBSParsecSearchMapsResultFeedbackSender;
@protocol WBSParsecSearchSession;

@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult <WBSParsecSearchMapsResult>
{
    id <WBSParsecSearchSession> _parsecSearchSession;
    WBSParsecSearchMapsResultFeedbackSender *_mapsFeedbackSender;
}

@property(retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender; // @synthesize mapsFeedbackSender=_mapsFeedbackSender;
@property(retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

