//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (PGNSStringExtensions)
- (NSUInteger)pg_levenshteinDistanceToString:(id)arg1;
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(NSUInteger)arg2;
- (id)pg_stringByRemovingDates;
- (id)_pg_stringByRemovingRegExPattern:(id)arg1;
- (id)pg_stringByRemovingParentheses;
- (id)pg_stringByRemovingParenthesesAndBrackets;
@end
