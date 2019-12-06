//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGRealtimeSuggestionsTuple : NSObject
{
    NSArray *_contacts;
    NSArray *_events;
    NSArray *_reminders;
    NSArray *_invalidatedIdentifiers;
}

@property(retain) NSArray *invalidatedIdentifiers; // @synthesize invalidatedIdentifiers=_invalidatedIdentifiers;
@property(retain) NSArray *reminders; // @synthesize reminders=_reminders;
@property(retain) NSArray *events; // @synthesize events=_events;
@property(retain) NSArray *contacts; // @synthesize contacts=_contacts;
// - (void).cxx_destruct;
- (id)combinedSuggestions;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)suggestionsCount;

@end

