//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString;

@protocol _SFPBTextColumnSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) unsigned int textWeight;
@property(nonatomic) BOOL textNoWrap;
@property(copy, nonatomic) NSArray *textLines;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)textLinesAtIndex:(NSUInteger)arg1;
- (NSUInteger)textLinesCount;
- (void)addTextLines:(NSString *)arg1;
- (void)clearTextLines;
@end

