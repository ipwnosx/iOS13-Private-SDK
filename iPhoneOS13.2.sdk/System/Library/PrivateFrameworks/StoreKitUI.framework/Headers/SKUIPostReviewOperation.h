//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation
{
    NSDictionary *_responseDictionary;
    SKUIReviewMetadata *_review;
}

// - (void).cxx_destruct;
- (id)_httpBody;
- (void)run;
@property(readonly) NSDictionary *responseDictionary;
- (id)initWithReviewMetadata:(id)arg1;

@end

