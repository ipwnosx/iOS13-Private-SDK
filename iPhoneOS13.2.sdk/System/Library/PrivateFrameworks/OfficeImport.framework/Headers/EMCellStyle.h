//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMStyle.h>


@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellStyle : CMStyle <NSCopying>
{
    EDStyle *_edStyle;
    int _edCellType;
    double _columnWidth;
    double _contentWidth;
    BOOL _truncateContents;
    BOOL _resolvedProperties;
}

+ (id)_parseFontName:(id)arg1 nameContainsBold:(BOOL )arg2 nameContainsItalic:(BOOL )arg3;
+ (double)contentWidthForColumnWidth:(double)arg1;
+ (id)styleForFont:(id)arg1;
// - (void).cxx_destruct;
- (id)cacheFriendlyCSSStyleString;
- (id)cssStyleString;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)addAlignmentStyle:(id)arg1;
- (void)addBordersStyle:(id)arg1;
- (void)addFillStyle:(id)arg1;
- (void)addFontStyle:(id)arg1;
- (void)resolveContentWidth;
- (void)resolveFormatType;
- (id)initWithEDStyle:(id)arg1 type:(int)arg2 columnWidth:(NSUInteger)arg3 contentWidth:(NSUInteger)arg4 truncateContents:(BOOL)arg5;

@end

