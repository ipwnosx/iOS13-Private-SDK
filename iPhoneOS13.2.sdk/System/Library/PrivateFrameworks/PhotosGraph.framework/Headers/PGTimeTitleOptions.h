//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSSet;

@interface PGTimeTitleOptions : NSObject
{
    BOOL _filterDates;
    NSSet *_eventNodes;
    NSSet *_locationNodes;
    NSUInteger _allowedFormats;
    NSLocale *_locale;
}

@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) BOOL filterDates; // @synthesize filterDates=_filterDates;
@property(nonatomic) NSUInteger allowedFormats; // @synthesize allowedFormats=_allowedFormats;
@property(retain, nonatomic) NSSet *locationNodes; // @synthesize locationNodes=_locationNodes;
@property(retain, nonatomic) NSSet *eventNodes; // @synthesize eventNodes=_eventNodes;
// - (void).cxx_destruct;
- (id)init;

@end

