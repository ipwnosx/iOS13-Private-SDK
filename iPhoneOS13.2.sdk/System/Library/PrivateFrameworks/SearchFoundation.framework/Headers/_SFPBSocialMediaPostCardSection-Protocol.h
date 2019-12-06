//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBImage, _SFPBPunchout, _SFPBRichText;

@protocol _SFPBSocialMediaPostCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSString *timestamp;
@property(retain, nonatomic) _SFPBImage *picture;
@property(retain, nonatomic) _SFPBRichText *post;
@property(retain, nonatomic) _SFPBImage *profilePicture;
@property(retain, nonatomic) _SFPBImage *verifiedGlyph;
@property(copy, nonatomic) NSString *handle;
@property(nonatomic) int nameMaxLines;
@property(nonatomic) BOOL nameNoWrap;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

