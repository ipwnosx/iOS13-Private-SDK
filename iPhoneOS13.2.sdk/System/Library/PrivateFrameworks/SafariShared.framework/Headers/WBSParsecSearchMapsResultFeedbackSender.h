//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/_MKPlaceViewControllerFeedbackDelegate-Protocol.h>

@protocol WBSParsecSearchResultPresentedInCard><WBSCompletionListItem;

@interface WBSParsecSearchMapsResultFeedbackSender : NSObject <_MKPlaceViewControllerFeedbackDelegate>
{
    id <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> _searchResult;
}

@property(readonly, nonatomic) __weak id <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> searchResult; // @synthesize searchResult=_searchResult;
// - (void).cxx_destruct;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)initWithSearchResult:(id)arg1;

@end

