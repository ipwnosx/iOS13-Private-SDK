//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/SFFeedbackListener-Protocol.h>

@class NSArray;

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener>
{
    int _uiTarget;
    NSArray *_sections;
}

+ (id)feedbackListenerForParsec;
// - (void).cxx_destruct;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)didRankSections:(id)arg1;
- (id)traits;
- (id)initWithClientType:(NSUInteger)arg1;
- (id)init;

@end

