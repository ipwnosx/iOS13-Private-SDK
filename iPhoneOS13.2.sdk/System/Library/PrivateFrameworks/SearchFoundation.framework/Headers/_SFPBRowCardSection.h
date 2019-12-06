//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBRowCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBRowCardSection : PBCodable <_SFPBRowCardSection, NSSecureCoding>
{
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _imageIsRightAligned;
    BOOL _keyNoWrap;
    BOOL _valueNoWrap;
    BOOL _cardPaddingBottom;
    int _separatorStyle;
    int _keyWeight;
    int _valueWeight;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBImage *_image;
    _SFPBRichText *_leadingText;
    _SFPBRichText *_trailingText;
    _SFPBImage *_attributionImage;
    NSString *_key;
    NSString *_value;
    _SFPBRichText *_leadingSubtitle;
    _SFPBRichText *_trailingSubtitle;
}

@property(retain, nonatomic) _SFPBRichText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property(retain, nonatomic) _SFPBRichText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property(nonatomic) BOOL cardPaddingBottom; // @synthesize cardPaddingBottom=_cardPaddingBottom;
@property(nonatomic) int valueWeight; // @synthesize valueWeight=_valueWeight;
@property(nonatomic) BOOL valueNoWrap; // @synthesize valueNoWrap=_valueNoWrap;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int keyWeight; // @synthesize keyWeight=_keyWeight;
@property(nonatomic) BOOL keyNoWrap; // @synthesize keyNoWrap=_keyNoWrap;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) _SFPBImage *attributionImage; // @synthesize attributionImage=_attributionImage;
@property(retain, nonatomic) _SFPBRichText *trailingText; // @synthesize trailingText=_trailingText;
@property(retain, nonatomic) _SFPBRichText *leadingText; // @synthesize leadingText=_leadingText;
@property(nonatomic) BOOL imageIsRightAligned; // @synthesize imageIsRightAligned=_imageIsRightAligned;
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
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
- (id)punchoutOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

@end

