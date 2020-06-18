//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (DC)
- (NSUInteger)dc_lengthOfLongestLine;
- (NSRange)dc_paragraphRangeForRange:(NSRange)arg1 contentEnd:(NSUInteger )arg2;
- (id)dc_stringByReplacingCharactersInStringMap:(id)arg1;
- (id)dc_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)dc_stringByReplacingNewlineCharactersWithWhiteSpace;
- (id)dc_substringWithRange:(NSRange)arg1;
- (id)dc_substringToIndex:(NSUInteger)arg1;
- (id)dc_substringFromIndex:(NSUInteger)arg1;
- (void)dc_enumerateContentLineRangesInRange:(NSRange)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)dc_enumerateParagraphsInRange:(NSRange)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)dc_numberOfLines;
@property(readonly, nonatomic) NSString *dc_stringReplacingUnsafeHTMLCharacters;
@property(readonly, nonatomic) NSString *dc_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *dc_whitespaceAndNewlineCoalescedString;
@property(readonly, nonatomic) NSString *dc_trimmedString;
@end

