//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFText-Protocol.h>

@class NSData, NSDictionary, SFImage;

@protocol SFFormattedText <SFText>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int textColor;
@property(nonatomic) BOOL isBold;
@property(nonatomic) BOOL isEmphasized;
@property(retain, nonatomic) SFImage *glyph;
@end

