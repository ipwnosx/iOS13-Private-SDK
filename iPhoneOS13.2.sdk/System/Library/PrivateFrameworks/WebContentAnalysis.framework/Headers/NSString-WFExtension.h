//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;
+ (id)WF_ignorableCharacterSet;
- (id)WF_stringWithMostSignificatDomainPart;
- (BOOL)_isIPv4DomainAddress;
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(NSUInteger)arg1;
- (long long)WF_numericCompare:(id)arg1;
- (id)WF_fuzzyStringWithWordLength:(int)arg1;
- (id)WF_stringByConvertingSpacesInHTMLSpaces;
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;
- (id)WF_stringByEscapingPrintfArguments;
- (id)WF_stringByRemovingWord:(id)arg1;
- (NSRange *)WF_rangeOfWord:(id)arg1;
- (BOOL)WF_containsWord:(id)arg1;
- (BOOL)WF_containsString:(id)arg1 options:(NSUInteger)arg2;
- (BOOL)WF_containsString:(id)arg1;
@end

