//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSMutableAttributedString (DataDetectorsSupport)
- (void)dd_replaceResultAttributesWithSimpleLinksForTypes:(NSUInteger)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(NSUInteger)arg1 context:(id)arg2 range:(NSRange *)arg3;
- (void)dd_makeLinksForResultsInAttributesOfType:(NSUInteger)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(NSUInteger)arg1 usingURLificationBlock:(CDUnknownBlockType)arg2 context:(id)arg3 range:(NSRange *)arg4;
- (BOOL)dd_urlifyClientRange:(NSRange *)arg1 index:(NSUInteger)arg2 context:(id)arg3;
- (BOOL)dd_urlifyResult:(id)arg1 withBlock:(CDUnknownBlockType)arg2 referenceDate:(id)arg3 context:(id)arg4;
- (void)dd_appendUrl:(id)arg1 context:(id)arg2 range:(NSRange *)arg3 backedAttributes:(id)arg4;
- (void)dd_resetResults:(BOOL)arg1;
- (void)dd_resetResults;
@end

