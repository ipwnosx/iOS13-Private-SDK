//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber;

@interface EDAMNoteList : FATObject
{
    NSNumber *_startIndex;
    NSNumber *_totalNotes;
    NSArray *_notes;
    NSArray *_stoppedWords;
    NSArray *_searchedWords;
    NSNumber *_updateCount;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSArray *searchedWords; // @synthesize searchedWords=_searchedWords;
@property(retain, nonatomic) NSArray *stoppedWords; // @synthesize stoppedWords=_stoppedWords;
@property(retain, nonatomic) NSArray *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSNumber *totalNotes; // @synthesize totalNotes=_totalNotes;
@property(retain, nonatomic) NSNumber *startIndex; // @synthesize startIndex=_startIndex;
// - (void).cxx_destruct;

@end

