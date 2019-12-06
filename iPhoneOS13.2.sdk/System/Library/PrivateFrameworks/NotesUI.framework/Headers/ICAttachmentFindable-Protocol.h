//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSAttributedString, NSString;

@protocol ICAttachmentFindable <NSObject>
- (NSRange *)selectedRangeWithinRange:(NSRange *)arg1 inFindableString:(NSAttributedString *)arg2;
- (void)setSelectedRange:(NSRange *)arg1 inFindableString:(NSAttributedString *)arg2;
- (void)replaceCharactersInRange:(NSRange *)arg1 withString:(NSString *)arg2 inFindableString:(NSAttributedString *)arg3;
- (void)drawCharactersInRange:(NSRange *)arg1 inFindableString:(NSAttributedString *)arg2 forContentView:(UIView )arg3;
- (void)scrollToRange:(NSRange *)arg1 inFindableString:(NSAttributedString *)arg2;
- (NSArray *)rectsForRange:(NSRange *)arg1 inFindableString:(NSAttributedString *)arg2;
- (UIView )viewForRange:(NSRange *)arg1 inFindableString:(NSAttributedString *)arg2;
@end

