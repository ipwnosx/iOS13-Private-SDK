//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGSuggester-Protocol.h>

@class PGSuggestionOptions;
@protocol PGSuggestion;

@protocol PGCoordinatableSuggester <PGSuggester>
- (void)reset;
- (id <PGSuggestion>)nextSuggestion;
- (void)startSuggestingWithOptions:(PGSuggestionOptions *)arg1;
@end

