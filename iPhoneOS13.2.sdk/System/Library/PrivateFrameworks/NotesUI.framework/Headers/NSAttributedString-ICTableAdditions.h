//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSAttributedString (ICTableAdditions)
- (id)ic_textTablesInRange:(NSRange *)arg1;
- (NSUInteger)ic_numberOfTables;
- (NSRange *)ic_rangeofNextTableFromIndex:(NSUInteger)arg1;
- (id)ic_nextTableStringFromIndex:(NSUInteger)arg1 tableRange:(NSRange * )arg2;
- (NSUInteger)ic_numRowsForTextTable:(id)arg1 outNumColumns:(out NSUInteger )arg2;
// - (CDStruct_4bcfbbae)ic_tableSizeForTextTable:(id)arg1 inRange:(NSRange *)arg2;
- (id)ic_itemProviderDataForUTI:(id)arg1;
- (id)ic_attributedStringByHighlightingRegex:(id)arg1 withHighlightColor:(UIColor )arg2;
- (long long)ic_writingDirectionAtIndex:(NSUInteger)arg1;
- (id)ic_attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(UIColor )arg2;
- (id)ic_stringWithoutAttachments;
- (id)ic_stringByTrimmingLeadingTrailingWhitespace;
- (NSRange *)ic_rangeForAttachment:(id)arg1 withTextAttachment:(id )arg2;
@end

