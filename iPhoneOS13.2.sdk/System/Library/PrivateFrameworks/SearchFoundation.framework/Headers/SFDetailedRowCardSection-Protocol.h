//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFButton, SFColor, SFFormattedText, SFImage, SFRichText;

@protocol SFDetailedRowCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFButton *button;
@property(retain, nonatomic) SFActionItem *action;
@property(retain, nonatomic) SFFormattedText *trailingBottomText;
@property(retain, nonatomic) SFFormattedText *trailingMiddleText;
@property(retain, nonatomic) SFFormattedText *trailingTopText;
@property(retain, nonatomic) SFRichText *footnote;
@property(copy, nonatomic) NSArray *descriptions;
@property(nonatomic) BOOL isSecondaryTitleDetached;
@property(retain, nonatomic) SFImage *secondaryTitleImage;
@property(retain, nonatomic) SFFormattedText *secondaryTitle;
@property(retain, nonatomic) SFRichText *title;
@property(nonatomic) BOOL preventThumbnailImageScaling;
@property(retain, nonatomic) SFImage *thumbnail;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

