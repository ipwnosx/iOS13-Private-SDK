//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject
{
    int _options;
    NSArray *_components;
    NSArray *_asciiComponents;
    NSData *_wholeSearchStringData;
    NSData *_context;
}

- (void)dealloc;
- (id)initWithSearchString:(id)arg1 options:(int)arg2;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3;
- (BOOL)matches:(id)arg1 matchType:(int)arg2;
- (BOOL)matches:(id)arg1;
- (BOOL)matchesUTF8String:(const char )arg1 matchType:(int)arg2;
- (BOOL)matchesUTF8String:(const char )arg1 matchType:(int)arg2 matchOptions:(int)arg3;
- (BOOL)matchesUTF8String:(const char )arg1;
- (BOOL)matchesASCIIString:(const char )arg1 matchType:(int)arg2;

@end

