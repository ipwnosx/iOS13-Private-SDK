//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsMeCard;
@protocol MapsSuggestionsMeCardReader;

@protocol MapsSuggestionsMeCardObserver <MapsSuggestionsObject>
- (void)meCardReader:(id <MapsSuggestionsMeCardReader>)arg1 didUpdateMeCard:(MapsSuggestionsMeCard *)arg2;
@end

