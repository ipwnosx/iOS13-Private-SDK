//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSString;

@interface EDAMSearchSuggestionQuery : FATObject
{
    NSString *_prefix;
    EDAMNoteFilter *_contextFilter;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMNoteFilter *contextFilter; // @synthesize contextFilter=_contextFilter;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
// - (void).cxx_destruct;

@end

