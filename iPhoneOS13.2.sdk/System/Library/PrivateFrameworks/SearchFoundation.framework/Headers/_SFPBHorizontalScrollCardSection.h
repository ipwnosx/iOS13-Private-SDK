//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBHorizontalScrollCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor;

@interface _SFPBHorizontalScrollCardSection : PBCodable <_SFPBHorizontalScrollCardSection, NSSecureCoding>
{
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSArray *_cardSections;
    NSUInteger _numberOfRows;
}

@property(nonatomic) NSUInteger numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)cardSectionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)cardSectionsCount;
- (void)addCardSections:(id)arg1;
- (void)clearCardSections;
- (id)punchoutOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

@end

