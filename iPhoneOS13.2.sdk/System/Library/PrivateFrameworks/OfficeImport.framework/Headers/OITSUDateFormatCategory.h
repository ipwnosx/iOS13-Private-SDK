//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatCategory : NSObject
{
//    struct __CFDateFormatter _initialFormatter;
    NSMutableArray *_entries;
}

// - (void).cxx_destruct;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id )arg3 perfect:(BOOL )arg4;
- (id)entryForSeparator:(unsigned short)arg1;
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(id)arg3;
- (id)formatStringsDictionary;
- (id)initialPattern;
- (void)dealloc;
- (id)initWithInitialPattern:(id)arg1 locale:(id)arg2;

@end

