//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject
{
    BOOL _shouldShowAlternateHeadlines;
    NSString *_feldsparID;
}

+ (BOOL)isDebugModeEnabled;
@property(nonatomic) BOOL shouldShowAlternateHeadlines; // @synthesize shouldShowAlternateHeadlines=_shouldShowAlternateHeadlines;
@property(readonly, copy, nonatomic) NSString *feldsparID; // @synthesize feldsparID=_feldsparID;
// - (void).cxx_destruct;
- (id)metadataForDefaultHeadlineWithTitle:(id)arg1;
- (id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3;
- (id)initWithShouldShowAlternateHeadlines:(BOOL)arg1;

@end

