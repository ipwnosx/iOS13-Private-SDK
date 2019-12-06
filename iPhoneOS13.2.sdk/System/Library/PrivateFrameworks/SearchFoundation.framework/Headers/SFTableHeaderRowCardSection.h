//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTableRowCardSection.h>

#import <SearchFoundation/SFTableHeaderRowCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFTableAlignmentSchema;

@interface SFTableHeaderRowCardSection : SFTableRowCardSection <SFTableHeaderRowCardSection, NSSecureCoding, NSCopying>
{
//     CDStruct_dff33cb6 _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isSubHeader;
    BOOL _reducedRowHeight;
    BOOL _alignRowsToHeader;
    int _separatorStyle;
    int _verticalAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_tableIdentifier;
    SFTableAlignmentSchema *_alignmentSchema;
    NSArray *_data;
    NSString *_tabGroupIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) BOOL reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) BOOL isSubHeader;
@property(copy, nonatomic) NSArray *data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasAlignRowsToHeader;
- (BOOL)hasVerticalAlign;
- (BOOL)hasReducedRowHeight;
- (BOOL)hasIsSubHeader;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

@end

